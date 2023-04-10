cmake_minimum_required(VERSION 3.0.0)
project(texturePractice VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME}
    main.cpp
    ${GLAD_DIR}/src/glad.c
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${GLAD_DIR}/include
    ${GLFW_DIR}/include
    ${UTILS_DIR}
)

target_link_directories(${PROJECT_NAME} PUBLIC
    ${GLFW_DIR}/lib
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    glfw
    shaderUtils
)