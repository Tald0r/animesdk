#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2FD1B0)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2FD150)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x695CB80)
#define NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x695CC40)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotUseTaskInstanceData_TypeDefinitionIndex = 69436;

	struct alignas(1) WaitingSlotUseTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotUseTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xE2D0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotUseTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xE2D4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTUSETASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
