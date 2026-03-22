#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2CC1A0)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2CC140)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x60A7790)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x60A7850)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotFindTaskInstanceData_TypeDefinitionIndex = 58836;

	struct alignas(1) WaitingSlotFindTaskInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotFindTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDC10);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotFindTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDC14);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
