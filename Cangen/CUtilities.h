#pragma once
#include <iostream>

class CUtilities
{
public:
	void static ErrorCallback(int, const char* err_str)
	{
		std::cout << "GLFW Error: " << err_str << std::endl;
	}
};

