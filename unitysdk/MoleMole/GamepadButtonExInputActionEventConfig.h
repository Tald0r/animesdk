#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E4BEBE5C8511EA11.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/GamepadButtonEx.h"

#define MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xE484E20)
#define MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE484E30)

namespace MoleMole
{
	inline static constexpr unsigned int GamepadButtonExInputActionEventConfig_TypeDefinitionIndex = 45357;

	class GamepadButtonExInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::MoleMole::GamepadButtonEx gamepadButtonExType; // 0x18
		::System::Single FirstTriggerInterval; // 0x1C
		::System::Single triggerInterval; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_E4BEBE5C8511EA11 get_dataType()
		{
			return ((::Enum_3_E4BEBE5C8511EA11(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
