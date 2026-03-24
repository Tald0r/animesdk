#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEENTER_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1B6FBA00)
#define AKTRIGGERMOUSEENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6FBA20)

inline static constexpr unsigned int AkTriggerMouseEnter_TypeDefinitionIndex = 31112;

class AkTriggerMouseEnter : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEENTER__CTOR_OFFSET))(this);
	}

	::System::Void OnMouseEnter()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEENTER_ONMOUSEENTER_OFFSET))(this);
	}
};
