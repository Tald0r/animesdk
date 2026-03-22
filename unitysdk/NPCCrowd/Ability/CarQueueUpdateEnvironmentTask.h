#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class CarQueueUpdateEnvironmentTaskVirtualProxy; }

#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x77C8F30)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x32CEE0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x32CE70)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x32CED0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x77C8E30)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x32CE00)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x77C9080)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueUpdateEnvironmentTask_TypeDefinitionIndex = 64603;

	struct alignas(4) CarQueueUpdateEnvironmentTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(CarQueueUpdateEnvironmentTask_TypeDefinitionIndex)->GetStaticField(0xFEB0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CarQueueUpdateEnvironmentTask_TypeDefinitionIndex)->GetStaticField(0xFEB4);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::CarQueueUpdateEnvironmentTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::CarQueueUpdateEnvironmentTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask Create()
		{
			return ((::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_CREATE_OFFSET))();
		}
	};
}
