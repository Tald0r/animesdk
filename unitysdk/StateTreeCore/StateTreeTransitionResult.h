#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/NativeTypes/NativeReadonlyRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeStateChangeType.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define STATETREECORE_STATETREETRANSITIONRESULT_CLONE_OFFSET UNITYSDK_OFFSET(0x8ED320)
#define STATETREECORE_STATETREETRANSITIONRESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED310)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x391490)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_CURRENTRUNSTATUS_OFFSET UNITYSDK_OFFSET(0x359050)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x3F0DC0)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x2FD450)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_SOURCEROOTSTATE_OFFSET UNITYSDK_OFFSET(0x8ED230)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_SOURCESTATETREE_OFFSET UNITYSDK_OFFSET(0x2F7FC0)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_SOURCESTATE_OFFSET UNITYSDK_OFFSET(0x3F0B10)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_TARGETSTATE_OFFSET UNITYSDK_OFFSET(0x67FFA0)
#define STATETREECORE_STATETREETRANSITIONRESULT_RESET_OFFSET UNITYSDK_OFFSET(0x8ED340)
#define STATETREECORE_STATETREETRANSITIONRESULT_SET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x391480)
#define STATETREECORE_STATETREETRANSITIONRESULT_SET_CURRENTRUNSTATUS_OFFSET UNITYSDK_OFFSET(0x379D90)
#define STATETREECORE_STATETREETRANSITIONRESULT_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x8ED220)
#define STATETREECORE_STATETREETRANSITIONRESULT_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x35D7B0)
#define STATETREECORE_STATETREETRANSITIONRESULT_SET_SOURCEROOTSTATE_OFFSET UNITYSDK_OFFSET(0x8ED240)
#define STATETREECORE_STATETREETRANSITIONRESULT_SET_SOURCESTATETREE_OFFSET UNITYSDK_OFFSET(0x2F9000)
#define STATETREECORE_STATETREETRANSITIONRESULT_SET_SOURCESTATE_OFFSET UNITYSDK_OFFSET(0x8ED200)
#define STATETREECORE_STATETREETRANSITIONRESULT_SET_TARGETSTATE_OFFSET UNITYSDK_OFFSET(0x8ED210)
#define STATETREECORE_STATETREETRANSITIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED250)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionResult_TypeDefinitionIndex = 26938;

	struct alignas(8) StateTreeTransitionResult
	{
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeExecutionFrame> NextActiveFrames; // 0x10
		::StateTreeCore::StateTreeRunStatus _CurrentRunStatus_k__BackingField; // 0x28
		::StateTreeCore::StateTreeStateHandle _SourceState_k__BackingField; // 0x2C
		::StateTreeCore::StateTreeStateHandle _TargetState_k__BackingField; // 0x2E
		::StateTreeCore::StateTreeStateHandle _CurrentState_k__BackingField; // 0x30
		::StateTreeCore::StateTreeStateChangeType _ChangeType_k__BackingField; // 0x34
		::StateTreeCore::StateTreeTransitionPriority _Priority_k__BackingField; // 0x38
		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> _SourceStateTree_k__BackingField; // 0x40
		::StateTreeCore::StateTreeStateHandle _SourceRootState_k__BackingField; // 0x48

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT__CTOR_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeRunStatus get_CurrentRunStatus()
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_CURRENTRUNSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentRunStatus(::StateTreeCore::StateTreeRunStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeRunStatus))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_SET_CURRENTRUNSTATUS_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeStateHandle get_SourceState()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_SOURCESTATE_OFFSET))(this);
		}

		::System::Void set_SourceState(::StateTreeCore::StateTreeStateHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_SET_SOURCESTATE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeStateHandle get_TargetState()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_TARGETSTATE_OFFSET))(this);
		}

		::System::Void set_TargetState(::StateTreeCore::StateTreeStateHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_SET_TARGETSTATE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeStateHandle get_CurrentState()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::StateTreeCore::StateTreeStateHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_SET_CURRENTSTATE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeStateChangeType get_ChangeType()
		{
			return ((::StateTreeCore::StateTreeStateChangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_CHANGETYPE_OFFSET))(this);
		}

		::System::Void set_ChangeType(::StateTreeCore::StateTreeStateChangeType value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateChangeType))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_SET_CHANGETYPE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeTransitionPriority get_Priority()
		{
			return ((::StateTreeCore::StateTreeTransitionPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::StateTreeCore::StateTreeTransitionPriority value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionPriority))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_SET_PRIORITY_OFFSET))(this, value);
		}

		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> get_SourceStateTree()
		{
			return ((::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_SOURCESTATETREE_OFFSET))(this);
		}

		::System::Void set_SourceStateTree(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> value)
		{
			return ((::System::Void(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_SET_SOURCESTATETREE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeStateHandle get_SourceRootState()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_SOURCEROOTSTATE_OFFSET))(this);
		}

		::System::Void set_SourceRootState(::StateTreeCore::StateTreeStateHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_SET_SOURCEROOTSTATE_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_DISPOSE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeTransitionResult Clone()
		{
			return ((::StateTreeCore::StateTreeTransitionResult(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_CLONE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_RESET_OFFSET))(this);
		}
	};
}
