#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC41950C_11;

#define CLASS_2_94A48E46CF6A15AF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x80FCA80)
#define CLASS_2_94A48E46CF6A15AF__CTOR_OFFSET UNITYSDK_OFFSET(0x80FCB20)

inline static constexpr unsigned int Class_2_94A48E46CF6A15AF_TypeDefinitionIndex = 70049;

class Class_2_94A48E46CF6A15AF : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC41950C_11<::System::Int32>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94A48E46CF6A15AF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94A48E46CF6A15AF_ONCREATEPROPERTY_OFFSET))(this);
	}
};
