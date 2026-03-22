#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_8F5A10ECD132BF05;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class AnimationApplyDynamicAdditiveConfig; }
namespace MoleMole::Photo { class AnimationBlendPosePerBoneConfig; }
namespace MoleMole::Photo { class AnimationInertializationConfig; }
namespace MoleMole::Photo { class AnimationLookAtIKConfig; }
namespace MoleMole::Photo { class AnimationMakeDynamicAdditiveConfig; }
namespace MoleMole::Photo { class AnimationSaveCachedPoseConfig; }
namespace MoleMole::Photo { class AnimationTwoBoneIKConfig; }
namespace MoleMole::Photo { class AnimationUseCachedPoseConfig; }
namespace MoleMole::Photo { class FrontCameraAnimatorControllerConfig; }
namespace MoleMole::Photo { class FrontCameraProcessBlendSpacePoseConfig; }
namespace MoleMole::Photo { class PlayableBlendSpace1DConfig; }
namespace MoleMole::Photo { class PlayableGraphAnimatorControllerConfig; }
namespace MoleMole::Photo { class PlayableGraphClipConfig; }
namespace MoleMole::Photo { class PlayableUnitBlendShapeConfig; }
namespace MoleMole::Photo { class PlayableUnitSlotConfig; }
namespace MoleMole::Photo { class PlayableUpdateProcessContextConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xB2F3310)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0xB2F5DE0)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE01_OFFSET UNITYSDK_OFFSET(0xB2F8C60)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE02_OFFSET UNITYSDK_OFFSET(0xB2F8C70)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE03_OFFSET UNITYSDK_OFFSET(0xB2F8C80)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE04_OFFSET UNITYSDK_OFFSET(0xB2F8C90)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE05_OFFSET UNITYSDK_OFFSET(0xB2F8CA0)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE06_OFFSET UNITYSDK_OFFSET(0xB2F8CB0)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE07_OFFSET UNITYSDK_OFFSET(0xB2F8CC0)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE08_OFFSET UNITYSDK_OFFSET(0xB2F8CD0)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE09_OFFSET UNITYSDK_OFFSET(0xB2F8CE0)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE10_OFFSET UNITYSDK_OFFSET(0xB2F8CF0)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE11_OFFSET UNITYSDK_OFFSET(0xB2F8D00)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE12_OFFSET UNITYSDK_OFFSET(0xB2F8D10)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE13_OFFSET UNITYSDK_OFFSET(0xB2F8D20)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE14_OFFSET UNITYSDK_OFFSET(0xB2F8D30)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE15_OFFSET UNITYSDK_OFFSET(0xB2F8D40)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE16_OFFSET UNITYSDK_OFFSET(0xB2F8D50)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE17_OFFSET UNITYSDK_OFFSET(0xB2F8D60)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE18_OFFSET UNITYSDK_OFFSET(0xB2F8D70)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0xB2F6090)
#define MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F8D80)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int FrontCameraAnimationGraphConfig_TypeDefinitionIndex = 63053;

	class FrontCameraAnimationGraphConfig : public ::System::Object
	{
	public:
		::MoleMole::Photo::PlayableBlendSpace1DConfig* blendSpace; // 0x10
		::MoleMole::Photo::FrontCameraProcessBlendSpacePoseConfig* processBlendSpace; // 0x18
		::MoleMole::Photo::FrontCameraAnimatorControllerConfig* controller; // 0x20
		::MoleMole::Photo::PlayableGraphClipConfig* poseClip; // 0x28
		::MoleMole::Photo::AnimationMakeDynamicAdditiveConfig* makeAdditive; // 0x30
		::MoleMole::Photo::AnimationSaveCachedPoseConfig* saveAdditivePose; // 0x38
		::MoleMole::Photo::AnimationApplyDynamicAdditiveConfig* applyAdditive; // 0x40
		::MoleMole::Photo::AnimationSaveCachedPoseConfig* saveLocomotionPose; // 0x48
		::MoleMole::Photo::AnimationSaveCachedPoseConfig* savePose; // 0x50
		::MoleMole::Photo::PlayableUnitSlotConfig* slot; // 0x58
		::MoleMole::Photo::AnimationUseCachedPoseConfig* usePose; // 0x60
		::MoleMole::Photo::AnimationUseCachedPoseConfig* useLocomotionPose; // 0x68
		::MoleMole::Photo::AnimationBlendPosePerBoneConfig* blendPosePerBone; // 0x70
		::MoleMole::Photo::AnimationLookAtIKConfig* lookAtIK; // 0x78
		::MoleMole::Photo::AnimationTwoBoneIKConfig* armIK; // 0x80
		::MoleMole::Photo::AnimationInertializationConfig* inertialization; // 0x88
		::MoleMole::Photo::PlayableUpdateProcessContextConfig* updateContext; // 0x90
		::MoleMole::Photo::PlayableUnitBlendShapeConfig* emotion; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables, ::Class_1_8F5A10ECD132BF05* graphOwner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>, ::Class_1_8F5A10ECD132BF05*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_CREATE_OFFSET))(this, graph, animator, context, memory, variables, graphOwner);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_REQUEST_OFFSET))(this, animator, skeleton, builder, output);
		}

		::MoleMole::Photo::PlayableBlendSpace1DConfig* get_Node01()
		{
			return ((::MoleMole::Photo::PlayableBlendSpace1DConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE01_OFFSET))(this);
		}

		::MoleMole::Photo::FrontCameraProcessBlendSpacePoseConfig* get_Node02()
		{
			return ((::MoleMole::Photo::FrontCameraProcessBlendSpacePoseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE02_OFFSET))(this);
		}

		::MoleMole::Photo::PlayableGraphAnimatorControllerConfig* get_Node03()
		{
			return ((::MoleMole::Photo::PlayableGraphAnimatorControllerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE03_OFFSET))(this);
		}

		::MoleMole::Photo::PlayableGraphClipConfig* get_Node04()
		{
			return ((::MoleMole::Photo::PlayableGraphClipConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE04_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationMakeDynamicAdditiveConfig* get_Node05()
		{
			return ((::MoleMole::Photo::AnimationMakeDynamicAdditiveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE05_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationApplyDynamicAdditiveConfig* get_Node06()
		{
			return ((::MoleMole::Photo::AnimationApplyDynamicAdditiveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE06_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationSaveCachedPoseConfig* get_Node07()
		{
			return ((::MoleMole::Photo::AnimationSaveCachedPoseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE07_OFFSET))(this);
		}

		::MoleMole::Photo::PlayableUnitSlotConfig* get_Node08()
		{
			return ((::MoleMole::Photo::PlayableUnitSlotConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE08_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationUseCachedPoseConfig* get_Node09()
		{
			return ((::MoleMole::Photo::AnimationUseCachedPoseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE09_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationBlendPosePerBoneConfig* get_Node10()
		{
			return ((::MoleMole::Photo::AnimationBlendPosePerBoneConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE10_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationLookAtIKConfig* get_Node11()
		{
			return ((::MoleMole::Photo::AnimationLookAtIKConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE11_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationTwoBoneIKConfig* get_Node12()
		{
			return ((::MoleMole::Photo::AnimationTwoBoneIKConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE12_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationInertializationConfig* get_Node13()
		{
			return ((::MoleMole::Photo::AnimationInertializationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE13_OFFSET))(this);
		}

		::MoleMole::Photo::PlayableUpdateProcessContextConfig* get_Node14()
		{
			return ((::MoleMole::Photo::PlayableUpdateProcessContextConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE14_OFFSET))(this);
		}

		::MoleMole::Photo::PlayableUnitBlendShapeConfig* get_Node15()
		{
			return ((::MoleMole::Photo::PlayableUnitBlendShapeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE15_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationSaveCachedPoseConfig* get_Node16()
		{
			return ((::MoleMole::Photo::AnimationSaveCachedPoseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE16_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationUseCachedPoseConfig* get_Node17()
		{
			return ((::MoleMole::Photo::AnimationUseCachedPoseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE17_OFFSET))(this);
		}

		::MoleMole::Photo::AnimationSaveCachedPoseConfig* get_Node18()
		{
			return ((::MoleMole::Photo::AnimationSaveCachedPoseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAANIMATIONGRAPHCONFIG_GET_NODE18_OFFSET))(this);
		}
	};
}
