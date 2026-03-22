#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class PathFollowMoveTaskVirtualProxy; }

#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x7DF9A60)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x339C60)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x339BF0)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x339C50)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7DF9960)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x339B80)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x7DF9BB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowMoveTask_TypeDefinitionIndex = 40141;

	struct alignas(4) PathFollowMoveTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PathFollowMoveTask_TypeDefinitionIndex)->GetStaticField(0x10900);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(PathFollowMoveTask_TypeDefinitionIndex)->GetStaticField(0x10904);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCNavmeshFragment> navmeshHandle; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::PathFollowMoveTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::PathFollowMoveTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::PathFollowMoveTask Create()
		{
			return ((::NPCCrowd::Ability::PathFollowMoveTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASK_CREATE_OFFSET))();
		}
	};
}
