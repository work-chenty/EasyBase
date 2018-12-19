#ifndef PAT_EXPORT_DLL
#define Pat_export_dll __declspec(dllexport)

#else
#define Pat_export_dll __declspec(dllimport)


#endif // Pat_export_h__
