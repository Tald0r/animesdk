#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

#define CLASS_2_57114C985767917A_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x71BFED0)
#define CLASS_2_57114C985767917A__CTOR_OFFSET UNITYSDK_OFFSET(0x71BFF30)

inline static constexpr unsigned int Class_2_57114C985767917A_TypeDefinitionIndex = 38376;

class Class_2_57114C985767917A : public ::Class_1_F57C3EEEB03201AF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57114C985767917A__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57114C985767917A_ONCREATEPROPERTY_OFFSET))(this);
	}
};
