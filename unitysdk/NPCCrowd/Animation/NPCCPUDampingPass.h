#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Accessories/FAnimBoneIDPathKV.h"
#include "unitysdk/NPCCrowd/Animation/Job/DampingJob.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUJobPassBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Accessories { class NPCAccessoryAnimationInfo_DampingIK; }
namespace NPCCrowd::Animation { class NPCAccessoryLegacyAnimator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_CREATEDAMPINGIKBUFFER_OFFSET UNITYSDK_OFFSET(0x7E03CC0)
#define NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_DESTROY_OFFSET UNITYSDK_OFFSET(0x7E03510)
#define NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_DISABLEDAMPINGIK_OFFSET UNITYSDK_OFFSET(0x7E03F30)
#define NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_ENABLEDAMPINGIK_OFFSET UNITYSDK_OFFSET(0x7E03740)
#define NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_RELEASEDAMPINGIKBUFFER_OFFSET UNITYSDK_OFFSET(0x7E035C0)
#define NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_SETDAMPINGROOTTRANS_OFFSET UNITYSDK_OFFSET(0x7E03FA0)
#define NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x7E03290)
#define NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS___BASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x7E041C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUDampingPass_TypeDefinitionIndex = 67168;

	class NPCCPUDampingPass : public ::NPCCrowd::Animation::NPCCPUJobPassBase
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* dampingTrans; // 0x38
		::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_DampingIK* dampingIKInfo; // 0x40
		::UnityEngine::Animator* animator; // 0x48
		::System::Boolean bIsEnableDampingIK; // 0x50
		::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> damping_Handles; // 0x58
		::Unity::Collections::NativeArray_1<::System::Single> damping_smooths; // 0x68
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> damping_LocalPositions; // 0x78
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> damping_Positions; // 0x88
		::UnityEngine::Playables::PlayableGraph graph; // 0x98
		::NPCCrowd::Animation::Job::DampingJob dampingJob; // 0xA8
		::UnityEngine::Animations::AnimationScriptPlayable dampingPlayable; // 0x130
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> damping_Velocities; // 0x140
		::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> damping_LocalRotations; // 0x150
		::Unity::Collections::NativeArray_1<::System::Single> damping_rootParams; // 0x160

		::System::Void _ctor(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_DampingIK* dampingIK, ::NPCCrowd::Animation::NPCAccessoryLegacyAnimator* npccpuAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_DampingIK*, ::NPCCrowd::Animation::NPCAccessoryLegacyAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS__CTOR_OFFSET))(this, graph, animator, dampingIK, npccpuAnimator);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_DESTROY_OFFSET))(this);
		}

		::System::Void EnableDampingIK(::Il2CppArray<::UnityEngine::Transform*>* joints, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::FAnimBoneIDPathKV>* boneInfos, ::System::Boolean bInIsLocalDamping)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::FAnimBoneIDPathKV>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_ENABLEDAMPINGIK_OFFSET))(this, joints, boneInfos, bInIsLocalDamping);
		}

		::System::Void DisableDampingIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_DISABLEDAMPINGIK_OFFSET))(this);
		}

		::System::Void SetDampingRootTrans(::NPCCrowd::Ability::FTransformFragment& attachedLocalPRS, ::NPCCrowd::Ability::FTransformFragment& attachedWorldPRS)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FTransformFragment&, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_SETDAMPINGROOTTRANS_OFFSET))(this, attachedLocalPRS, attachedWorldPRS);
		}

		::System::Void CreateDampingIKBuffer(::System::Int32 numJoints)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_CREATEDAMPINGIKBUFFER_OFFSET))(this, numJoints);
		}

		::System::Void ReleaseDampingIKBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS_RELEASEDAMPINGIKBUFFER_OFFSET))(this);
		}

		::System::Void __base_Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUDAMPINGPASS___BASE_DESTROY_OFFSET))(this);
		}
	};
}
