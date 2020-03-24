#pragma once

#ifdef WIN32
#define CON_EXPORT __declspec(dllexport) 
#else
#define CON_EXPORT  
#endif

CON_EXPORT void Con();