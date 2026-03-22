#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BE75AAF0F7C40C75_3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_EF290D43E313AA2C___C_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0x125F9D00)
#define CLASS_2_EF290D43E313AA2C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125F9CB0)
#define CLASS_2_EF290D43E313AA2C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125F9CF0)

inline static constexpr unsigned int Class_2_EF290D43E313AA2C___c_TypeDefinitionIndex = 68083;

class Class_2_EF290D43E313AA2C___c : public ::System::Object
{
public:
	static ::Class_2_EF290D43E313AA2C___c** StaticGet___9()
	{
		return (::Class_2_EF290D43E313AA2C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EF290D43E313AA2C___c_TypeDefinitionIndex)->GetStaticField(0x2C000);
	}
	static ::System::Func_2<::Class_3_BE75AAF0F7C40C75_3*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_3_BE75AAF0F7C40C75_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EF290D43E313AA2C___c_TypeDefinitionIndex)->GetStaticField(0x2C008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EF290D43E313AA2C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF290D43E313AA2C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_BE75AAF0F7C40C75_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_BE75AAF0F7C40C75_3*))((::PBYTE)hIl2Cpp + CLASS_2_EF290D43E313AA2C___C_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}
};
