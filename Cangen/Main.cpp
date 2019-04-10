#include <iostream>
#include <GLFW/glfw3.h>

#include "CApplication.h"

CApplication app;

int main() {
	app.ApplicationName = "Cangen Test";
	app.InitGame();
	app.CreateWindow();
	glClearColor(1, 0, 0, 0);



	while (!glfwWindowShouldClose(app.window)) {


		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // clear the framebuffer

		glfwSwapBuffers(app.window); // swap the color buffers

		// Poll for window events. The key callback above will only be
		// invoked during this call.
		glfwPollEvents();

		
	}

	app.ShutdownGame();
}