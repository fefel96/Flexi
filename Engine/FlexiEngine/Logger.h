#pragma once
#include <string>

#ifdef FLEXIENGINE_EXPORTS
#define FLEXIENGINE_API __declspec(dllexport)
#else
#define FLEXIENGINE_API __declspec(dllimport)
#endif

enum class LogLevel
{
    Info,
    Warning,
    Error
};

class FLEXIENGINE_API Logger
{
    public:
        static void Log(const std::string& message, LogLevel level = LogLevel::Info);
};