#pragma once


#ifdef _WIN32
  #define MYLIB_A_EXPORT __declspec(dllexport)
#else
  #define MYLIB_A_EXPORT
#endif

MYLIB_A_EXPORT void mylib_a();
