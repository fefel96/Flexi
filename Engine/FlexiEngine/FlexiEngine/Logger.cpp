#include "Logger.h"
#include <iostream>
#include <chrono>
#include <ctime>

void Logger::Log(const std::string& message, LogLevel level)
{
    // Zeitstempel erzeugen
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    // Sicheren Buffer anlegen (mindestens 26 Zeichen!)
    char timeBuffer[26];
    ctime_s(timeBuffer, sizeof(timeBuffer), &now_c);

    // Loglevel String bestimmen
    std::string levelStr;
    switch (level)
    {
    case LogLevel::Info: levelStr = "[INFO]"; break;
    case LogLevel::Warning: levelStr = "[WARNING]"; break;
    case LogLevel::Error: levelStr = "[ERROR]"; break;
    }

    // Ausgabe
    std::cout << timeBuffer << " " << levelStr << " " << message << std::endl;
}