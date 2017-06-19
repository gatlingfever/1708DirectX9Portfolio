#pragma once

#include "SystemDefine.h"

EXTERN class SYSTEM_DLL ISystem
{
public:										\
	static ISystem* pInstance;		\
	ISystem::pInstance = nullptr;
	static ISystem*& GetInstance(void)			\
{										\
if (!pInstance)						\
pInstance = new ISystem;			\
return pInstance;					\
}										\
static void DestroyInstance(void)		\
{										\
ISystem* pInstance = GetInstance();	\
if (pInstance)						\
{									\
delete pInstance;				\
pInstance = nullptr;			\
}									\
}

public:
	ISystem();
	~ISystem();

private:

};