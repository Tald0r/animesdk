#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2__PathFollowNodesDirection_e__FixedBuffer.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2__PathFollowNodes_e__FixedBuffer.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ADDNODE_OFFSET UNITYSDK_OFFSET(0x339100)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CHECKPATHFOLLOWQUEUE_OFFSET UNITYSDK_OFFSET(0x7DF4E90)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CLEARNODE_OFFSET UNITYSDK_OFFSET(0x339400)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CREATE_OFFSET UNITYSDK_OFFSET(0x7DF5240)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GETNODE_OFFSET UNITYSDK_OFFSET(0x339000)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x339540)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x3394E0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ISFORWARD_OFFSET UNITYSDK_OFFSET(0x339080)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7DF50A0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETPATHFOLLOWNODEINDEX_OFFSET UNITYSDK_OFFSET(0x338FF0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGDIR_OFFSET UNITYSDK_OFFSET(0x339250)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGNODE_OFFSET UNITYSDK_OFFSET(0x3391A0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x339470)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WALKBACK_OFFSET UNITYSDK_OFFSET(0x339360)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WANDERINGBACK_OFFSET UNITYSDK_OFFSET(0x3392D0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2__CCTOR_OFFSET UNITYSDK_OFFSET(0x7DF5380)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex = 40742;

	struct alignas(4) FNPCAbilityPathFollowFragmentV2
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex)->GetStaticField(0x108E0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex)->GetStaticField(0x108E4);
		}
		// static const ::System::Byte MaxNodeNum = 0x40; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::Boolean enable; // 0x14
		::System::Boolean EnablePathGraph; // 0x15
		::System::Boolean IsInteracting; // 0x16
		::System::Boolean IsWandering; // 0x17
		::UnityEngine::Vector3 InteractTargetPos; // 0x18
		::UnityEngine::Quaternion InteractTargetRot; // 0x24
		::UnityEngine::Vector3 RefPos; // 0x34
		::System::Single RefPosRatio; // 0x40
		::UnityEngine::Vector3 Aim; // 0x44
		::UnityEngine::Vector3 StartPos; // 0x50
		::UnityEngine::Vector3 Forward; // 0x5C
		::UnityEngine::Vector3 StartUpAxis; // 0x68
		::UnityEngine::Vector3 AimUpAxis; // 0x74
		::System::Single InitDesiredSpeed; // 0x80
		::System::Single UpStairDesiredSpeed; // 0x84
		::System::Single DownStairDesiredSpeed; // 0x88
		::System::Single StairSpeedBlendingDuration; // 0x8C
		::System::Single StairSpeedStart; // 0x90
		::System::Single StairSpeedTarget; // 0x94
		::System::Single StairPrepareDistance; // 0x98
		::System::Single SlopeSpeedScale; // 0x9C
		::System::Single DesiredSpeed; // 0xA0
		::System::Single MaxDistance; // 0xA4
		::System::Single ProgressDistance; // 0xA8
		::System::Boolean OnSplinePath; // 0xAC
		::System::Int32 StairType; // 0xB0
		::System::Single StairSlopeCosine; // 0xB4
		::System::Int32 EnterStairType; // 0xB8
		::System::Boolean OnStair; // 0xBC
		::System::Boolean OnStairTransition; // 0xBD
		::System::Single PrepareStairBlendDuration; // 0xC0
		::System::Int32 SlopeType; // 0xC4
		::System::Single EndFadeOutTime; // 0xC8
		::System::Boolean StartFadeOut; // 0xCC
		::System::Boolean IsPassedAim; // 0xCD
		::System::Boolean IsPathEnd; // 0xCE
		::System::Boolean IsMoving; // 0xCF
		::System::Boolean IgnoreNodeState; // 0xD0
		::System::Boolean IsStarted; // 0xD1
		::System::Int32 LaneIndex; // 0xD4
		::System::Int32 NextLaneIndex; // 0xD8
		::System::Single LaneInnerOffset; // 0xDC
		::System::Byte PathFollowNodeCount; // 0xE0
		::System::Int16 SplineNodeControlPointIndex; // 0xE2
		::System::Int16 SplineNodeExitControlPointIndex; // 0xE4
		::System::Int32 ExitRefPointID; // 0xE8
		::System::Int32 LastPathFollowNodeID; // 0xEC
		::System::Byte PathFollowNodeIndex; // 0xF0
		::System::Boolean NodeIndexChanged; // 0xF1
		::System::Boolean Teleported; // 0xF2
		::System::Boolean EnableCubic; // 0xF3
		::System::Single StopDistance; // 0xF4
		::System::Single StartDistance; // 0xF8
		::System::Int32 PathID; // 0xFC
		::System::UInt32 PrevEntity; // 0x100
		::System::Boolean CurNodeHasPrev; // 0x104
		::UnityEngine::Vector3 K3; // 0x108
		::UnityEngine::Vector3 K2; // 0x114
		::UnityEngine::Vector3 K1; // 0x120
		::UnityEngine::Vector3 K0; // 0x12C
		::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2__PathFollowNodes_e__FixedBuffer PathFollowNodes; // 0x138
		::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2__PathFollowNodesDirection_e__FixedBuffer PathFollowNodesDirection; // 0x238

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2__CCTOR_OFFSET))();
		}

		::System::Void SetPathFollowNodeIndex(::System::Byte index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETPATHFOLLOWNODEINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetNode(::System::Int32 idx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GETNODE_OFFSET))(this, idx);
		}

		::System::Boolean IsForward(::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ISFORWARD_OFFSET))(this, idx);
		}

		::System::Void AddNode(::System::Int32 nodeID, ::System::Boolean forward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ADDNODE_OFFSET))(this, nodeID, forward);
		}

		::System::Void SetWanderingNode(::System::Int32 nodeID, ::System::Boolean forward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGNODE_OFFSET))(this, nodeID, forward);
		}

		::System::Void SetWanderingDir(::System::Boolean forward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGDIR_OFFSET))(this, forward);
		}

		::System::Void WanderingBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WANDERINGBACK_OFFSET))(this);
		}

		::System::Void WalkBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WALKBACK_OFFSET))(this);
		}

		::System::Void ClearNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CLEARNODE_OFFSET))(this);
		}

		static ::System::Boolean CheckPathFollowQueue(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 p1, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 p2)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CHECKPATHFOLLOWQUEUE_OFFSET))(p1, p2);
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 Create()
		{
			return ((::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CREATE_OFFSET))();
		}
	};
}
