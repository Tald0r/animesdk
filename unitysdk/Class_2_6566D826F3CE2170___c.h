#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_1;

#define CLASS_2_6566D826F3CE2170___C_METHOD_1_86843C648953ACC3_OFFSET UNITYSDK_OFFSET(0x63C17E0)
#define CLASS_2_6566D826F3CE2170___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x63C1790)
#define CLASS_2_6566D826F3CE2170___C__CTOR_OFFSET UNITYSDK_OFFSET(0x63C17D0)

inline static constexpr unsigned int Class_2_6566D826F3CE2170___c_TypeDefinitionIndex = 47371;

class Class_2_6566D826F3CE2170___c : public ::System::Object
{
public:
	static ::Class_2_6566D826F3CE2170___c** StaticGet___9()
	{
		return (::Class_2_6566D826F3CE2170___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6566D826F3CE2170___c_TypeDefinitionIndex)->GetStaticField(0x33B70);
	}
	static ::Class_3_D92ADC48CDFCC09B_1** StaticGet___9__27_0()
	{
		return (::Class_3_D92ADC48CDFCC09B_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6566D826F3CE2170___c_TypeDefinitionIndex)->GetStaticField(0x33B78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170___C__CTOR_OFFSET))(this);
	}

	::Struct_2_45B62668F0BA5CF8 Method_1_86843C648953ACC3(::Struct_2_EB409772687773A2& a1)
	{
		return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2&))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170___C_METHOD_1_86843C648953ACC3_OFFSET))(this, a1);
	}
};
