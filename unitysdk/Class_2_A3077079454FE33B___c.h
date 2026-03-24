#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_A3077079454FE33B___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x83419A0)
#define CLASS_2_A3077079454FE33B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8341950)
#define CLASS_2_A3077079454FE33B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8341990)

inline static constexpr unsigned int Class_2_A3077079454FE33B___c_TypeDefinitionIndex = 41281;

class Class_2_A3077079454FE33B___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__9_11()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3077079454FE33B___c_TypeDefinitionIndex)->GetStaticField(0x3CA90);
	}
	static ::Class_2_A3077079454FE33B___c** StaticGet___9()
	{
		return (::Class_2_A3077079454FE33B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3077079454FE33B___c_TypeDefinitionIndex)->GetStaticField(0x3CA98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3077079454FE33B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3077079454FE33B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3077079454FE33B___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
