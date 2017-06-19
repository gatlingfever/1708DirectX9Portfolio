#ifndef __MACRO_H__
#define __MACRO_H__

#define DECLARE_SINGLETON(type)					\
	public:										\
		static type* pInstance = nullptr;		\
		static type*& GetInstance(void)			\
		{										\
			if(!pInstance)						\
				pInstance= new type;			\
			return pInstance;					\
		}										\
		static void DestroyInstance(void)		\
		{										\
			type* pInstance = GetInstance();	\
			if(pInstance)						\
			{									\
				delete pInstance;				\
				pInstance = nullptr;			\
			}									\
		}



#endif // !__MACRO_H__
