#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_451CACB9D9D8D4D6___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x647F710)
#define CLASS_2_451CACB9D9D8D4D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x647F6C0)
#define CLASS_2_451CACB9D9D8D4D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x647F700)

inline static constexpr unsigned int Class_2_451CACB9D9D8D4D6___c_TypeDefinitionIndex = 63665;

class Class_2_451CACB9D9D8D4D6___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__19_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_451CACB9D9D8D4D6___c_TypeDefinitionIndex)->GetStaticField(0x3FA30);
	}
	static ::Class_2_451CACB9D9D8D4D6___c** StaticGet___9()
	{
		return (::Class_2_451CACB9D9D8D4D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_451CACB9D9D8D4D6___c_TypeDefinitionIndex)->GetStaticField(0x3FA38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_451CACB9D9D8D4D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_451CACB9D9D8D4D6___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_451CACB9D9D8D4D6___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
