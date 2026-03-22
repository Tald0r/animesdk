#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_1__BINDBONESLOTSGALGAME_B__2_OFFSET UNITYSDK_OFFSET(0x77DA330)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_1__CTOR_OFFSET UNITYSDK_OFFSET(0x77DA320)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass29_1_TypeDefinitionIndex = 75883;

	class NPCCrowdAvatarManager___c__DisplayClass29_1 : public ::System::Object
	{
	public:
		::NPCCrowd::Accessories::NPCAccessory* accessory; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _BindBoneSlotsGalgame_b__2(::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS29_1__BINDBONESLOTSGALGAME_B__2_OFFSET))(this, slot);
		}
	};
}
