#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_BE618499B8831B81_CLASS_2_77FB4EC43F35A2B0_4_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x8284530)
#define CLASS_2_BE618499B8831B81_CLASS_2_77FB4EC43F35A2B0_4__CTOR_OFFSET UNITYSDK_OFFSET(0x82845D0)

inline static constexpr unsigned int Class_2_BE618499B8831B81_Class_2_77FB4EC43F35A2B0_4_TypeDefinitionIndex = 76035;

class Class_2_BE618499B8831B81_Class_2_77FB4EC43F35A2B0_4 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE618499B8831B81_CLASS_2_77FB4EC43F35A2B0_4__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE618499B8831B81_CLASS_2_77FB4EC43F35A2B0_4_ONCREATEPROPERTY_OFFSET))(this);
	}
};
