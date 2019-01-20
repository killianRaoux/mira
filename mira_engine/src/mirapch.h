#pragma once
#include "utils/Log.h"

typedef char  int8;
typedef short int16;
typedef int   int32;
typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;

#include <iostream>

#define MIRA_CORE_ERROR(...)    ::mira::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MIRA_CORE_WARN(...)     ::mira::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MIRA_CORE_INFO(...)     ::mira::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MIRA_CORE_TRACE(...)    ::mira::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MIRA_CORE_CRITICAL(...) ::mira::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define MIRA_ERROR(...)         ::mira::Log::GetClientLogger()->error(__VA_ARGS__)
#define MIRA_WARM(...)          ::mira::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MIRA_INFO(...)          ::mira::Log::GetClientLogger()->info(__VA_ARGS__)
#define MIRA_TRACE(...)         ::mira::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MIRA_CRITICAL(...)      ::mira::Log::GetClientLogger()->critical(__VA_ARGS__)