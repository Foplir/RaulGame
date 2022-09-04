#include <control.h>
#include <GLFW/glfw3.h>
#include <iostream>

void key_callback(GLFWwindow* window, int key, int action)
{
    if (key == GLFW_KEY_E && action == GLFW_PRESS)
        std::cout << "key pressed\n" << std::endl;
    else std::cout << "key unpressed\n" << std::endl;
}