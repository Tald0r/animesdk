#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xB7B8040)
#define CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET UNITYSDK_OFFSET(0xB7B80E0)

inline static constexpr unsigned int Class_2_14F10A7D5A4F2DD7_TypeDefinitionIndex = 40863;

class Class_2_14F10A7D5A4F2DD7 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::UInt32>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET))(this);
	}
};
