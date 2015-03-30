#include <GL/glfw.h>
int main(int argc, char** argv)
{
    glfwInit();
    glfwOpenWindowHint(GLFW_WINDOW_NO_RESIZE, GL_TRUE);
    glfwOpenWindow(480*8/9, 480,8,8,8,8,0,0,  GLFW_WINDOW);
    glfwSetWindowTitle("HARI's  FIRST C++ OPENGL SNAKE GAME");
    bool running=true;

    while (running){
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers();
   running =glfwGetWindowParam(GLFW_OPENED);
}
   glfwTerminate();
}
