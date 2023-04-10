cmake_minimum_required(VERSION 3.0.0)
project(shaderUtils VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(${PROJECT_NAME} STATIC
    shader.cpp
    ${GLAD_DIR}/src/glad.c
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${GLAD_DIR}/include
    ${GLFW_DIR}/include
)