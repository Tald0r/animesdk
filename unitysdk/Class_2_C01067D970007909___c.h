#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_C01067D970007909___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB7E9DE0)
#define CLASS_2_C01067D970007909___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xB7E9DF0)
#define CLASS_2_C01067D970007909___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7E9D90)
#define CLASS_2_C01067D970007909___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E9DD0)

inline static constexpr unsigned int Class_2_C01067D970007909___c_TypeDefinitionIndex = 50542;

class Class_2_C01067D970007909___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_17()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C01067D970007909___c_TypeDefinitionIndex)->GetStaticField(0x3B6E0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_20()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C01067D970007909___c_TypeDefinitionIndex)->GetStaticField(0x3B6E8);
	}
	static ::Class_2_C01067D970007909___c** StaticGet___9()
	{
		return (::Class_2_C01067D970007909___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C01067D970007909___c_TypeDefinitionIndex)->GetStaticField(0x3B6F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C01067D970007909___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C01067D970007909___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C01067D970007909___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C01067D970007909___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
