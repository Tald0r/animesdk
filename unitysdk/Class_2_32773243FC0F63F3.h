#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4544004F26734BD_11.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_135.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_32773243FC0F63F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x189B16C0)
#define CLASS_2_32773243FC0F63F3__CTOR_OFFSET UNITYSDK_OFFSET(0x189B16B0)

inline static constexpr unsigned int Class_2_32773243FC0F63F3_TypeDefinitionIndex = 11296;

class Class_2_32773243FC0F63F3 : public ::Class_1_C4544004F26734BD_11
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_32773243FC0F63F3_TypeDefinitionIndex)->GetStaticField(0x43C0);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_32773243FC0F63F3_TypeDefinitionIndex)->GetStaticField(0x43C4);
	}

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_135 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_135, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_32773243FC0F63F3__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_32773243FC0F63F3__CCTOR_OFFSET))();
	}
};
