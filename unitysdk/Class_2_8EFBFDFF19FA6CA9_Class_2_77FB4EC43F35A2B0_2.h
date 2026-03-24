#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_8EFBFDFF19FA6CA9_CLASS_2_77FB4EC43F35A2B0_2_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x84CDC20)
#define CLASS_2_8EFBFDFF19FA6CA9_CLASS_2_77FB4EC43F35A2B0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x84CDCC0)

inline static constexpr unsigned int Class_2_8EFBFDFF19FA6CA9_Class_2_77FB4EC43F35A2B0_2_TypeDefinitionIndex = 62184;

class Class_2_8EFBFDFF19FA6CA9_Class_2_77FB4EC43F35A2B0_2 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EFBFDFF19FA6CA9_CLASS_2_77FB4EC43F35A2B0_2__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EFBFDFF19FA6CA9_CLASS_2_77FB4EC43F35A2B0_2_ONCREATEPROPERTY_OFFSET))(this);
	}
};
