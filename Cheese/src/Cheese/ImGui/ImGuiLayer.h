#pragma once

#include "Cheese/Core/Layer.h"

#include "Cheese/Events/ApplicationEvent.h"
#include "Cheese/Events/KeyEvent.h"
#include "Cheese/Events/MouseEvent.h"

namespace Cheese {

	class CS_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		virtual void OnAttach() override;
		virtual void OnDetach() override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}