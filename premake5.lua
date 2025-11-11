workspace "FlexiEngine"
   architecture "x64"
   configurations { "Debug", "Release" }
   startproject "Game"

-- Engine Project (DLL)
project "Engine"
   kind "SharedLib"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"
   objdir "bin-int/%{cfg.buildcfg}"

   files { "Engine/**.h", "Engine/**.cpp" }

   filter "system:windows"
      systemversion "latest"
      defines { "FLEXIENGINE_EXPORTS" }

   filter "configurations:Debug"
      symbols "On"

   filter "configurations:Release"
      optimize "On"

-- Game Project (Console App)
project "Game"
   kind "ConsoleApp"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"
   objdir "bin-int/%{cfg.buildcfg}"

   files { "Game/**.cpp" }
   includedirs { "Engine" }
   links { "Engine" }

   filter "system:windows"
      systemversion "latest"

   filter "configurations:Debug"
      symbols "On"

   filter "configurations:Release"
      optimize "On"
