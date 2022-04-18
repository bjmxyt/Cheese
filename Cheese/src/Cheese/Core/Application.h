#pragma once

#include "Core.h"

#include "Window.h"
#include "Cheese/Core/LayerStack.h"
#include "Cheese/Events/Event.h"
#include "Cheese/Events/ApplicationEvent.h"

#include "Cheese/Core/Timestep.h"
#include "Cheese/ImGui/ImGuiLayer.h"

int main(int argc, char** argv);

namespace Cheese {

	class CS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		inline Window& GetWindow() { return *m_Window; }

		inline static Application& Get() { return *s_Instance; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);
		bool OnWindowResize(WindowResizeEvent& e);

	private:
		void Run();
		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		bool m_Minimized = false;
		LayerStack m_LayerStack;

		float m_LastFrameTime = 0.0f;
	private:
		static Application* s_Instance;
		friend int ::main(int argc, char** argv);
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}