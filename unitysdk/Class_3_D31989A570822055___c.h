#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_3_D31989A570822055___C_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x9587F00)
#define CLASS_3_D31989A570822055___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9587EB0)
#define CLASS_3_D31989A570822055___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9587EF0)

inline static constexpr unsigned int Class_3_D31989A570822055___c_TypeDefinitionIndex = 48657;

class Class_3_D31989A570822055___c : public ::System::Object
{
public:
	static ::Class_3_D31989A570822055___c** StaticGet___9()
	{
		return (::Class_3_D31989A570822055___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D31989A570822055___c_TypeDefinitionIndex)->GetStaticField(0x2F3C0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D31989A570822055___c_TypeDefinitionIndex)->GetStaticField(0x2F3C8);
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
