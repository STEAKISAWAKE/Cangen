#include "CApplication.h"

void CApplication::UpdateGame()
{
	manager.update();
	manager.draw();

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glfwPollEvents();
	glfwSwapBuffers(window);
}

void CApplication::InitGame()
{
	// Register error callback first
	glfwSetErrorCallback(CUtilities::ErrorCallback);

	// Start GLFW next
	const int ret = glfwInit();
	if (GL_FALSE == ret)
	{
		std::cout << "GLFW Error!n";
	}
}

void CApplication::ShutdownGame()
{
	glfwTerminate();
}

void CApplication::CreateWindow()
{
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

	window = glfwCreateWindow(640, 480, ApplicationName, NULL, NULL);

}

void CApplication::DestroyWindow()
{
	glfwDestroyWindow(window);
}
