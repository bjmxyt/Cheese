#include <Cheese.h>

class Sandbox : public Cheese::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Cheese::Application* Cheese::CreateApplication()
{
	return new Sandbox();
}