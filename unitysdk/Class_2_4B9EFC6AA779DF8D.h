#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_4B9EFC6AA779DF8D_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x7046A90)
#define CLASS_2_4B9EFC6AA779DF8D__CTOR_OFFSET UNITYSDK_OFFSET(0x7046B30)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_TypeDefinitionIndex = 77213;

class Class_2_4B9EFC6AA779DF8D : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_ONCREATEPROPERTY_OFFSET))(this);
	}
};
