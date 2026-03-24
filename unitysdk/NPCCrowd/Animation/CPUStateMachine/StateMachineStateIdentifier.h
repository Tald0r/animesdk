#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x32E7F0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISMULTIPLE_OFFSET UNITYSDK_OFFSET(0x32E6C0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x32E660)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x32E720)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x7520EE0)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int StateMachineStateIdentifier_TypeDefinitionIndex = 49092;

	struct alignas(4) StateMachineStateIdentifier
	{
		static ::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier* StaticGet_Multiple()
		{
			return (::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier*)Il2CppClass::FromTypeDefinitionIndex(StateMachineStateIdentifier_TypeDefinitionIndex)->GetStaticField(0xF960);
		}
		static ::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier* StaticGet_Null()
		{
			return (::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier*)Il2CppClass::FromTypeDefinitionIndex(StateMachineStateIdentifier_TypeDefinitionIndex)->GetStaticField(0xF964);
		}
		::System::Int32 stateIndex; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsMultiple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISMULTIPLE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::StateMachineStateIdentifier))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_STATEMACHINESTATEIDENTIFIER_EQUALS_OFFSET))(this, other);
		}
	};
}
