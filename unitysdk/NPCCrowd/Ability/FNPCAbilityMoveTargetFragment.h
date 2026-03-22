#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_CREATENEWACTION_OFFSET UNITYSDK_OFFSET(0x326860)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x7579D40)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_ENABLEWARPING_OFFSET UNITYSDK_OFFSET(0x326560)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONID_OFFSET UNITYSDK_OFFSET(0x3267F0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONSERVERSTARTTIME_OFFSET UNITYSDK_OFFSET(0x326780)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONSTARTTIME_OFFSET UNITYSDK_OFFSET(0x326710)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTMOVEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x3266A0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETPREVIOUSACTION_OFFSET UNITYSDK_OFFSET(0x326630)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3269D0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x326970)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_POPWARPINGTARGET_OFFSET UNITYSDK_OFFSET(0x3264D0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_PUSHWARPINGTARGET_OFFSET UNITYSDK_OFFSET(0x326490)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7579BA0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x326900)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x7579EF0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityMoveTargetFragment_TypeDefinitionIndex = 59431;

	struct alignas(4) FNPCAbilityMoveTargetFragment
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityMoveTargetFragment_TypeDefinitionIndex)->GetStaticField(0xF440);
		}
		static ::System::Boolean* StaticGet_DebugEnableWarping()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityMoveTargetFragment_TypeDefinitionIndex)->GetStaticField(0xF444);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityMoveTargetFragment_TypeDefinitionIndex)->GetStaticField(0xF448);
		}
		::StateTreeCore::BaseFragment Base; // 0x10
		::UnityEngine::Vector3 Center; // 0x14
		::UnityEngine::Vector3 Forward; // 0x20
		::UnityEngine::Vector3 UpAxis; // 0x2C
		::System::Single DistanceToGoal; // 0x38
		::System::Single SlackRadius; // 0x3C
		::System::Single CurrentActionWorldStartTime; // 0x40
		::System::Single CurrentActionServerStartTime; // 0x44
		::System::UInt16 CurrentActionID; // 0x48
		::System::Single DesiredSpeed; // 0x4C
		::NPCCrowd::Ability::ENPCAbilityMovementAction IntentAtGoal; // 0x50
		::NPCCrowd::Ability::ENPCAbilityMovementAction CurrentAction; // 0x54
		::NPCCrowd::Ability::ENPCAbilityMovementAction PreviousAction; // 0x58
		::System::Boolean bOffBoundaries; // 0x5C
		::System::Boolean bSteeringFallingBehind; // 0x5D
		::System::Int32 StandAnimClipID; // 0x60
		::System::Int32 WalkAnimClipID; // 0x64
		::System::Single DefaultDesiredSpeed; // 0x68
		::System::Boolean WarpingFlag; // 0x6C
		::UnityEngine::Vector3 WarpingTarget; // 0x70
		::UnityEngine::Quaternion WarpingTargetRot; // 0x7C
		::System::Boolean WarpingEnable; // 0x8C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT__CCTOR_OFFSET))();
		}

		::System::Void PushWarpingTarget(::UnityEngine::Vector3 WarpingTarget, ::UnityEngine::Quaternion WarpingTargetRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_PUSHWARPINGTARGET_OFFSET))(this, WarpingTarget, WarpingTargetRot);
		}

		::System::Boolean PopWarpingTarget(::UnityEngine::Vector3& target, ::UnityEngine::Quaternion& targetRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_POPWARPINGTARGET_OFFSET))(this, target, targetRot);
		}

		::System::Void EnableWarping(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_ENABLEWARPING_OFFSET))(this, enable);
		}

		::NPCCrowd::Ability::ENPCAbilityMovementAction GetPreviousAction()
		{
			return ((::NPCCrowd::Ability::ENPCAbilityMovementAction(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETPREVIOUSACTION_OFFSET))(this);
		}

		::NPCCrowd::Ability::ENPCAbilityMovementAction GetCurrentMoveActionType()
		{
			return ((::NPCCrowd::Ability::ENPCAbilityMovementAction(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTMOVEACTIONTYPE_OFFSET))(this);
		}

		::System::Single GetCurrentActionStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONSTARTTIME_OFFSET))(this);
		}

		::System::Single GetCurrentActionServerStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONSERVERSTARTTIME_OFFSET))(this);
		}

		::System::UInt16 GetCurrentActionID()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONID_OFFSET))(this);
		}

		::System::UInt16 CreateNewAction(::NPCCrowd::Ability::ENPCAbilityMovementAction inAction, ::System::Single inWorldTime)
		{
			return ((::System::UInt16(*)(::PVOID, ::NPCCrowd::Ability::ENPCAbilityMovementAction, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_CREATENEWACTION_OFFSET))(this, inAction, inWorldTime);
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_CREATE_OFFSET))();
		}
	};
}
