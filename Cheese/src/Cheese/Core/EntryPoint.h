#pragma once

#ifdef CS_PLATFORM_WINDOWS

//Implementate in sanbox
extern Cheese::Application* Cheese::CreateApplication();

int main(int argc, char** argv)
{
	Cheese::Log::Init();
	CS_CORE_WARN("Initiatlzed log!");
	int a = 5;
	CS_INFO("hello! var = {0}", a);

	auto app = Cheese::CreateApplication();
	app->Run();
	delete app;
}

#endif