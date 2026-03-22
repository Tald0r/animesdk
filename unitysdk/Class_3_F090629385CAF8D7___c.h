#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B078ADE15E921143;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F090629385CAF8D7___C_METHOD_1_6260C856881447F0_OFFSET UNITYSDK_OFFSET(0x5FDA8E0)
#define CLASS_3_F090629385CAF8D7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x5FDA890)
#define CLASS_3_F090629385CAF8D7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x5FDA8D0)

inline static constexpr unsigned int Class_3_F090629385CAF8D7___c_TypeDefinitionIndex = 68568;

class Class_3_F090629385CAF8D7___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_B078ADE15E921143*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_B078ADE15E921143*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F090629385CAF8D7___c_TypeDefinitionIndex)->GetStaticField(0x35AD0);
	}
	static ::Class_3_F090629385CAF8D7___c** StaticGet___9()
	{
		return (::Class_3_F090629385CAF8D7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F090629385CAF8D7___c_TypeDefinitionIndex)->GetStaticField(0x35AD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6260C856881447F0(::Class_3_B078ADE15E921143* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B078ADE15E921143*))((::PBYTE)hIl2Cpp + CLASS_3_F090629385CAF8D7___C_METHOD_1_6260C856881447F0_OFFSET))(this, a1);
	}
};
