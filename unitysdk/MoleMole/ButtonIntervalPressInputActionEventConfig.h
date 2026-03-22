#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E4BEBE5C8511EA11.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xB49C7C0)
#define MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB49C7D0)

namespace MoleMole
{
	inline static constexpr unsigned int ButtonIntervalPressInputActionEventConfig_TypeDefinitionIndex = 66935;

	class ButtonIntervalPressInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x18
		::System::Single FirstTriggerInterval; // 0x1C
		::System::Single triggerInterval; // 0x20
		::System::Boolean IgnoreCursorHide; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_E4BEBE5C8511EA11 get_dataType()
		{
			return ((::Enum_3_E4BEBE5C8511EA11(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
