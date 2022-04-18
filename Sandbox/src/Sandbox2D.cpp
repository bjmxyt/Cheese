#include "Sandbox2D.h"
#include <imgui/imgui.h>

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <chrono>

Sandbox2D::Sandbox2D()
	: Layer("Sandbox2D"), m_CameraController(1280.0f / 720.0f, true)
{

}

void Sandbox2D::OnAttach()
{
	CS_PROFILE_FUNCTION();

	m_CheckerboardTexture = Cheese::Texture2D::Create("assets/textures/Checkerboard.png");
}

void Sandbox2D::OnDetach()
{
	CS_PROFILE_FUNCTION();
}

void Sandbox2D::OnUpdate(Cheese::Timestep ts)
{
	CS_PROFILE_FUNCTION();

	m_CameraController.OnUpdate(ts);

	{
		CS_PROFILE_SCOPE("Renderer Prep");
		Cheese::RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1 });
		Cheese::RenderCommand::Clear();
	}

	{
		CS_PROFILE_SCOPE("Renderer Draw");
		Cheese::Renderer2D::BeginScene(m_CameraController.GetCamera());
		Cheese::Renderer2D::DrawQuad({ -1.0f, 0.0f }, { 0.8f, 0.8f }, { 0.8f, 0.2f, 0.3f, 1.0f });
		Cheese::Renderer2D::DrawQuad({ 0.5f, -0.5f }, { 0.5f, 0.75f }, { 0.2f, 0.3f, 0.8f, 1.0f });
		Cheese::Renderer2D::DrawQuad({ 0.0f, 0.0f, -0.1f }, { 10.0f, 10.0f }, m_CheckerboardTexture);
		Cheese::Renderer2D::EndScene();
	}
}

void Sandbox2D::OnImGuiRender()
{
	CS_PROFILE_FUNCTION();

	ImGui::Begin("Settings");
	ImGui::ColorEdit4("Square Color", glm::value_ptr(m_SquareColor));

	ImGui::End();
}

void Sandbox2D::OnEvent(Cheese::Event& e)
{
	m_CameraController.OnEvent(e);
}