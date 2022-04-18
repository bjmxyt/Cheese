#pragma once

namespace Cheese
{
	typedef enum class MouseCode : uint16_t
	{
		// From glfw3.h
		Button0 = 0,
		Button1 = 1,
		Button2 = 2,
		Button3 = 3,
		Button4 = 4,
		Button5 = 5,
		Button6 = 6,
		Button7 = 7,

		ButtonLast = Button7,
		ButtonLeft = Button0,
		ButtonRight = Button1,
		ButtonMiddle = Button2
	} Mouse;

	inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	{
		os << static_cast<int32_t>(mouseCode);
		return os;
	}
}

#define CS_MOUSE_BUTTON_0      ::Cheese::Mouse::Button0
#define CS_MOUSE_BUTTON_1      ::Cheese::Mouse::Button1
#define CS_MOUSE_BUTTON_2      ::Cheese::Mouse::Button2
#define CS_MOUSE_BUTTON_3      ::Cheese::Mouse::Button3
#define CS_MOUSE_BUTTON_4      ::Cheese::Mouse::Button4
#define CS_MOUSE_BUTTON_5      ::Cheese::Mouse::Button5
#define CS_MOUSE_BUTTON_6      ::Cheese::Mouse::Button6
#define CS_MOUSE_BUTTON_7      ::Cheese::Mouse::Button7
#define CS_MOUSE_BUTTON_LAST   ::Cheese::Mouse::ButtonLast
#define CS_MOUSE_BUTTON_LEFT   ::Cheese::Mouse::ButtonLeft
#define CS_MOUSE_BUTTON_RIGHT  ::Cheese::Mouse::ButtonRight
#define CS_MOUSE_BUTTON_MIDDLE ::Cheese::Mouse::ButtonMiddle