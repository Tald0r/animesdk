#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C98B0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C9850)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x60221D0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6022290)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowBlockedConditionInstanceData_TypeDefinitionIndex = 49664;

	struct alignas(1) PathFollowBlockedConditionInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PathFollowBlockedConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xFA30);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(PathFollowBlockedConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xFA34);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
