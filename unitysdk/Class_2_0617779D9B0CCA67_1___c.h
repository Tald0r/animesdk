#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_0617779D9B0CCA67_1___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x86E5A60)
#define CLASS_2_0617779D9B0CCA67_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x86E5A10)
#define CLASS_2_0617779D9B0CCA67_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x86E5A50)

inline static constexpr unsigned int Class_2_0617779D9B0CCA67_1___c_TypeDefinitionIndex = 73228;

class Class_2_0617779D9B0CCA67_1___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_9()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0617779D9B0CCA67_1___c_TypeDefinitionIndex)->GetStaticField(0x2FAB0);
	}
	static ::Class_2_0617779D9B0CCA67_1___c** StaticGet___9()
	{
		return (::Class_2_0617779D9B0CCA67_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0617779D9B0CCA67_1___c_TypeDefinitionIndex)->GetStaticField(0x2FAB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0617779D9B0CCA67_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0617779D9B0CCA67_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0617779D9B0CCA67_1___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
