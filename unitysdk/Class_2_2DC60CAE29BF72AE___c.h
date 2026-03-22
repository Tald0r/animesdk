#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_2DC60CAE29BF72AE___C_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x84BE340)
#define CLASS_2_2DC60CAE29BF72AE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x84BE2F0)
#define CLASS_2_2DC60CAE29BF72AE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x84BE330)

inline static constexpr unsigned int Class_2_2DC60CAE29BF72AE___c_TypeDefinitionIndex = 46968;

class Class_2_2DC60CAE29BF72AE___c : public ::System::Object
{
public:
	static ::Class_2_2DC60CAE29BF72AE___c** StaticGet___9()
	{
		return (::Class_2_2DC60CAE29BF72AE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2DC60CAE29BF72AE___c_TypeDefinitionIndex)->GetStaticField(0x372C0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__12_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2DC60CAE29BF72AE___c_TypeDefinitionIndex)->GetStaticField(0x372C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2DC60CAE29BF72AE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DC60CAE29BF72AE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DC60CAE29BF72AE___C_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}
};
