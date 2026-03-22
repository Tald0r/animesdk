#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x37AF70)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x37AF10)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0xA1047B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA104870)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorUseTaskInstanceData_TypeDefinitionIndex = 43301;

	struct alignas(4) AttractorUseTaskInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AttractorUseTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x10260);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(AttractorUseTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x10264);
		}
		::System::Int32 attractorHandler; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
