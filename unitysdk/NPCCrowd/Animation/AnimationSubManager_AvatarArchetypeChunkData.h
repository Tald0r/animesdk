#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeChunkData_TypeDefinitionIndex = 71103;

	enum class AnimationSubManager_AvatarArchetypeChunkData : ::System::Int32
	{
		BoneAdjustAnimDrivenPose = 26,
		InertializationRequest = 10,
		InertializationLastPose = 14,
		BoneAdjustMasterBoneAnimPoseRot = 25,
		BlendShapeData = 7,
		TickData = 1,
		AdjustmentBlendingWarpingTickData = 21,
		AdjustmentBlendingControlData = 20,
		InertializationAdditionalData = 15,
		BlendShapeValue = 5,
		RootMotion = 3,
		InertializationDeltaData = 12,
		MotionControlData = 17,
		FootStepControlData = 23,
		AnimationPose = 4,
		BoneAdjustEnabled = 24,
		BoneAdjustIkDrivenPose = 27,
		ClipData = 2,
		IKControlData = 18,
		BlendShapeCurveID = 6,
		Max = 28,
		InertializationLastAdditionalData = 13,
		EntityTransform = 9,
		EntityId = 8,
		EntityLOD = 19,
		InertializationPose = 16,
		InertializationState = 11,
		AdjustmentBlendingTarget = 22,
		AnimationState = 0,
	};
}
