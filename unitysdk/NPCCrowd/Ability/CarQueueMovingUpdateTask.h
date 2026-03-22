#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class CarQueueMovingUpdateTaskVirtualProxy; }

#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x76406F0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x329540)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x3294D0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x329530)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x76405F0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x329460)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x7640840)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueMovingUpdateTask_TypeDefinitionIndex = 69387;

	struct alignas(4) CarQueueMovingUpdateTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(CarQueueMovingUpdateTask_TypeDefinitionIndex)->GetStaticField(0xCF50);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CarQueueMovingUpdateTask_TypeDefinitionIndex)->GetStaticField(0xCF54);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::CarQueueMovingUpdateTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::CarQueueMovingUpdateTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::CarQueueMovingUpdateTask Create()
		{
			return ((::NPCCrowd::Ability::CarQueueMovingUpdateTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASK_CREATE_OFFSET))();
		}
	};
}
