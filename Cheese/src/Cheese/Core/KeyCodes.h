#pragma once

namespace Cheese
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space = 32,
		Apostrophe = 39, /* ' */
		Comma = 44, /* , */
		Minus = 45, /* - */
		Period = 46, /* . */
		Slash = 47, /* / */

		D0 = 48, /* 0 */
		D1 = 49, /* 1 */
		D2 = 50, /* 2 */
		D3 = 51, /* 3 */
		D4 = 52, /* 4 */
		D5 = 53, /* 5 */
		D6 = 54, /* 6 */
		D7 = 55, /* 7 */
		D8 = 56, /* 8 */
		D9 = 57, /* 9 */

		Semicolon = 59, /* ; */
		Equal = 61, /* = */

		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,

		LeftBracket = 91,  /* [ */
		Backslash = 92,  /* \ */
		RightBracket = 93,  /* ] */
		GraveAccent = 96,  /* ` */

		World1 = 161, /* non-US #1 */
		World2 = 162, /* non-US #2 */

		/* Function keys */
		Escape = 256,
		Enter = 257,
		Tab = 258,
		Backspace = 259,
		Insert = 260,
		Delete = 261,
		Right = 262,
		Left = 263,
		Down = 264,
		Up = 265,
		PageUp = 266,
		PageDown = 267,
		Home = 268,
		End = 269,
		CapsLock = 280,
		ScrollLock = 281,
		NumLock = 282,
		PrintScreen = 283,
		Pause = 284,
		F1 = 290,
		F2 = 291,
		F3 = 292,
		F4 = 293,
		F5 = 294,
		F6 = 295,
		F7 = 296,
		F8 = 297,
		F9 = 298,
		F10 = 299,
		F11 = 300,
		F12 = 301,
		F13 = 302,
		F14 = 303,
		F15 = 304,
		F16 = 305,
		F17 = 306,
		F18 = 307,
		F19 = 308,
		F20 = 309,
		F21 = 310,
		F22 = 311,
		F23 = 312,
		F24 = 313,
		F25 = 314,

		/* Keypad */
		KP0 = 320,
		KP1 = 321,
		KP2 = 322,
		KP3 = 323,
		KP4 = 324,
		KP5 = 325,
		KP6 = 326,
		KP7 = 327,
		KP8 = 328,
		KP9 = 329,
		KPDecimal = 330,
		KPDivide = 331,
		KPMultiply = 332,
		KPSubtract = 333,
		KPAdd = 334,
		KPEnter = 335,
		KPEqual = 336,

		LeftShift = 340,
		LeftControl = 341,
		LeftAlt = 342,
		LeftSuper = 343,
		RightShift = 344,
		RightControl = 345,
		RightAlt = 346,
		RightSuper = 347,
		Menu = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

#define CS_KEY_SPACE		   ::Cheese::Key::Space
#define CS_KEY_APOSTROPHE      ::Cheese::Key::Apostrophe    /* ' */
#define CS_KEY_COMMA           ::Cheese::Key::Comma         /* , */
#define CS_KEY_MINUS           ::Cheese::Key::Minus         /* - */
#define CS_KEY_PERIOD          ::Cheese::Key::Period        /* . */
#define CS_KEY_SLASH           ::Cheese::Key::Slash         /* / */
#define CS_KEY_0               ::Cheese::Key::D0
#define CS_KEY_1               ::Cheese::Key::D1
#define CS_KEY_2               ::Cheese::Key::D2
#define CS_KEY_3               ::Cheese::Key::D3
#define CS_KEY_4               ::Cheese::Key::D4
#define CS_KEY_5               ::Cheese::Key::D5
#define CS_KEY_6               ::Cheese::Key::D6
#define CS_KEY_7               ::Cheese::Key::D7
#define CS_KEY_8               ::Cheese::Key::D8
#define CS_KEY_9               ::Cheese::Key::D9
#define CS_KEY_SEMICOLON       ::Cheese::Key::Semicolon     /* ; */
#define CS_KEY_EQUAL           ::Cheese::Key::Equal         /* = */
#define CS_KEY_A               ::Cheese::Key::A
#define CS_KEY_B               ::Cheese::Key::B
#define CS_KEY_C               ::Cheese::Key::C
#define CS_KEY_D               ::Cheese::Key::D
#define CS_KEY_E               ::Cheese::Key::E
#define CS_KEY_F               ::Cheese::Key::F
#define CS_KEY_G               ::Cheese::Key::G
#define CS_KEY_H               ::Cheese::Key::H
#define CS_KEY_I               ::Cheese::Key::I
#define CS_KEY_J               ::Cheese::Key::J
#define CS_KEY_K               ::Cheese::Key::K
#define CS_KEY_L               ::Cheese::Key::L
#define CS_KEY_M               ::Cheese::Key::M
#define CS_KEY_N               ::Cheese::Key::N
#define CS_KEY_O               ::Cheese::Key::O
#define CS_KEY_P               ::Cheese::Key::P
#define CS_KEY_Q               ::Cheese::Key::Q
#define CS_KEY_R               ::Cheese::Key::R
#define CS_KEY_S               ::Cheese::Key::S
#define CS_KEY_T               ::Cheese::Key::T
#define CS_KEY_U               ::Cheese::Key::U
#define CS_KEY_V               ::Cheese::Key::V
#define CS_KEY_W               ::Cheese::Key::W
#define CS_KEY_X               ::Cheese::Key::X
#define CS_KEY_Y               ::Cheese::Key::Y
#define CS_KEY_Z               ::Cheese::Key::Z
#define CS_KEY_LEFT_BRACKET    ::Cheese::Key::LeftBracket   /* [ */
#define CS_KEY_BACKSLASH       ::Cheese::Key::Backslash     /* \ */
#define CS_KEY_RIGHT_BRACKET   ::Cheese::Key::RightBracket  /* ] */
#define CS_KEY_GRAVE_ACCENT    ::Cheese::Key::GraveAccent   /* ` */
#define CS_KEY_WORLD_1         ::Cheese::Key::World1        /* non-US #1 */
#define CS_KEY_WORLD_2         ::Cheese::Key::World2        /* non-US #2 */

/* Function keys */
#define CS_KEY_ESCAPE          ::Cheese::Key::Escape
#define CS_KEY_ENTER           ::Cheese::Key::Enter
#define CS_KEY_TAB             ::Cheese::Key::Tab
#define CS_KEY_BACKSPACE       ::Cheese::Key::Backspace
#define CS_KEY_INSERT          ::Cheese::Key::Insert
#define CS_KEY_DELETE          ::Cheese::Key::Delete
#define CS_KEY_RIGHT           ::Cheese::Key::Right
#define CS_KEY_LEFT            ::Cheese::Key::Left
#define CS_KEY_DOWN            ::Cheese::Key::Down
#define CS_KEY_UP              ::Cheese::Key::Up
#define CS_KEY_PAGE_UP         ::Cheese::Key::PageUp
#define CS_KEY_PAGE_DOWN       ::Cheese::Key::PageDown
#define CS_KEY_HOME            ::Cheese::Key::Home
#define CS_KEY_END             ::Cheese::Key::End
#define CS_KEY_CAPS_LOCK       ::Cheese::Key::CapsLock
#define CS_KEY_SCROLL_LOCK     ::Cheese::Key::ScrollLock
#define CS_KEY_NUM_LOCK        ::Cheese::Key::NumLock
#define CS_KEY_PRINT_SCREEN    ::Cheese::Key::PrintScreen
#define CS_KEY_PAUSE           ::Cheese::Key::Pause
#define CS_KEY_F1              ::Cheese::Key::F1
#define CS_KEY_F2              ::Cheese::Key::F2
#define CS_KEY_F3              ::Cheese::Key::F3
#define CS_KEY_F4              ::Cheese::Key::F4
#define CS_KEY_F5              ::Cheese::Key::F5
#define CS_KEY_F6              ::Cheese::Key::F6
#define CS_KEY_F7              ::Cheese::Key::F7
#define CS_KEY_F8              ::Cheese::Key::F8
#define CS_KEY_F9              ::Cheese::Key::F9
#define CS_KEY_F10             ::Cheese::Key::F10
#define CS_KEY_F11             ::Cheese::Key::F11
#define CS_KEY_F12             ::Cheese::Key::F12
#define CS_KEY_F13             ::Cheese::Key::F13
#define CS_KEY_F14             ::Cheese::Key::F14
#define CS_KEY_F15             ::Cheese::Key::F15
#define CS_KEY_F16             ::Cheese::Key::F16
#define CS_KEY_F17             ::Cheese::Key::F17
#define CS_KEY_F18             ::Cheese::Key::F18
#define CS_KEY_F19             ::Cheese::Key::F19
#define CS_KEY_F20             ::Cheese::Key::F20
#define CS_KEY_F21             ::Cheese::Key::F21
#define CS_KEY_F22             ::Cheese::Key::F22
#define CS_KEY_F23             ::Cheese::Key::F23
#define CS_KEY_F24             ::Cheese::Key::F24
#define CS_KEY_F25             ::Cheese::Key::F25

/* Keypad */
#define CS_KEY_KP_0            ::Cheese::Key::KP0
#define CS_KEY_KP_1            ::Cheese::Key::KP1
#define CS_KEY_KP_2            ::Cheese::Key::KP2
#define CS_KEY_KP_3            ::Cheese::Key::KP3
#define CS_KEY_KP_4            ::Cheese::Key::KP4
#define CS_KEY_KP_5            ::Cheese::Key::KP5
#define CS_KEY_KP_6            ::Cheese::Key::KP6
#define CS_KEY_KP_7            ::Cheese::Key::KP7
#define CS_KEY_KP_8            ::Cheese::Key::KP8
#define CS_KEY_KP_9            ::Cheese::Key::KP9
#define CS_KEY_KP_DECIMAL      ::Cheese::Key::KPDecimal
#define CS_KEY_KP_DIVIDE       ::Cheese::Key::KPDivide
#define CS_KEY_KP_MULTIPLY     ::Cheese::Key::KPMultiply
#define CS_KEY_KP_SUBTRACT     ::Cheese::Key::KPSubtract
#define CS_KEY_KP_ADD          ::Cheese::Key::KPAdd
#define CS_KEY_KP_ENTER        ::Cheese::Key::KPEnter
#define CS_KEY_KP_EQUAL        ::Cheese::Key::KPEqual
								 
#define CS_KEY_LEFT_SHIFT      ::Cheese::Key::LeftShift
#define CS_KEY_LEFT_CONTROL    ::Cheese::Key::LeftControl
#define CS_KEY_LEFT_ALT        ::Cheese::Key::LeftAlt
#define CS_KEY_LEFT_SUPER      ::Cheese::Key::LeftSuper
#define CS_KEY_RIGHT_SHIFT     ::Cheese::Key::RightShift
#define CS_KEY_RIGHT_CONTROL   ::Cheese::Key::RightControl
#define CS_KEY_RIGHT_ALT       ::Cheese::Key::RightAlt
#define CS_KEY_RIGHT_SUPER     ::Cheese::Key::RightSuper
#define CS_KEY_MENU            ::Cheese::Key::Menu