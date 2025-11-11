#define FLEXIENGINE_EXPORTS
#include "Engine.h"
#include "Logger.h"
#include <iostream>

void EngineStart()
{
    Logger::Log("Engine started successfully!", LogLevel::Info);
}