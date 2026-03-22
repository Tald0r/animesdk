#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_SampleBlendeShapeProcessor_Job.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0x7DFF270)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x7DFF0D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x7DFF0C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0x7DFF0B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x7DFF130)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x7DFFB60)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleBlendeShapeProcessor_TypeDefinitionIndex = 71133;

	class AnimationSubManager_SampleBlendeShapeProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_SampleBlendeShapeProcessor_Job>* _buffer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
