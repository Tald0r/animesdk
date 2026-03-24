#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define COLORWHEELATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x173DDDC0)

inline static constexpr unsigned int ColorWheelAttribute_TypeDefinitionIndex = 29008;

class ColorWheelAttribute : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLORWHEELATTRIBUTE__CTOR_OFFSET))(this);
	}
};
