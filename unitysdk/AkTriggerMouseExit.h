#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEEXIT_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1B08FB00)
#define AKTRIGGERMOUSEEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08FB20)

inline static constexpr unsigned int AkTriggerMouseExit_TypeDefinitionIndex = 30160;

class AkTriggerMouseExit : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEEXIT__CTOR_OFFSET))(this);
	}

	::System::Void OnMouseExit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEEXIT_ONMOUSEEXIT_OFFSET))(this);
	}
};
