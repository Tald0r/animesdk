#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_388462581BEEEA84___C_METHOD_1_7CDF583A5722841B_OFFSET UNITYSDK_OFFSET(0x1B4F7C00)
#define CLASS_2_388462581BEEEA84___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4F7BB0)
#define CLASS_2_388462581BEEEA84___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F7BF0)

inline static constexpr unsigned int Class_2_388462581BEEEA84___c_TypeDefinitionIndex = 9305;

class Class_2_388462581BEEEA84___c : public ::System::Object
{
public:
	static ::Class_2_388462581BEEEA84___c** StaticGet___9()
	{
		return (::Class_2_388462581BEEEA84___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_388462581BEEEA84___c_TypeDefinitionIndex)->GetStaticField(0x88F0);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_3*, ::System::Boolean>** StaticGet___9__3_4()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_388462581BEEEA84___c_TypeDefinitionIndex)->GetStaticField(0x88F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7CDF583A5722841B(::Class_0_16E4307DCC419505_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_3*))((::PBYTE)hIl2Cpp + CLASS_2_388462581BEEEA84___C_METHOD_1_7CDF583A5722841B_OFFSET))(this, a1);
	}
};
