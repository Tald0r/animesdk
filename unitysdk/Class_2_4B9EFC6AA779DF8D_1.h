#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA763E30)
#define CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA763ED0)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_1_TypeDefinitionIndex = 45534;

class Class_2_4B9EFC6AA779DF8D_1 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
