#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_C1720AB18E76E408___C_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x98C50F0)
#define CLASS_2_C1720AB18E76E408___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98C50A0)
#define CLASS_2_C1720AB18E76E408___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98C50E0)

inline static constexpr unsigned int Class_2_C1720AB18E76E408___c_TypeDefinitionIndex = 59165;

class Class_2_C1720AB18E76E408___c : public ::System::Object
{
public:
	static ::Class_2_C1720AB18E76E408___c** StaticGet___9()
	{
		return (::Class_2_C1720AB18E76E408___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1720AB18E76E408___c_TypeDefinitionIndex)->GetStaticField(0x3E0C0);
	}
	static ::System::Action** StaticGet___9__85_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1720AB18E76E408___c_TypeDefinitionIndex)->GetStaticField(0x3E0C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C1720AB18E76E408___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1720AB18E76E408___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1720AB18E76E408___C_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}
};
