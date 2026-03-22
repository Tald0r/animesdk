#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingBone.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONDATAFROMCOMPONENT_OFFSET UNITYSDK_OFFSET(0x602E750)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTAVATARDATA_OFFSET UNITYSDK_OFFSET(0x602DC30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0x602C170)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x602E1B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTSTATEMACHINEDATA_OFFSET UNITYSDK_OFFSET(0x602D500)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x602B690)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x602B680)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEBLENDSHAPE_OFFSET UNITYSDK_OFFSET(0x6034760)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x6035560)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEMONTAGE_OFFSET UNITYSDK_OFFSET(0x6033A90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLETURNINGAROUND_OFFSET UNITYSDK_OFFSET(0x6032A30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWALKINGSTAIRS_OFFSET UNITYSDK_OFFSET(0x60332E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWARPING_OFFSET UNITYSDK_OFFSET(0x60323A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x602B6F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x602B830)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_REFRESHANIMATIONVISIBLEDATA_OFFSET UNITYSDK_OFFSET(0x602D390)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x6035A00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x60359E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex = 71205;

	class AnimationSubManager_CollectPreUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		static ::System::Int32* StaticGet_TurnAngleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFA50);
		}
		static ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>* StaticGet_TurnAroundBoneFlags()
		{
			return (::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFA54);
		}
		static ::System::Int32* StaticGet_IntMoveValueHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFA58);
		}
		static ::System::Int32* StaticGet_IsOnStairsHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFA5C);
		}
		static ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>* StaticGet_StopBoneFlags()
		{
			return (::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFA60);
		}
		static ::System::Int32* StaticGet_IsMovingHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFA64);
		}
		static ::System::Int32* StaticGet_TriggerTurnAroundHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFA68);
		}
		// static const ::System::String* IsMoving; // 0x0
		// static const ::System::String* TriggerTurnAround; // 0x0
		// static const ::System::String* TurnAngle; // 0x0
		// static const ::System::String* IsOnStairs; // 0x0
		// static const ::System::String* IntMoveValue; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CCTOR_OFFSET))();
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}

		::System::Boolean CollectData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTDATA_OFFSET))(this, manager);
		}

		static ::System::Void RefreshAnimationVisibleData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_REFRESHANIMATIONVISIBLEDATA_OFFSET))(manager);
		}

		static ::System::Boolean CollectStateMachineData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTSTATEMACHINEDATA_OFFSET))(manager);
		}

		static ::System::Boolean CollectAvatarData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTAVATARDATA_OFFSET))(manager);
		}

		static ::System::Boolean CollectMontageData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTMONTAGEDATA_OFFSET))(manager);
		}

		static ::System::Void CollectAnimationDataFromComponent(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONDATAFROMCOMPONENT_OFFSET))(animation, avatar);
		}

		static ::System::Void HandleWarping(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWARPING_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleTurningAround(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLETURNINGAROUND_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleWalkingStairs(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWALKINGSTAIRS_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleMontage(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEMONTAGE_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleBlendShape(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEBLENDSHAPE_OFFSET))(animation, avatar, instanceId);
		}

		static ::System::Void HandleLookAtIK(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLELOOKATIK_OFFSET))(animation, instanceId);
		}
	};
}
