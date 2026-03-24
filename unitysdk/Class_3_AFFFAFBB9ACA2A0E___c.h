#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_806C38C50E9F30A7;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_AFFFAFBB9ACA2A0E___C_METHOD_1_65804482EEF61FCF_OFFSET UNITYSDK_OFFSET(0x6D75C10)
#define CLASS_3_AFFFAFBB9ACA2A0E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D75BC0)
#define CLASS_3_AFFFAFBB9ACA2A0E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6D75C00)

inline static constexpr unsigned int Class_3_AFFFAFBB9ACA2A0E___c_TypeDefinitionIndex = 63170;

class Class_3_AFFFAFBB9ACA2A0E___c : public ::System::Object
{
public:
	static ::Class_3_AFFFAFBB9ACA2A0E___c** StaticGet___9()
	{
		return (::Class_3_AFFFAFBB9ACA2A0E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AFFFAFBB9ACA2A0E___c_TypeDefinitionIndex)->GetStaticField(0x2D0E0);
	}
	static ::System::Action_1<::Class_3_806C38C50E9F30A7*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_806C38C50E9F30A7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AFFFAFBB9ACA2A0E___c_TypeDefinitionIndex)->GetStaticField(0x2D0E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AFFFAFBB9ACA2A0E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFFFAFBB9ACA2A0E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_65804482EEF61FCF(::Class_3_806C38C50E9F30A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_806C38C50E9F30A7*))((::PBYTE)hIl2Cpp + CLASS_3_AFFFAFBB9ACA2A0E___C_METHOD_1_65804482EEF61FCF_OFFSET))(this, a1);
	}
};
