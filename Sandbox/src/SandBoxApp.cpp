#include <Cheese.h>
#include <Cheese/Core/EntryPoint.h>

#include "Platform/OpenGL/OpenGLShader.h"
#include <imgui/imgui.h>

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Sandbox2D.h"

class Sandbox : public Cheese::Application
{
public:
	Sandbox()
	{
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{

	}

};

Cheese::Application* Cheese::CreateApplication()
{
	return new Sandbox();
}

