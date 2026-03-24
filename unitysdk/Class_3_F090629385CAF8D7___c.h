#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3F8C0583F92FF29F;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F090629385CAF8D7___C_METHOD_1_6260C856881447F0_OFFSET UNITYSDK_OFFSET(0x9B8A150)
#define CLASS_3_F090629385CAF8D7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B8A100)
#define CLASS_3_F090629385CAF8D7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8A140)

inline static constexpr unsigned int Class_3_F090629385CAF8D7___c_TypeDefinitionIndex = 75556;

class Class_3_F090629385CAF8D7___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_3F8C0583F92FF29F*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_3F8C0583F92FF29F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F090629385CAF8D7___c_TypeDefinitionIndex)->GetStaticField(0x30FD0);
	}
	static ::Class_3_F090629385CAF8D7___c** StaticGet___9()
	{
		return (::Class_3_F090629385CAF8D7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F090629385CAF8D7___c_TypeDefinitionIndex)->GetStaticField(0x30FD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6260C856881447F0(::Class_3_3F8C0583F92FF29F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3F8C0583F92FF29F*))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7___C_METHOD_1_6260C856881447F0_OFFSET))(this, a1);
	}
};
