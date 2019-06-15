#pragma once

#ifdef HZ_PLATFORM_WINDOWS

//extern will be found somewhere else
//in our case, inside sandbox app
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) 
{
	//Sandbox* sandbox = new Sandbox();

	//test delete later
	printf("Hazel Engine");
	//test delete later

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif