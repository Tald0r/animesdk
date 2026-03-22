#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x8E8F080)
#define CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8E8F120)

inline static constexpr unsigned int Class_2_B30EB13395677771_Class_2_77FB4EC43F35A2B0_1_TypeDefinitionIndex = 44434;

class Class_2_B30EB13395677771_Class_2_77FB4EC43F35A2B0_1 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
