#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class PathFollowBlockedConditionVirtualProxy; }

#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x7EF4DB0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x33C730)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x33C6C0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x33C720)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7EF4CB0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x33C650)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x7EF4F00)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowBlockedCondition_TypeDefinitionIndex = 56320;

	struct alignas(4) PathFollowBlockedCondition
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PathFollowBlockedCondition_TypeDefinitionIndex)->GetStaticField(0xA420);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(PathFollowBlockedCondition_TypeDefinitionIndex)->GetStaticField(0xA424);
		}
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::PathFollowBlockedConditionVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::PathFollowBlockedConditionVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::PathFollowBlockedCondition Create()
		{
			return ((::NPCCrowd::Ability::PathFollowBlockedCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITION_CREATE_OFFSET))();
		}
	};
}
