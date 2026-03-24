#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_84CEDCEF739506C1_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_1DEA7AD9123A324A_2___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x73F6F10)
#define CLASS_2_1DEA7AD9123A324A_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x73F6EC0)
#define CLASS_2_1DEA7AD9123A324A_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x73F6F00)

inline static constexpr unsigned int Class_2_1DEA7AD9123A324A_2___c_TypeDefinitionIndex = 61979;

class Class_2_1DEA7AD9123A324A_2___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_84CEDCEF739506C1_2*, ::System::Int32>** StaticGet___9__52_0()
	{
		return (::System::Func_2<::Class_2_84CEDCEF739506C1_2*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1DEA7AD9123A324A_2___c_TypeDefinitionIndex)->GetStaticField(0x33930);
	}
	static ::Class_2_1DEA7AD9123A324A_2___c** StaticGet___9()
	{
		return (::Class_2_1DEA7AD9123A324A_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1DEA7AD9123A324A_2___c_TypeDefinitionIndex)->GetStaticField(0x33938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_84CEDCEF739506C1_2* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_84CEDCEF739506C1_2*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_2___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}
};
