#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C9640)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C95E0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x601D6E0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x601D7A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FollowMoveTaskInstanceData_TypeDefinitionIndex = 78104;

	struct alignas(4) FollowMoveTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FollowMoveTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xFA10);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FollowMoveTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xFA14);
		}
		::System::Single lastDistance; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
