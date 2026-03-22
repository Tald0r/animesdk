#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_14F10A7D5A4F2DD7_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x84EE9C0)
#define CLASS_2_14F10A7D5A4F2DD7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x84EEA90)

inline static constexpr unsigned int Class_2_14F10A7D5A4F2DD7_1_TypeDefinitionIndex = 67018;

class Class_2_14F10A7D5A4F2DD7_1 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::UInt32>* Field_2_0; // 0x60
	::Class_0_16E4307DCC419505_103<::System::UInt32>* Field_2_2; // 0x68
	::Class_0_16E4307DCC419505_103<::System::UInt32>* Field_2_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
