#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3389C0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x338960)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7DF4820)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x7DF48E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CheckIsFollowingConditionInstanceData_TypeDefinitionIndex = 37905;

	struct alignas(1) CheckIsFollowingConditionInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CheckIsFollowingConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x108D0);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(CheckIsFollowingConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x108D4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
