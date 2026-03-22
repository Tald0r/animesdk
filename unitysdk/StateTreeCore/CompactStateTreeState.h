#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/NativeTypes/NativeRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateSelectionBehavior.h"
#include "unitysdk/StateTreeCore/StateTreeStateType.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_COMPACTSTATETREESTATE_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0x8EA460)
#define STATETREECORE_COMPACTSTATETREESTATE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x3F0B10)
#define STATETREECORE_COMPACTSTATETREESTATE_RESET_OFFSET UNITYSDK_OFFSET(0x8EA470)

namespace StateTreeCore
{
	inline static constexpr unsigned int CompactStateTreeState_TypeDefinitionIndex = 26987;

	struct alignas(8) CompactStateTreeState
	{
		::Foundation::Unreal::FName Name; // 0x10
		::StateTreeCore::StateTreeStateHandle LinkedState; // 0x18
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTree> LinkedAsset; // 0x20
		::StateTreeCore::StateTreeStateHandle Parent; // 0x28
		::System::UInt16 ChildrenBegin; // 0x2A
		::System::UInt16 ChildrenEnd; // 0x2C
		::System::UInt16 EnterConditionsBegin; // 0x2E
		::System::UInt16 TransitionsBegin; // 0x30
		::System::UInt16 TasksBegin; // 0x32
		::System::UInt16 ParameterTemplateIndex; // 0x34
		::StateTreeCore::StateTreeDataHandle ParameterDataHandle; // 0x38
		::System::UInt16 ParameterBindingsBatch; // 0x40
		::System::Byte EnterConditionsNum; // 0x42
		::System::Byte TransitionsNum; // 0x43
		::System::Byte TasksNum; // 0x44
		::System::Byte InstanceDataNum; // 0x45
		::StateTreeCore::StateTreeStateType Type; // 0x48
		::StateTreeCore::StateTreeStateSelectionBehavior SelectionBehavior; // 0x4C
		::System::Boolean HasTransitionTasks; // 0x50
		::System::Boolean Enabled; // 0x51

		::System::Boolean get_HasChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_HASCHILDREN_OFFSET))(this);
		}

		::System::UInt16 get_NextSibling()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_NEXTSIBLING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_RESET_OFFSET))(this);
		}
	};
}
