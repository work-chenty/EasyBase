#ifndef SYS_EXPORT_DLL
#define Sys_export_dll __declspec(dllexport)
#else
#define Sys_export_dll __declspec(dllimport)
#endif // Sys_export_h__
