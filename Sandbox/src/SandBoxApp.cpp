#include <Cheese.h>

class ExampleLayer : public Cheese::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		if (Cheese::Input::IsKeyPressed(CS_KEY_TAB))
		{
			CS_TRACE("Tab is down");
		}
	}

	void OnEvent(Cheese::Event& event) override
	{

	}

};

class Sandbox : public Cheese::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Cheese::ImGuiLayer());
	}

	~Sandbox()
	{

	}

};

Cheese::Application* Cheese::CreateApplication()
{
	return new Sandbox();
}