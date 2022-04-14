workspace "Cheese"
	architecture "x64"
	startproject "Sandbox"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

IncludeDir = {}
IncludeDir["GLFW"] = "Cheese/vendor/GLFW/include"
IncludeDir["Glad"] = "Cheese/vendor/Glad/include"
IncludeDir["ImGui"] = "Cheese/vendor/imgui"
IncludeDir["glm"] = "Cheese/vendor/glm"

include "Cheese/vendor/GLFW"
include "Cheese/vendor/Glad"
include "Cheese/vendor/imgui"

project "Cheese"
	location "Cheese"
	kind "SharedLib"
	language "C++"
	--dll
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "hzpch.h"
	pchsource "Cheese/src/hzpch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/vendor/glm/glm/**.hpp",
		"%{prj.name}/vendor/glm/glm/**.inl"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.Glad}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.glm}"
	}

	links
	{
		"GLFW",
		"Glad",
		"ImGui",
		"opengl32.lib"
	}

	filter "system:windows"
		cppdialect "C++17"
		systemversion "latest"

		defines
		{
			"CS_PLATFORM_WINDOWS",
			"CS_BUILD_DLL",
			"GLFW_INCLUDE_NONE"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} \"../bin/" .. outputdir .. "/Sandbox/\"")
		}

	filter "configurations:Debug"
		defines "CS_DEBUG"
		runtime "Debug"
		symbols "On"

	filter "configurations:Release"
		defines "CS_RELEASE"
		runtime "Release"
		optimize "On"

	filter "configurations:Dist"
		defines "CS_DIST"
		runtime "Release"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Cheese/vendor/spdlog/include",
		"Cheese/src",
		"%{IncludeDir.glm}"
	}

	links
	{
		"Cheese"
	}

	filter "system:windows"
		cppdialect "C++17"
		systemversion "latest"

		defines
		{
			"CS_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "CS_DEBUG"
		runtime "Debug"
		symbols "On"

	filter "configurations:Release"
		defines "CS_RELEASE"
		runtime "Release"
		optimize "On"

	filter "configurations:Dist"
		defines "CS_DIST"
		runtime "Release"
		optimize "On"