#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/InteractSlot.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace NPCCrowd::AI { class WaitingSlot; }

#define NPCCROWD_ABILITY_WAITINGSLOTRUNTIME_ONRELEASED_OFFSET UNITYSDK_OFFSET(0x60A7C70)
#define NPCCROWD_ABILITY_WAITINGSLOTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x60A78C0)
#define NPCCROWD_ABILITY_WAITINGSLOTRUNTIME___BASE_ONRELEASED_OFFSET UNITYSDK_OFFSET(0x60A7D20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotRuntime_TypeDefinitionIndex = 77445;

	class WaitingSlotRuntime : public ::NPCCrowd::Ability::InteractSlot
	{
	public:
		::NPCCrowd::AI::WaitingSlot* config; // 0x30
		::System::Single releasingTime; // 0x38
		::System::Single releasingTimer; // 0x3C

		::System::Void _ctor(::NPCCrowd::AI::WaitingSlot* waitingSlot, ::UnityEngine::Matrix4x4 parentMat)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::WaitingSlot*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTRUNTIME__CTOR_OFFSET))(this, waitingSlot, parentMat);
		}

		::System::Void OnReleased()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTRUNTIME_ONRELEASED_OFFSET))(this);
		}

		::System::Void __base_OnReleased()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTRUNTIME___BASE_ONRELEASED_OFFSET))(this);
		}
	};
}
