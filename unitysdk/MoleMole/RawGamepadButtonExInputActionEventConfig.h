#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E4BEBE5C8511EA11.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/GamepadButtonEx.h"

#define MOLEMOLE_RAWGAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x8F9AE90)
#define MOLEMOLE_RAWGAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x8F9AEA0)

namespace MoleMole
{
	inline static constexpr unsigned int RawGamepadButtonExInputActionEventConfig_TypeDefinitionIndex = 37448;

	class RawGamepadButtonExInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Boolean handleAllPressTypes; // 0x18
		::MoleMole::GamepadButtonEx gamepadButtonExType; // 0x1C
		::MoleMole::ButtonPressType pressType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RAWGAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_E4BEBE5C8511EA11 get_dataType()
		{
			return ((::Enum_3_E4BEBE5C8511EA11(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RAWGAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
