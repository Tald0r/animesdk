#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class PathFollowIsMovingConditionVirtualProxy; }

#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0xA109C30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x37B5E0)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x37B570)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x37B5D0)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0xA109B30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x37B500)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA109D80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowIsMovingCondition_TypeDefinitionIndex = 63695;

	struct alignas(4) PathFollowIsMovingCondition
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(PathFollowIsMovingCondition_TypeDefinitionIndex)->GetStaticField(0x102B0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PathFollowIsMovingCondition_TypeDefinitionIndex)->GetStaticField(0x102B4);
		}
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::System::Boolean revert; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathfollowDataHandle; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::PathFollowIsMovingConditionVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::PathFollowIsMovingConditionVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::PathFollowIsMovingCondition Create()
		{
			return ((::NPCCrowd::Ability::PathFollowIsMovingCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITION_CREATE_OFFSET))();
		}
	};
}
