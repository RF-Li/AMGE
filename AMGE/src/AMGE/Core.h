#pragma once
#ifdef AMGE_PLATFORM_WINDOWS
#ifdef AMGE_BUILD_DLL
#define AMGE_API __declspec(dllexport)  
#else
#define AMGE_API __declspec(dllimport) 
#endif
#else
#error AMGE only support windows now£¡
#endif