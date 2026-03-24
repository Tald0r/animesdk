#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A0983634461BCFA1;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D4072D9659E7CCEE___C_METHOD_1_CF1278A1ACE8205E_OFFSET UNITYSDK_OFFSET(0xCBD4F60)
#define CLASS_3_D4072D9659E7CCEE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBD4F10)
#define CLASS_3_D4072D9659E7CCEE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCBD4F50)

inline static constexpr unsigned int Class_3_D4072D9659E7CCEE___c_TypeDefinitionIndex = 70561;

class Class_3_D4072D9659E7CCEE___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_A0983634461BCFA1*>** StaticGet___9__25_0()
	{
		return (::System::Action_1<::Class_3_A0983634461BCFA1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D4072D9659E7CCEE___c_TypeDefinitionIndex)->GetStaticField(0x3C910);
	}
	static ::Class_3_D4072D9659E7CCEE___c** StaticGet___9()
	{
		return (::Class_3_D4072D9659E7CCEE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D4072D9659E7CCEE___c_TypeDefinitionIndex)->GetStaticField(0x3C918);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D4072D9659E7CCEE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4072D9659E7CCEE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF1278A1ACE8205E(::Class_3_A0983634461BCFA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A0983634461BCFA1*))((::PBYTE)hIl2Cpp + CLASS_3_D4072D9659E7CCEE___C_METHOD_1_CF1278A1ACE8205E_OFFSET))(this, a1);
	}
};
