#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class WaitingSlotFindTaskVirtualProxy; }

#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x648BF40)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2D48C0)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2D4850)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2D48B0)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x648BE40)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2D47E0)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x648C0B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotFindTask_TypeDefinitionIndex = 58659;

	struct alignas(4) WaitingSlotFindTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotFindTask_TypeDefinitionIndex)->GetStaticField(0xE860);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotFindTask_TypeDefinitionIndex)->GetStaticField(0xE864);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::System::Single delayTime; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x3C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x44

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::WaitingSlotFindTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::WaitingSlotFindTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::WaitingSlotFindTask Create()
		{
			return ((::NPCCrowd::Ability::WaitingSlotFindTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASK_CREATE_OFFSET))();
		}
	};
}
