#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2FCFB0)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2FCF50)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x694D310)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x694D3D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorFindTaskInstanceData_TypeDefinitionIndex = 60903;

	struct alignas(1) AttractorFindTaskInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AttractorFindTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xE260);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(AttractorFindTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xE264);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
