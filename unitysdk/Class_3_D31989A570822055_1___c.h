#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_3_D31989A570822055_1___C_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xBC4F140)
#define CLASS_3_D31989A570822055_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC4F0F0)
#define CLASS_3_D31989A570822055_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC4F130)

inline static constexpr unsigned int Class_3_D31989A570822055_1___c_TypeDefinitionIndex = 47102;

class Class_3_D31989A570822055_1___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D31989A570822055_1___c_TypeDefinitionIndex)->GetStaticField(0x42DF0);
	}
	static ::Class_3_D31989A570822055_1___c** StaticGet___9()
	{
		return (::Class_3_D31989A570822055_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D31989A570822055_1___c_TypeDefinitionIndex)->GetStaticField(0x42DF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D31989A570822055_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D31989A570822055_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D31989A570822055_1___C_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}
};
