#pragma once

#ifdef HZ_PLATFORM_WINDOWS

#include "Hazel.h"

//extern will be found somewhere else
//in our case, inside sandbox app
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) 
{
	//init to be moved to core engine
	Hazel::Log::Init();
	//try this
	HZ_CORE_WARN("Initalized core log");
	int a = 5;
	HZ_INFO("Hello Var = {0}" , a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif