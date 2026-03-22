#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C4750)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C46F0)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x5E034A0)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x5E03560)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int SetStateMachineParamTaskInstanceData_TypeDefinitionIndex = 51157;

	struct alignas(1) SetStateMachineParamTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(SetStateMachineParamTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x114F0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SetStateMachineParamTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x114F4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
