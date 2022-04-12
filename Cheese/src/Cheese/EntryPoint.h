#pragma once

#ifdef CS_PLATFORM_WINDOWS

extern Cheese::Application* Cheese::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cheese::CreateApplication();
	app->Run();
	delete app;
}

#endif