#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_3_D31989A570822055___C_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x853A320)
#define CLASS_3_D31989A570822055___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x853A2D0)
#define CLASS_3_D31989A570822055___C__CTOR_OFFSET UNITYSDK_OFFSET(0x853A310)

inline static constexpr unsigned int Class_3_D31989A570822055___c_TypeDefinitionIndex = 47214;

class Class_3_D31989A570822055___c : public ::System::Object
{
public:
	static ::Class_3_D31989A570822055___c** StaticGet___9()
	{
		return (::Class_3_D31989A570822055___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D31989A570822055___c_TypeDefinitionIndex)->GetStaticField(0x3BCF0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D31989A570822055___c_TypeDefinitionIndex)->GetStaticField(0x3BCF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D31989A570822055___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D31989A570822055___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D31989A570822055___C_METHOD_1_218124418542E081_OFFSET))(this);
	}
};
