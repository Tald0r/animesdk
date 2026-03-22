#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x326A90)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x326A30)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x757A020)
#define NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x757A0E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int MoveToTaskInstanceData_TypeDefinitionIndex = 74697;

	struct alignas(4) MoveToTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(MoveToTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xF450);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MoveToTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xF454);
		}
		::System::Boolean turnFlag; // 0x10
		::System::Single lastSpeedScale; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
