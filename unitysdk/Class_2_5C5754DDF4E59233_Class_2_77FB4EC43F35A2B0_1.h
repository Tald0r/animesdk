#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA700A80)
#define CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA700B20)

inline static constexpr unsigned int Class_2_5C5754DDF4E59233_Class_2_77FB4EC43F35A2B0_1_TypeDefinitionIndex = 49075;

class Class_2_5C5754DDF4E59233_Class_2_77FB4EC43F35A2B0_1 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
