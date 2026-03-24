#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Animation/ENPCCPUAnimationClipAvatarMaskType.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCPUAnimatorRuntimeInstanceData.h"
#include "unitysdk/NPCCrowd/FNPCAttachPointNameHandle.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class NPCMonoDelegate; }
namespace NPCCrowd { class NPCMonoDelegate_EventDelegate; }
namespace NPCCrowd::Animation { class NPCCPUAnimationClipInfo; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphScript_Core; }
namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }
namespace NPCCrowd::Animation { class NPCCPUAnimatorControllerFKPass; }
namespace NPCCrowd::Animation { class NPCCPULookAtPass; }
namespace NPCCrowd::Animation { class NPCCPUNormalFKPass; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_APPLYCACHEDBONES_OFFSET UNITYSDK_OFFSET(0x6351FF0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_BINDALLSLOTBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x634D830)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_CACHEBONES_OFFSET UNITYSDK_OFFSET(0x6351F20)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_CLEARLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x6351C20)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_DISABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x633C440)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_DISABLE_OFFSET UNITYSDK_OFFSET(0x6350420)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_ENABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x633C180)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_ENDLOOKATIKJOB_OFFSET UNITYSDK_OFFSET(0x6351B50)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETANIMATORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x6351420)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETBINDEDBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x6351500)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETCLIPINFO_OFFSET UNITYSDK_OFFSET(0x634F4C0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETCULLINGMODE_OFFSET UNITYSDK_OFFSET(0x634CDB0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETLOOKATATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x6351700)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETLOOKATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x6351DF0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETSLOTLOCALPRS_OFFSET UNITYSDK_OFFSET(0x6350960)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETSLOTTRANSFORMONLYFORUI_OFFSET UNITYSDK_OFFSET(0x6350810)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETSLOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x6351340)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETSLOTWORLDPRS_OFFSET UNITYSDK_OFFSET(0x6350E50)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETWORLDTIME_OFFSET UNITYSDK_OFFSET(0x6350030)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_GET_DATASET_OFFSET UNITYSDK_OFFSET(0x634CDA0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0x634CEC0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_ISRUNNINGLOOKATIK_OFFSET UNITYSDK_OFFSET(0x63515E0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x63506B0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6350490)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_PLAYANIMATIONCLIPBYIDNORMALIZED_OFFSET UNITYSDK_OFFSET(0x634F1A0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_PLAYANIMATIONCLIPBYID_1_OFFSET UNITYSDK_OFFSET(0x634EA30)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_PLAYANIMATIONCLIPBYID_OFFSET UNITYSDK_OFFSET(0x634E8F0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_REFRESHANIMTAGS_OFFSET UNITYSDK_OFFSET(0x634F320)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_REFRESHAVATARTAGS_OFFSET UNITYSDK_OFFSET(0x634F3C0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_REFRESHCONFIGIK_OFFSET UNITYSDK_OFFSET(0x634F450)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_REGISTERMONODELEGATE_OFFSET UNITYSDK_OFFSET(0x63523C0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_RESUME_OFFSET UNITYSDK_OFFSET(0x63500A0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETANIMATIONSPEED_OFFSET UNITYSDK_OFFSET(0x634FB20)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETBONES_OFFSET UNITYSDK_OFFSET(0x6351E70)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETCLIPSPEED_OFFSET UNITYSDK_OFFSET(0x634F720)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETLOOKATIKPROCESSORTARGET_OFFSET UNITYSDK_OFFSET(0x6351790)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x6351CE0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETROUTER_OFFSET UNITYSDK_OFFSET(0x6352110)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETTICKPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x634F980)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_STARTLOOKATIKJOB_OFFSET UNITYSDK_OFFSET(0x6351A90)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x634F5B0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_TRYGETMAINANIMATION_OFFSET UNITYSDK_OFFSET(0x634FDD0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_UNREGISTERMONODELEGATE_OFFSET UNITYSDK_OFFSET(0x63524B0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x634F890)
#define NPCCROWD_ANIMATION_NPCCPUANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x6352620)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimator_TypeDefinitionIndex = 80018;

	class NPCCPUAnimator : public ::System::Object
	{
	public:
		// static const ::System::Int32 LOOKAT_IK_DISABLE_TAG = 0x186A4; // 0x0
		::NPCCrowd::Animation::NPCCPUNormalFKPass* FKPass; // 0x10
		::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* dataset; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* blendShapePaths; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::KeyValuePair_2<::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*, ::UnityEngine::Transform*>>* slotInfos; // 0x28
		::UnityEngine::Transform* lookAtTarget; // 0x30
		::NPCCrowd::Animation::NPCCPUAnimatorControllerFKPass* AnimatorPass; // 0x38
		::NPCCrowd::Animation::NPCCPUAnimationGraphScript_Core* coreGraph; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* curAnimLogicTags; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* bindedTransforms; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* LookIKBlackAnimStates; // 0x58
		::NPCCrowd::NPCMonoDelegate_EventDelegate* ApplyCachedBonesAction; // 0x60
		::Il2CppArray<::UnityEngine::NapTransformData>* _curFrameBones; // 0x68
		::UnityEngine::Animator* unityAnimator; // 0x70
		::NPCCrowd::Animation::NPCCPULookAtPass* LookAtPass; // 0x78
		::NPCCrowd::NPCMonoDelegate* _monoDelegate; // 0x80
		::System::Nullable_1<::System::ValueTuple_2<::System::Int32, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*>> _mainAnimationCache; // 0x88
		::System::Single currentLookAtSpeed; // 0xA0
		::System::Boolean bInited; // 0xA4
		::System::Boolean isLookAtIKLocked; // 0xA5
		::System::Boolean bIsEnable; // 0xA6
		::System::Boolean avatarEnableLookatIK; // 0xA7
		::System::Boolean animEnableLookatIK; // 0xA8
		::System::Boolean configEnableLookatIK; // 0xA9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* get_Dataset()
		{
			return ((::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GET_DATASET_OFFSET))(this);
		}

		static ::UnityEngine::AnimatorCullingMode GetCullingMode(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* dataset)
		{
			return ((::UnityEngine::AnimatorCullingMode(*)(::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETCULLINGMODE_OFFSET))(dataset);
		}

		::System::Void Init(::NPCCrowd::Avatar::NPCAvatarGOReference* npcGo, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* inDataset, ::System::Boolean useAnimatorPass)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_INIT_OFFSET))(this, npcGo, inDataset, useAnimatorPass);
		}

		::System::Void PlayAnimationClipByID(::System::Int32 animID, ::System::Single clipTime, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_PLAYANIMATIONCLIPBYID_OFFSET))(this, animID, clipTime, speed);
		}

		::System::Void PlayAnimationClipByIDNormalized(::System::Int32 animationId, ::System::Single normalizedTime, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_PLAYANIMATIONCLIPBYIDNORMALIZED_OFFSET))(this, animationId, normalizedTime, speed);
		}

		::System::Void PlayAnimationClipByID_1(::NPCCrowd::Animation::NPCCPUAnimationClipInfo* clipInfo, ::System::Single clipTime, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_PLAYANIMATIONCLIPBYID_1_OFFSET))(this, clipInfo, clipTime, speed);
		}

		::System::Void RefreshAnimTags(::NPCCrowd::Animation::NPCCPUAnimationClipInfo* clipInfo)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_REFRESHANIMTAGS_OFFSET))(this, clipInfo);
		}

		::System::Void RefreshAvatarTags(::System::Collections::Generic::List_1<::System::Int32>* avatarTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_REFRESHAVATARTAGS_OFFSET))(this, avatarTags);
		}

		::System::Void RefreshConfigIK(::System::Boolean configEnableIK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_REFRESHCONFIGIK_OFFSET))(this, configEnableIK);
		}

		::NPCCrowd::Animation::NPCCPUAnimationClipInfo* GetClipInfo(::System::Int32 animID)
		{
			return ((::NPCCrowd::Animation::NPCCPUAnimationClipInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETCLIPINFO_OFFSET))(this, animID);
		}

		::System::Void StopAnimation(::NPCCrowd::Animation::ENPCCPUAnimationClipAvatarMaskType index)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::ENPCCPUAnimationClipAvatarMaskType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_STOPANIMATION_OFFSET))(this, index);
		}

		::System::Void SetClipSpeed(::System::Single speed, ::NPCCrowd::Animation::ENPCCPUAnimationClipAvatarMaskType index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NPCCrowd::Animation::ENPCCPUAnimationClipAvatarMaskType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETCLIPSPEED_OFFSET))(this, speed, index);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetTickPauseState(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETTICKPAUSESTATE_OFFSET))(this, pause);
		}

		::System::Void SetAnimationSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETANIMATIONSPEED_OFFSET))(this, speed);
		}

		::System::Boolean TryGetMainAnimation(::System::Int32 animationClipId, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*& animation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_TRYGETMAINANIMATION_OFFSET))(this, animationClipId, animation);
		}

		::System::Single GetWorldTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETWORLDTIME_OFFSET))(this);
		}

		::System::Void Resume(::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData& animatorBufferData_cur)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_RESUME_OFFSET))(this, animatorBufferData_cur);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_DISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_ISVISIBLE_OFFSET))(this);
		}

		::System::Void BindAllSlotBoneTransform(::NPCCrowd::Avatar::NPCAvatarGOReference* npcGo)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReference*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_BINDALLSLOTBONETRANSFORM_OFFSET))(this, npcGo);
		}

		::NPCCrowd::Ability::FTransformFragment GetSlotLocalPRS(::NPCCrowd::FNPCAttachPointNameHandle slotName, ::System::Boolean ignoreOffsetConfig)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::NPCCrowd::FNPCAttachPointNameHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETSLOTLOCALPRS_OFFSET))(this, slotName, ignoreOffsetConfig);
		}

		::NPCCrowd::Ability::FTransformFragment GetSlotWorldPRS(::NPCCrowd::FNPCAttachPointNameHandle slotName, ::System::Boolean ignoreOffsetConfig)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::NPCCrowd::FNPCAttachPointNameHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETSLOTWORLDPRS_OFFSET))(this, slotName, ignoreOffsetConfig);
		}

		::UnityEngine::Transform* GetSlotTransform(::NPCCrowd::FNPCAttachPointNameHandle slotName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::NPCCrowd::FNPCAttachPointNameHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETSLOTTRANSFORM_OFFSET))(this, slotName);
		}

		::UnityEngine::Transform* GetSlotTransformOnlyForUI(::NPCCrowd::FNPCAttachPointNameHandle slotName, ::System::Boolean bIsReturnRootWhenNoFound, ::UnityEngine::Vector3& offset)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::NPCCrowd::FNPCAttachPointNameHandle, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETSLOTTRANSFORMONLYFORUI_OFFSET))(this, slotName, bIsReturnRootWhenNoFound, offset);
		}

		::UnityEngine::Transform* GetAnimatorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETANIMATORTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Transform* GetBindedBoneTransform(::System::Int32 boneID)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETBINDEDBONETRANSFORM_OFFSET))(this, boneID);
		}

		::System::Boolean IsRunningLookAtIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_ISRUNNINGLOOKATIK_OFFSET))(this);
		}

		::System::String* GetLookAtAttachPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETLOOKATATTACHPOINT_OFFSET))(this);
		}

		::System::Boolean EnableLookAtIK(::System::Int32 tagID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_ENABLELOOKATIK_OFFSET))(this, tagID);
		}

		::System::Void DisableLookAtIK(::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_DISABLELOOKATIK_OFFSET))(this, immediate);
		}

		::System::Void SetLookAtIKProcessorTarget(::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETLOOKATIKPROCESSORTARGET_OFFSET))(this, target);
		}

		::System::Void StartLookAtIKJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_STARTLOOKATIKJOB_OFFSET))(this);
		}

		::System::Void EndLookAtIKJob(::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_ENDLOOKATIKJOB_OFFSET))(this, immediate);
		}

		::System::Void ClearLookAtTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_CLEARLOOKATTARGET_OFFSET))(this);
		}

		::System::Void SetLookAtTarget(::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETLOOKATTARGET_OFFSET))(this, target);
		}

		::System::String* GetLookAttachPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_GETLOOKATTACHPOINT_OFFSET))(this);
		}

		::System::Void SetBones(::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData> bones)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETBONES_OFFSET))(this, bones);
		}

		::System::Void CacheBones(::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData> bones)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_CACHEBONES_OFFSET))(this, bones);
		}

		::System::Void ApplyCachedBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_APPLYCACHEDBONES_OFFSET))(this);
		}

		::System::Void SetRouter(::NPCCrowd::NPCMonoDelegate* router)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCMonoDelegate*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_SETROUTER_OFFSET))(this, router);
		}

		::System::Void RegisterMonoDelegate(::NPCCrowd::NPCMonoDelegate* router)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCMonoDelegate*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_REGISTERMONODELEGATE_OFFSET))(this, router);
		}

		::System::Void UnregisterMonoDelegate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATOR_UNREGISTERMONODELEGATE_OFFSET))(this);
		}
	};
}
