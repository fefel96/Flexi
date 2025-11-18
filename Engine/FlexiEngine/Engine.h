#pragma once

#ifdef FLEXIENGINE_EXPORTS
#define FLEXIENGINE_API __declspec(dllexport)
#else
#define FLEXIENGINE_API __declspec(dllimport)
#endif

extern "C" FLEXIENGINE_API void EngineStart();