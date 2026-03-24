#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScePadTriggerMask.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_GAMEPADTRIGGEREFFECTENTRYBASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x81F5AD0)
#define MOLEMOLE_CONFIG_GAMEPADTRIGGEREFFECTENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x81F5B40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GamepadTriggerEffectEntryBase_TypeDefinitionIndex = 67557;

	class GamepadTriggerEffectEntryBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPADTRIGGEREFFECTENTRYBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnProcess(::ScePadTriggerMask triggerMask)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPADTRIGGEREFFECTENTRYBASE_ONPROCESS_OFFSET))(this, triggerMask);
		}
	};
}
