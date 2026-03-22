#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_C0E1B4940D4EF734___C_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x957B1A0)
#define CLASS_2_C0E1B4940D4EF734___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x957B150)
#define CLASS_2_C0E1B4940D4EF734___C__CTOR_OFFSET UNITYSDK_OFFSET(0x957B190)

inline static constexpr unsigned int Class_2_C0E1B4940D4EF734___c_TypeDefinitionIndex = 74673;

class Class_2_C0E1B4940D4EF734___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__85_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C0E1B4940D4EF734___c_TypeDefinitionIndex)->GetStaticField(0x2F360);
	}
	static ::Class_2_C0E1B4940D4EF734___c** StaticGet___9()
	{
		return (::Class_2_C0E1B4940D4EF734___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C0E1B4940D4EF734___c_TypeDefinitionIndex)->GetStaticField(0x2F368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C0E1B4940D4EF734___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0E1B4940D4EF734___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0E1B4940D4EF734___C_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}
};
