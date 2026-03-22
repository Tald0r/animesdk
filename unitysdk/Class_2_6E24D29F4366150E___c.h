#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_6E24D29F4366150E___C_METHOD_1_5A6434846524FCDB_OFFSET UNITYSDK_OFFSET(0x6F78410)
#define CLASS_2_6E24D29F4366150E___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x6F78400)
#define CLASS_2_6E24D29F4366150E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6F783B0)
#define CLASS_2_6E24D29F4366150E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6F783F0)

inline static constexpr unsigned int Class_2_6E24D29F4366150E___c_TypeDefinitionIndex = 37604;

class Class_2_6E24D29F4366150E___c : public ::System::Object
{
public:
	static ::Class_2_6E24D29F4366150E___c** StaticGet___9()
	{
		return (::Class_2_6E24D29F4366150E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6E24D29F4366150E___c_TypeDefinitionIndex)->GetStaticField(0x31BE0);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6E24D29F4366150E___c_TypeDefinitionIndex)->GetStaticField(0x31BE8);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__11_1()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6E24D29F4366150E___c_TypeDefinitionIndex)->GetStaticField(0x31BF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6E24D29F4366150E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E24D29F4366150E___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6E24D29F4366150E___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A6434846524FCDB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6E24D29F4366150E___C_METHOD_1_5A6434846524FCDB_OFFSET))(this, a1);
	}
};
