#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/StateTreeCore/StateTreeRandomTimeDuration.h"
#include "unitysdk/StateTreeCore/StateTreeSelectionFallback.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionTrigger.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_COMPACTSTATETREETRANSITION_GET_HASDELAY_OFFSET UNITYSDK_OFFSET(0x8EA5C0)
#define STATETREECORE_COMPACTSTATETREETRANSITION_RESET_OFFSET UNITYSDK_OFFSET(0x8EA5E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int CompactStateTreeTransition_TypeDefinitionIndex = 26990;

	struct alignas(4) CompactStateTreeTransition
	{
		::Foundation::Unreal::FGameplayTag EventTag; // 0x10
		::System::UInt16 ConditionsBegin; // 0x18
		::StateTreeCore::StateTreeStateHandle State; // 0x1A
		::StateTreeCore::StateTreeRandomTimeDuration Delay; // 0x1C
		::StateTreeCore::StateTreeTransitionTrigger Trigger; // 0x20
		::StateTreeCore::StateTreeTransitionPriority Priority; // 0x24
		::StateTreeCore::StateTreeSelectionFallback Fallback; // 0x28
		::System::Byte ConditionsNum; // 0x2C
		::System::Boolean TransitionEnabled; // 0x2D

		::System::Boolean get_HasDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_GET_HASDELAY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREETRANSITION_RESET_OFFSET))(this);
		}
	};
}
