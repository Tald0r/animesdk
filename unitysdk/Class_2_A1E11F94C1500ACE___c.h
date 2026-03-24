#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_A1E11F94C1500ACE___C_METHOD_1_422AB1A19F04E217_OFFSET UNITYSDK_OFFSET(0x71EB7D0)
#define CLASS_2_A1E11F94C1500ACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x71EB780)
#define CLASS_2_A1E11F94C1500ACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x71EB7C0)

inline static constexpr unsigned int Class_2_A1E11F94C1500ACE___c_TypeDefinitionIndex = 76026;

class Class_2_A1E11F94C1500ACE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__76_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1E11F94C1500ACE___c_TypeDefinitionIndex)->GetStaticField(0x45720);
	}
	static ::Class_2_A1E11F94C1500ACE___c** StaticGet___9()
	{
		return (::Class_2_A1E11F94C1500ACE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1E11F94C1500ACE___c_TypeDefinitionIndex)->GetStaticField(0x45728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A1E11F94C1500ACE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1E11F94C1500ACE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_422AB1A19F04E217()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1E11F94C1500ACE___C_METHOD_1_422AB1A19F04E217_OFFSET))(this);
	}
};
