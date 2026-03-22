#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2FF430)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2FF3D0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6A001B0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A00270)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorCandidateConditionInstanceData_TypeDefinitionIndex = 76820;

	struct alignas(1) AttractorCandidateConditionInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(AttractorCandidateConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xC540);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AttractorCandidateConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xC544);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
