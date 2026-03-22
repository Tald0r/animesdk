#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2FFD30)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2FFCD0)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6A01730)
#define NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A017F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowIsMovingConditionInstanceData_TypeDefinitionIndex = 36459;

	struct alignas(1) PathFollowIsMovingConditionInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PathFollowIsMovingConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xC580);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(PathFollowIsMovingConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xC584);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWISMOVINGCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
