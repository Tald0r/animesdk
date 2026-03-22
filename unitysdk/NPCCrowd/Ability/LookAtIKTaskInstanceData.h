#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x32CFA0)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x32CF40)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x77C95C0)
#define NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x77C9680)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int LookAtIKTaskInstanceData_TypeDefinitionIndex = 39415;

	struct alignas(1) LookAtIKTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(LookAtIKTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xFEC0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LookAtIKTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xFEC4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
