#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_FOUNDATION_IINVOCABLEBYREF_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__INVOKE_OFFSET UNITYSDK_OFFSET(0x2CC260)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2CC250)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingCurveIdCollector_TypeDefinitionIndex = 71123;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingCurveIdCollector
	{
		::System::Int32* _idBuffer; // 0x10
		::System::Int32 _count; // 0x18

		::System::Void _ctor(::System::Int32* buffer, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR__CTOR_OFFSET))(this, buffer, capacity);
		}

		/*
		::System::Void Foundation_IInvocableByRef_NPCCrowd_Animation_AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig__Invoke(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig& config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_FOUNDATION_IINVOCABLEBYREF_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG__INVOKE_OFFSET))(this, config);
		}
		*/

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_GET_COUNT_OFFSET))(this);
		}

		::System::Int32* get_Buffer()
		{
			return ((::System::Int32*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCURVEIDCOLLECTOR_GET_BUFFER_OFFSET))(this);
		}
	};
}
