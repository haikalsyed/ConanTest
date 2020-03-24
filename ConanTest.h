#pragma once

#ifdef CONAPI_EXPORT
#define CON_EXPORT __declspec(dllexport) 
#else
#define CON_EXPORT  __declspec(dllexport) 
#endif

CON_EXPORT void Con();