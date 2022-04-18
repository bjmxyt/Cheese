#pragma once
#include "Cheese/Core/core.h"

#ifdef CS_PLATFORM_WINDOWS

//Implementate in sanbox
extern Cheese::Application* Cheese::CreateApplication();

int main(int argc, char** argv)
{
	Cheese::Log::Init();

	CS_PROFILE_BEGIN_SESSION("Startup", "CheeseProfile-Startup.json");
	auto app = Cheese::CreateApplication();
	CS_PROFILE_END_SESSION();

	CS_PROFILE_BEGIN_SESSION("Runtime", "CheeseProfile-Runtime.json");
	app->Run();
	CS_PROFILE_END_SESSION();

	CS_PROFILE_BEGIN_SESSION("Startup", "CheeseProfile-Shutdown.json");
	delete app;
	CS_PROFILE_END_SESSION();
}

#endif