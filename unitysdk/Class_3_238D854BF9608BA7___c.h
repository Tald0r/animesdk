#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_F638703ACD0FA08E;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_238D854BF9608BA7___C_METHOD_1_BE3141956C33D43F_OFFSET UNITYSDK_OFFSET(0x93532A0)
#define CLASS_3_238D854BF9608BA7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9353250)
#define CLASS_3_238D854BF9608BA7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9353290)

inline static constexpr unsigned int Class_3_238D854BF9608BA7___c_TypeDefinitionIndex = 65406;

class Class_3_238D854BF9608BA7___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_5_F638703ACD0FA08E*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_5_F638703ACD0FA08E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_238D854BF9608BA7___c_TypeDefinitionIndex)->GetStaticField(0x36E00);
	}
	static ::Class_3_238D854BF9608BA7___c** StaticGet___9()
	{
		return (::Class_3_238D854BF9608BA7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_238D854BF9608BA7___c_TypeDefinitionIndex)->GetStaticField(0x36E08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_238D854BF9608BA7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_238D854BF9608BA7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE3141956C33D43F(::Class_5_F638703ACD0FA08E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_238D854BF9608BA7___C_METHOD_1_BE3141956C33D43F_OFFSET))(this, a1);
	}
};
