#pragma once
#include "Cheese/Core/core.h"

#ifdef CS_PLATFORM_WINDOWS

//Implementate in sanbox
extern Cheese::Application* Cheese::CreateApplication();

int main(int argc, char** argv)
{
	Cheese::Log::Init();
	CS_CORE_WARN("Initiatlzed log!");

	auto app = Cheese::CreateApplication();
	app->Run();
	delete app;
}

#endif