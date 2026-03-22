#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class WaitingSlotMoveToSlotTaskVirtualProxy; }

#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x7226540)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x320800)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x320790)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x3207F0)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7226440)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x320720)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x72266C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotMoveToSlotTask_TypeDefinitionIndex = 38270;

	struct alignas(4) WaitingSlotMoveToSlotTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotMoveToSlotTask_TypeDefinitionIndex)->GetStaticField(0x11780);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotMoveToSlotTask_TypeDefinitionIndex)->GetStaticField(0x11784);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::System::Single delayTime; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x3C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x44
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> moveTargetHandle; // 0x4C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::WaitingSlotMoveToSlotTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::WaitingSlotMoveToSlotTask Create()
		{
			return ((::NPCCrowd::Ability::WaitingSlotMoveToSlotTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASK_CREATE_OFFSET))();
		}
	};
}
