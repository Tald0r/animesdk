#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C3FE0)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C3F80)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x5DFB720)
#define NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x5DFB7E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int DebugLogTaskInstanceData_TypeDefinitionIndex = 50899;

	struct alignas(1) DebugLogTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(DebugLogTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x114A0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DebugLogTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x114A4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
