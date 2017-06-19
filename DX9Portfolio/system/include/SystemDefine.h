#ifndef __SYSTEMDEFINE_H__
#define __SYSTEMDEFINE_H__

#include "Define.h"
#include "SystemConstant.h"
#include "SystemEnumeration.h"
#include "SystemMacro.h"

#ifdef SYSTEM_EXPORT
	#define SYSTEM_DLL _declspec(dllexport)
#else
	#define SYSTEM_DLL _declspec(dllimport)
#endif



#endif // !__SYSTEMDEFINE_H__
