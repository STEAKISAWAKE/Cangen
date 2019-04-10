#pragma once
#include <GLFW/glfw3.h>
#include <string>

#include "ECS.h"
#include "CUtilities.h"


class CApplication
{
public:
	const char* ApplicationName;
	GLFWwindow* window;

	Manager manager;
	void UpdateGame();
	void InitGame();
	void ShutdownGame();
	void CreateWindow(); 
	void DestroyWindow();
	
};

