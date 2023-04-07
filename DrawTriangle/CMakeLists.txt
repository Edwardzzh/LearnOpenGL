cmake_minimum_required(VERSION 3.0.0)
project(drawTriangle VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} main.cpp ~/Deps/glad/glad3.3/src/glad.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_include_directories(${PROJECT_NAME} PUBLIC ~/Deps/glad/glad3.3/include)

target_include_directories(${PROJECT_NAME} PUBLIC /opt/homebrew/Cellar/glfw/3.3.8/include)
target_link_directories(${PROJECT_NAME} PUBLIC /opt/homebrew/Cellar/glfw/3.3.8/lib)
target_link_libraries(${PROJECT_NAME} PUBLIC glfw)