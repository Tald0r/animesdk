#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x329660)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x329600)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7640970)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x7640A30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int GameplayTagContainerMatchConditionInstanceData_TypeDefinitionIndex = 54472;

	struct alignas(1) GameplayTagContainerMatchConditionInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameplayTagContainerMatchConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xCF60);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(GameplayTagContainerMatchConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xCF64);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
