#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeChunkData_TypeDefinitionIndex = 59640;

	enum class AnimationSubManager_AvatarArchetypeChunkData : ::System::Int32
	{
		BoneAdjustIkDrivenPose = 27,
		BoneAdjustEnabled = 24,
		RootMotion = 3,
		EntityTransform = 9,
		BlendShapeData = 7,
		InertializationLastPose = 14,
		BoneAdjustMasterBoneAnimPoseRot = 25,
		InertializationPose = 16,
		InertializationState = 11,
		TickData = 1,
		AnimationPose = 4,
		InertializationDeltaData = 12,
		EntityId = 8,
		Max = 28,
		InertializationAdditionalData = 15,
		InertializationLastAdditionalData = 13,
		InertializationRequest = 10,
		AdjustmentBlendingTarget = 22,
		ClipData = 2,
		AdjustmentBlendingControlData = 20,
		MotionControlData = 17,
		FootStepControlData = 23,
		EntityLOD = 19,
		IKControlData = 18,
		BlendShapeValue = 5,
		AdjustmentBlendingWarpingTickData = 21,
		BlendShapeCurveID = 6,
		BoneAdjustAnimDrivenPose = 26,
		AnimationState = 0,
	};
}
