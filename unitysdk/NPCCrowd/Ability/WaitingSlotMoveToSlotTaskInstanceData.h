#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x329A70)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x329A10)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7645AC0)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x7645B80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotMoveToSlotTaskInstanceData_TypeDefinitionIndex = 72283;

	struct alignas(1) WaitingSlotMoveToSlotTaskInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotMoveToSlotTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xCF80);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(WaitingSlotMoveToSlotTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xCF84);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
