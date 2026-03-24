#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_0262DB72120B5312;
class Class_4_B99AA5AE371451AA;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_AD1870DDB35E9F55___C_METHOD_1_2E3DBD935535DC49_OFFSET UNITYSDK_OFFSET(0x10D36590)
#define CLASS_3_AD1870DDB35E9F55___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D36540)
#define CLASS_3_AD1870DDB35E9F55___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D36580)

inline static constexpr unsigned int Class_3_AD1870DDB35E9F55___c_TypeDefinitionIndex = 64256;

class Class_3_AD1870DDB35E9F55___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_4_B99AA5AE371451AA*, ::Class_4_0262DB72120B5312*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_4_B99AA5AE371451AA*, ::Class_4_0262DB72120B5312*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AD1870DDB35E9F55___c_TypeDefinitionIndex)->GetStaticField(0x364B0);
	}
	static ::Class_3_AD1870DDB35E9F55___c** StaticGet___9()
	{
		return (::Class_3_AD1870DDB35E9F55___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AD1870DDB35E9F55___c_TypeDefinitionIndex)->GetStaticField(0x364B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AD1870DDB35E9F55___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD1870DDB35E9F55___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2E3DBD935535DC49(::Class_4_B99AA5AE371451AA* a1, ::Class_4_0262DB72120B5312* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B99AA5AE371451AA*, ::Class_4_0262DB72120B5312*))((::PBYTE)hIl2Cpp + CLASS_3_AD1870DDB35E9F55___C_METHOD_1_2E3DBD935535DC49_OFFSET))(this, a1, a2);
	}
};
