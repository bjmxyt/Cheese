#pragma once

#include "Cheese.h"

class ExampleLayer : public Cheese::Layer
{
public:
	ExampleLayer();
	virtual ~ExampleLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Cheese::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Cheese::Event& e) override;
private:
	Cheese::ShaderLibrary m_ShaderLibrary;
	Cheese::Ref<Cheese::Shader> m_Shader;
	Cheese::Ref<Cheese::VertexArray> m_VertexArray;

	Cheese::Ref<Cheese::Shader> m_FlatColorShader;
	Cheese::Ref<Cheese::VertexArray> m_SquareVA;
	Cheese::Ref<Cheese::Texture2D> m_Texture, m_ChernoLogoTexture;
	Cheese::OrthographicCameraController m_CameraController;
	glm::vec3 m_SquareColor = { 0.2f, 0.3f, 0.8f };
};
