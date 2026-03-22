#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GamepadTriggerEffectEntryBase.h"
#include "unitysdk/ScePadTriggerEffectMultiplePositionVibrationParam.h"
#include "unitysdk/ScePadTriggerMask.h"

#define MOLEMOLE_CONFIG_MULTIPOSITIONVIBRATIONGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xEC439E0)
#define MOLEMOLE_CONFIG_MULTIPOSITIONVIBRATIONGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xEC43AA0)
#define MOLEMOLE_CONFIG_MULTIPOSITIONVIBRATIONGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xEC43AB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MultiPositionVibrationGamepadTriggerEffectEntry_TypeDefinitionIndex = 45226;

	class MultiPositionVibrationGamepadTriggerEffectEntry : public ::MoleMole::Config::GamepadTriggerEffectEntryBase
	{
	public:
		::ScePadTriggerEffectMultiplePositionVibrationParam Param; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPOSITIONVIBRATIONGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET))(this);
		}

		::System::Void OnProcess(::ScePadTriggerMask triggerMask)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPOSITIONVIBRATIONGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET))(this, triggerMask);
		}

		::System::Void __base_OnProcess(::ScePadTriggerMask P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPOSITIONVIBRATIONGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET))(this, P0);
		}
	};
}
