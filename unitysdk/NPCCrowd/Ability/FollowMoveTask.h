#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class FollowMoveTaskVirtualProxy; }

#define NPCCROWD_ABILITY_FOLLOWMOVETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x6B3EE50)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x30C1D0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x30C160)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x30C1C0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6B3ED50)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x30C0F0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B3EFD0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FollowMoveTask_TypeDefinitionIndex = 63547;

	struct alignas(4) FollowMoveTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FollowMoveTask_TypeDefinitionIndex)->GetStaticField(0xEF40);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FollowMoveTask_TypeDefinitionIndex)->GetStaticField(0xEF44);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCNavmeshFragment> navmeshHandle; // 0x38
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackboardHandle; // 0x40
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x48
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> baseDataHandle; // 0x50
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment> navLocationHandle; // 0x58

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::FollowMoveTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::FollowMoveTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FollowMoveTask Create()
		{
			return ((::NPCCrowd::Ability::FollowMoveTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASK_CREATE_OFFSET))();
		}
	};
}
