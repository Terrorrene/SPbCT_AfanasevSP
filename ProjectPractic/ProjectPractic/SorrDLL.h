#pragma once

#ifdef SORRDLL_EXPORTS
#define SORRDLL_API __declspec(dllexport)
#else
#define SORRDLL_API __declspec(dllimport)
#endif
extern "C" SORRDLL_API int sort( int* );
