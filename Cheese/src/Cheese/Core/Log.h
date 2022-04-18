#pragma once

#include "Cheese/Core/core.h"

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Cheese {

	class CS_API Log
	{
	public:
		static void Init();

		inline static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define CS_CORE_TRACE(...)    ::Cheese::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CS_CORE_INFO(...)     ::Cheese::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CS_CORE_WARN(...)     ::Cheese::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CS_CORE_ERROR(...)    ::Cheese::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CS_CORE_FATAL(...)    ::Cheese::Log::GetCoreLogger()->critical(__VA_ARGS__)
							
// ClienCSlog macros			
#define CS_TRACE(...)	      ::Cheese::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CS_INFO(...)	      ::Cheese::Log::GetClientLogger()->info(__VA_ARGS__)
#define CS_WARN(...)	      ::Cheese::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CS_ERROR(...)	      ::Cheese::Log::GetClientLogger()->error(__VA_ARGS__)
#define CS_FATAL(...)	      ::Cheese::Log::GetClientLogger()->critical(__VA_ARGS__)

