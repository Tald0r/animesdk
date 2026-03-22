#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_HASREACTIONCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x33C5F0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x33C590)
#define NPCCROWD_ABILITY_HASREACTIONCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7EF3AF0)
#define NPCCROWD_ABILITY_HASREACTIONCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x7EF3BB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int HasReactionConditionInstanceData_TypeDefinitionIndex = 65067;

	struct alignas(1) HasReactionConditionInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(HasReactionConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xA400);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(HasReactionConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xA404);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITIONINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
