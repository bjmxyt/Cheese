#include <Cheese.h>

#include "imgui/imgui.h"

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

	virtual void OnImGuiRender() override
	{
		ImGui::Begin("Test");
		ImGui::Text("Hello world");
		ImGui::End();
	}

	void OnEvent(Cheese::Event& event) override
	{
		//CS_TRACE(event);
	}

};

class Sandbox : public Cheese::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};

Cheese::Application* Cheese::CreateApplication()
{
	return new Sandbox();
}