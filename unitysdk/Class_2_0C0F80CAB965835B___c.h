#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9D33A2E94B3E53DC;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_0C0F80CAB965835B___C_METHOD_1_8F5ABF259CA85596_OFFSET UNITYSDK_OFFSET(0x86D05E0)
#define CLASS_2_0C0F80CAB965835B___C_METHOD_1_E26C967FF0DDE82A_OFFSET UNITYSDK_OFFSET(0x86D0700)
#define CLASS_2_0C0F80CAB965835B___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x86D0720)
#define CLASS_2_0C0F80CAB965835B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x86D0590)
#define CLASS_2_0C0F80CAB965835B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x86D05D0)

inline static constexpr unsigned int Class_2_0C0F80CAB965835B___c_TypeDefinitionIndex = 56241;

class Class_2_0C0F80CAB965835B___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::System::UInt32>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0C0F80CAB965835B___c_TypeDefinitionIndex)->GetStaticField(0x45670);
	}
	static ::Class_2_0C0F80CAB965835B___c** StaticGet___9()
	{
		return (::Class_2_0C0F80CAB965835B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0C0F80CAB965835B___c_TypeDefinitionIndex)->GetStaticField(0x45678);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__10_16()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0C0F80CAB965835B___c_TypeDefinitionIndex)->GetStaticField(0x45680);
	}
	static ::System::Action** StaticGet___9__29_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0C0F80CAB965835B___c_TypeDefinitionIndex)->GetStaticField(0x45688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0C0F80CAB965835B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C0F80CAB965835B___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_8F5ABF259CA85596()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C0F80CAB965835B___C_METHOD_1_8F5ABF259CA85596_OFFSET))(this);
	}

	::System::UInt32 Method_1_E26C967FF0DDE82A(::Class_3_9D33A2E94B3E53DC* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_9D33A2E94B3E53DC*))((::PBYTE)hIl2Cpp + CLASS_2_0C0F80CAB965835B___C_METHOD_1_E26C967FF0DDE82A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C0F80CAB965835B___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
