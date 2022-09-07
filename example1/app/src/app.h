#pragma once


#ifdef _WIN32
  #define APP_EXPORT __declspec(dllexport)
#else
  #define APP_EXPORT
#endif

APP_EXPORT void app();
