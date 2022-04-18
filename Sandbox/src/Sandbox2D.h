#pragma once

#include "Cheese.h"

class Sandbox2D : public Cheese::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Cheese::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Cheese::Event& e) override;
private:
	Cheese::OrthographicCameraController m_CameraController;

	// Temp
	Cheese::Ref<Cheese::VertexArray> m_SquareVA;
	Cheese::Ref<Cheese::Shader> m_FlatColorShader;
	Cheese::Ref<Cheese::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};