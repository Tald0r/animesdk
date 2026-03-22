#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_164;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_F2B96F2C60871B23___C_METHOD_1_D9778B51CD7ACF2D_OFFSET UNITYSDK_OFFSET(0xAC86060)
#define CLASS_1_F2B96F2C60871B23___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC86010)
#define CLASS_1_F2B96F2C60871B23___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC86050)

inline static constexpr unsigned int Class_1_F2B96F2C60871B23___c_TypeDefinitionIndex = 37348;

class Class_1_F2B96F2C60871B23___c : public ::System::Object
{
public:
	static ::Class_1_F2B96F2C60871B23___c** StaticGet___9()
	{
		return (::Class_1_F2B96F2C60871B23___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B96F2C60871B23___c_TypeDefinitionIndex)->GetStaticField(0x2A6E0);
	}
	static ::System::Predicate_1<::Class_0_16E4307DCC419505_164*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::Class_0_16E4307DCC419505_164*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B96F2C60871B23___c_TypeDefinitionIndex)->GetStaticField(0x2A6E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D9778B51CD7ACF2D(::Class_0_16E4307DCC419505_164* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_164*))((::PBYTE)hIl2Cpp + CLASS_1_F2B96F2C60871B23___C_METHOD_1_D9778B51CD7ACF2D_OFFSET))(this, a1);
	}
};
