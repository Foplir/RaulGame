#include <GLFW/glfw3.h>
#include <GLFW/glfw3native.h>
#include <cstring>
#include <Windows.h>
#include <camera.h>
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#include "learn.h"
#include <iostream>
#include <cstdlib>
#include <controls.h>

using namespace std;

RECT rct;
float vertex[] = { -1,-1,0, 1,-1,0, 1,1,0, -1,1,0 };
float texCoord[] = { 0,1, 1,1, 1,0, 0,0 };
unsigned int texture;


int main(void)
{    
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(500, 500, "test", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        key_callback(window, GLFW_KEY_E, GLFW_PRESS);

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(0.0f, 1.0f);
        glColor3f(0.0f, 1.0f, 0.0f); glVertex2f(0.87f, -0.5f);
        glColor3f(0.0f, 0.0f, 1.0f); glVertex2f(-0.87f, -0.5f);
        glEnd();
        glPopMatrix();
        
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}