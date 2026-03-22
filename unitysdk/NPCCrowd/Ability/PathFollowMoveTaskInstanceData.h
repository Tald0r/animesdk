#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2CC0E0)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2CC080)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x60A7020)
#define NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x60A70E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowMoveTaskInstanceData_TypeDefinitionIndex = 58029;

	struct alignas(1) PathFollowMoveTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(PathFollowMoveTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDC00);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PathFollowMoveTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDC04);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWMOVETASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
