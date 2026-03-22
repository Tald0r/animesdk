#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class CarQueueStoppingUpdateTaskVirtualProxy; }

#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x7578B20)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3262E0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x326270)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x3262D0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7578A20)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x326200)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x7578C70)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueStoppingUpdateTask_TypeDefinitionIndex = 63558;

	struct alignas(4) CarQueueStoppingUpdateTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CarQueueStoppingUpdateTask_TypeDefinitionIndex)->GetStaticField(0xF430);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(CarQueueStoppingUpdateTask_TypeDefinitionIndex)->GetStaticField(0xF434);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::CarQueueStoppingUpdateTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::CarQueueStoppingUpdateTask Create()
		{
			return ((::NPCCrowd::Ability::CarQueueStoppingUpdateTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASK_CREATE_OFFSET))();
		}
	};
}
