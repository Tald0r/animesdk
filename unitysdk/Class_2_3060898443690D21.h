#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

class Class_3_C3F0E3B5AB5977AE_23;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_3060898443690D21_METHOD_2_E733EE3B69FEDB9C_OFFSET UNITYSDK_OFFSET(0x8B22600)
#define CLASS_2_3060898443690D21_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x8B22490)
#define CLASS_2_3060898443690D21__CTOR_OFFSET UNITYSDK_OFFSET(0x8B22580)

inline static constexpr unsigned int Class_2_3060898443690D21_TypeDefinitionIndex = 61155;

class Class_2_3060898443690D21 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Int32>* Field_2_2; // 0x60
	::Class_0_16E4307DCC41950C_13<::System::UInt32>* Field_2_0; // 0x68
	::Class_0_16E4307DCC41950C_13<::System::Int32>* Field_2_1; // 0x70
	::Class_0_16E4307DCC41950C_13<::System::Int64>* Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3060898443690D21__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3060898443690D21_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_E733EE3B69FEDB9C(::Class_3_C3F0E3B5AB5977AE_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_23*))((::PBYTE)hIl2Cpp + CLASS_2_3060898443690D21_METHOD_2_E733EE3B69FEDB9C_OFFSET))(this, a1);
	}
};
