#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_5_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x8A637C0)
#define CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_5__CTOR_OFFSET UNITYSDK_OFFSET(0x8A63860)

inline static constexpr unsigned int Class_2_31D08DC027B35B8F_Class_2_77FB4EC43F35A2B0_5_TypeDefinitionIndex = 76187;

class Class_2_31D08DC027B35B8F_Class_2_77FB4EC43F35A2B0_5 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_5__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_5_ONCREATEPROPERTY_OFFSET))(this);
	}
};
