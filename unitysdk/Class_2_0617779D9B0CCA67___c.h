#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_0617779D9B0CCA67___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x6505AF0)
#define CLASS_2_0617779D9B0CCA67___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6505AA0)
#define CLASS_2_0617779D9B0CCA67___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6505AE0)

inline static constexpr unsigned int Class_2_0617779D9B0CCA67___c_TypeDefinitionIndex = 50853;

class Class_2_0617779D9B0CCA67___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_9()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0617779D9B0CCA67___c_TypeDefinitionIndex)->GetStaticField(0x40EE0);
	}
	static ::Class_2_0617779D9B0CCA67___c** StaticGet___9()
	{
		return (::Class_2_0617779D9B0CCA67___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0617779D9B0CCA67___c_TypeDefinitionIndex)->GetStaticField(0x40EE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0617779D9B0CCA67___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0617779D9B0CCA67___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0617779D9B0CCA67___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
