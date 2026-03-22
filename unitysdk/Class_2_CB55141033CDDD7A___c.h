#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define CLASS_2_CB55141033CDDD7A___C_METHOD_1_7FF57803B3A5C449_OFFSET UNITYSDK_OFFSET(0xA0E66E0)
#define CLASS_2_CB55141033CDDD7A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0E6690)
#define CLASS_2_CB55141033CDDD7A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E66D0)

inline static constexpr unsigned int Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex = 64474;

class Class_2_CB55141033CDDD7A___c : public ::System::Object
{
public:
	static ::Class_2_CB55141033CDDD7A___c** StaticGet___9()
	{
		return (::Class_2_CB55141033CDDD7A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex)->GetStaticField(0x390B0);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__6_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex)->GetStaticField(0x390B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7FF57803B3A5C449(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C_METHOD_1_7FF57803B3A5C449_OFFSET))(this, a1);
	}
};
