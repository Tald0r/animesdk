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

namespace NPCCrowd::Ability { class WaitingSlotUseTaskVirtualProxy; }

#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x6EC1F80)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3170C0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x317050)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x3170B0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6EC1E80)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x316FE0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x6EC2100)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotUseTask_TypeDefinitionIndex = 49325;

	struct alignas(4) WaitingSlotUseTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotUseTask_TypeDefinitionIndex)->GetStaticField(0x11120);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotUseTask_TypeDefinitionIndex)->GetStaticField(0x11124);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::System::Single delayTime; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x3C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x44
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> moveTargetHandle; // 0x4C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::WaitingSlotUseTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::WaitingSlotUseTask Create()
		{
			return ((::NPCCrowd::Ability::WaitingSlotUseTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASK_CREATE_OFFSET))();
		}
	};
}
