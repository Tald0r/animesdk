#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class PathFollowIgnoreBlockConditionVirtualProxy; }

#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x60A6DA0)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2CC020)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2CBFB0)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2CC010)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x60A6CA0)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2CBF40)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x60A6EF0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowIgnoreBlockCondition_TypeDefinitionIndex = 75499;

	struct alignas(4) PathFollowIgnoreBlockCondition
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(PathFollowIgnoreBlockCondition_TypeDefinitionIndex)->GetStaticField(0xDBF0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PathFollowIgnoreBlockCondition_TypeDefinitionIndex)->GetStaticField(0xDBF4);
		}
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::System::Boolean revert; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::PathFollowIgnoreBlockConditionVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::PathFollowIgnoreBlockConditionVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::PathFollowIgnoreBlockCondition Create()
		{
			return ((::NPCCrowd::Ability::PathFollowIgnoreBlockCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITION_CREATE_OFFSET))();
		}
	};
}
