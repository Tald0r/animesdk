#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x30BC20)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x30BBC0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6B3DB20)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B3DBE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueUpdateEnvironmentTaskInstanceData_TypeDefinitionIndex = 46806;

	struct alignas(1) CarQueueUpdateEnvironmentTaskInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CarQueueUpdateEnvironmentTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xEF20);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(CarQueueUpdateEnvironmentTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xEF24);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
