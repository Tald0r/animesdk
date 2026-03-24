#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_A3C32628D66E3C3E___C_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x7375BF0)
#define CLASS_2_A3C32628D66E3C3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7375BA0)
#define CLASS_2_A3C32628D66E3C3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7375BE0)

inline static constexpr unsigned int Class_2_A3C32628D66E3C3E___c_TypeDefinitionIndex = 54137;

class Class_2_A3C32628D66E3C3E___c : public ::System::Object
{
public:
	static ::Class_2_A3C32628D66E3C3E___c** StaticGet___9()
	{
		return (::Class_2_A3C32628D66E3C3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3C32628D66E3C3E___c_TypeDefinitionIndex)->GetStaticField(0x42360);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3C32628D66E3C3E___c_TypeDefinitionIndex)->GetStaticField(0x42368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3C32628D66E3C3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3C32628D66E3C3E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3C32628D66E3C3E___C_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}
};
