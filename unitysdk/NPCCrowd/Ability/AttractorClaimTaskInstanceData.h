#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C9550)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C94F0)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x601CFB0)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x601D070)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorClaimTaskInstanceData_TypeDefinitionIndex = 73023;

	struct alignas(1) AttractorClaimTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(AttractorClaimTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xFA00);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AttractorClaimTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xFA04);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
