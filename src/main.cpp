//
// Created by sguzman on 8/4/21.
//

#include "main.h"
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE

#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <iostream>

[[noreturn]] int main() noexcept {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow *window = glfwCreateWindow(800, 600, "Vulkan Window", nullptr, nullptr);

    uint32_t extentionCount{};
    vkEnumerateInstanceExtensionProperties(nullptr, &extentionCount, nullptr);

    std::cout << extentionCount << " extensions supported" << std::endl;

    glm::mat4 matrix;
    glm::mat4 vec;
    auto test = matrix * vec;

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
}