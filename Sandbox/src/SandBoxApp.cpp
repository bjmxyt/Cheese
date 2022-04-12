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
		CS_INFO("ExampleLayer::Update");
	}

	void OnEvent(Cheese::Event& event) override
	{
		CS_TRACE("{0}", event);
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