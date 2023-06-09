#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader
{
public:
    // program ID
    unsigned int ID;

    Shader(const char *vertexPath, const char *fragmentPath);
    // use/activate program
    void use();
    // uniform util methods
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
    void setVec3(const std::string &name, glm::vec3 vec) const;
    void setMat4(const std::string &name, glm::mat4 matrix) const;

private:
    unsigned int createShader(unsigned int type, const char *source);
    unsigned int createProgram(unsigned int vertex, unsigned int fragment);
};

#endif