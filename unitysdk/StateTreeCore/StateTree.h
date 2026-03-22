#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/NativeTypes/NativeRawPtr_1.h"
#include "unitysdk/StateTreeCore/CompactStateTreeState.h"
#include "unitysdk/StateTreeCore/CompactStateTreeTransition.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/StateTreeCore/StateTreePropertyBindings.h"
#include "unitysdk/StateTreeCore/StateTreeSchema.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedPropertyBag.h"
#include "unitysdk/UnrealTypes/FInstancedStructContainer.h"

#define STATETREECORE_STATETREE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EA6F0)
#define STATETREECORE_STATETREE_GET_ALLOCATOR_OFFSET UNITYSDK_OFFSET(0x8EA6B0)
#define STATETREECORE_STATETREE_GET_ISREADYTORUN_OFFSET UNITYSDK_OFFSET(0x8EA6C0)
#define STATETREECORE_STATETREE_LINK_OFFSET UNITYSDK_OFFSET(0x8EA700)
#define STATETREECORE_STATETREE_PATCHBINDINGS_OFFSET UNITYSDK_OFFSET(0x8EA710)
#define STATETREECORE_STATETREE_RESETLINKED_OFFSET UNITYSDK_OFFSET(0x8EA720)
#define STATETREECORE_STATETREE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA6E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTree_TypeDefinitionIndex = 26917;

	struct alignas(8) StateTree
	{
		::Foundation::Unreal::FName Name; // 0x10
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeSchema> Schema; // 0x18
		::NativeTypes::NativeList_1<::StateTreeCore::CompactStateTreeState> States; // 0x20
		::NativeTypes::NativeList_1<::StateTreeCore::CompactStateTreeTransition> Transitions; // 0x38
		::UnrealTypes::FInstancedStructContainer Nodes; // 0x50
		::StateTreeCore::StateTreeInstanceData DefaultInstanceData; // 0x68
		::StateTreeCore::StateTreeInstanceData SharedInstanceData; // 0x130
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeExternalDataDesc> ContextDataDescs; // 0x1F8
		::StateTreeCore::StateTreePropertyBindings PropertyBindings; // 0x210
		::UnrealTypes::FInstancedPropertyBag Parameters; // 0x290
		::System::UInt16 NumContextData; // 0x2A0
		::System::UInt16 NumGlobalInstanceData; // 0x2A2
		::System::UInt16 GlobalTasksBegin; // 0x2A4
		::System::UInt16 GlobalTasksNum; // 0x2A6
		::System::Boolean HasGlobalTransitionTasks; // 0x2A8
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeExternalDataDesc> ExternalDataDescs; // 0x2B0
		::System::Boolean _isLinked; // 0x2C8
		::Unity::Collections::Allocator _allocator; // 0x2CC

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE__CTOR_OFFSET))(this, allocator);
		}

		::Unity::Collections::Allocator get_Allocator()
		{
			return ((::Unity::Collections::Allocator(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_GET_ALLOCATOR_OFFSET))(this);
		}

		::System::Boolean get_IsReadyToRun()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_GET_ISREADYTORUN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Link()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_LINK_OFFSET))(this);
		}

		::System::Boolean PatchBindings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_PATCHBINDINGS_OFFSET))(this);
		}

		::System::Void ResetLinked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_RESETLINKED_OFFSET))(this);
		}
	};
}
