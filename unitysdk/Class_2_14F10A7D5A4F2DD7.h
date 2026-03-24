#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xBB9C730)
#define CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9C7D0)

inline static constexpr unsigned int Class_2_14F10A7D5A4F2DD7_TypeDefinitionIndex = 39330;

class Class_2_14F10A7D5A4F2DD7 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC41950C_13<::System::UInt32>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET))(this);
	}
};
