#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE_GET_ISDISPATCHABLE_OFFSET UNITYSDK_OFFSET(0xC2EC060)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE_PROCESS_OFFSET UNITYSDK_OFFSET(0xC2EC070)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2EC120)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_Dispatchable_TypeDefinitionIndex = 59701;

	class AnimationSubManager_Dispatchable : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDispatchable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE_GET_ISDISPATCHABLE_OFFSET))(this);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE_PROCESS_OFFSET))(this, manager);
		}
	};
}
