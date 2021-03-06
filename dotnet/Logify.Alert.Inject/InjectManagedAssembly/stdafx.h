// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

HRESULT InjectDotNetAssembly(
	/* [in] */ LPCWSTR pwzAssemblyPath,
	/* [in] */ LPCWSTR pwzTypeName,
	/* [in] */ LPCWSTR pwzMethodName,
	/* [in] */ LPCWSTR pwzArgument);
HRESULT InjectManagedAssemblyCore(_In_ LPCWSTR lpCommand);

// TODO: reference additional headers your program requires here
