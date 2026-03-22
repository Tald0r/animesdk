#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionDelayedState.h"
#include "unitysdk/StateTreeCore/StateTreeUpdatePhase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define STATETREECORE_STATETREEEXECUTIONSTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EBE90)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_COMPLETEDFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x8EBD60)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_COMPLETEDSTATEHANDLE_OFFSET UNITYSDK_OFFSET(0x8EBD80)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x7A7660)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_ENTERSTATEFAILEDFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x8EBA70)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_ENTERSTATEFAILEDTASKINDEX_OFFSET UNITYSDK_OFFSET(0x8EBA90)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_LASTTICKSTATUS_OFFSET UNITYSDK_OFFSET(0x3913A0)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_REQUESTEDSTOP_OFFSET UNITYSDK_OFFSET(0x2F7B90)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_STATECHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x8EBDA0)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_TREERUNSTATUS_OFFSET UNITYSDK_OFFSET(0x2FC180)
#define STATETREECORE_STATETREEEXECUTIONSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x8EBEC0)
#define STATETREECORE_STATETREEEXECUTIONSTATE_SET_COMPLETEDFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x8EBD70)
#define STATETREECORE_STATETREEEXECUTIONSTATE_SET_COMPLETEDSTATEHANDLE_OFFSET UNITYSDK_OFFSET(0x8EBD90)
#define STATETREECORE_STATETREEEXECUTIONSTATE_SET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x7A7670)
#define STATETREECORE_STATETREEEXECUTIONSTATE_SET_ENTERSTATEFAILEDFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x8EBA80)
#define STATETREECORE_STATETREEEXECUTIONSTATE_SET_ENTERSTATEFAILEDTASKINDEX_OFFSET UNITYSDK_OFFSET(0x8EBAA0)
#define STATETREECORE_STATETREEEXECUTIONSTATE_SET_LASTTICKSTATUS_OFFSET UNITYSDK_OFFSET(0x391450)
#define STATETREECORE_STATETREEEXECUTIONSTATE_SET_REQUESTEDSTOP_OFFSET UNITYSDK_OFFSET(0x391460)
#define STATETREECORE_STATETREEEXECUTIONSTATE_SET_STATECHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x8EBDB0)
#define STATETREECORE_STATETREEEXECUTIONSTATE_SET_TREERUNSTATUS_OFFSET UNITYSDK_OFFSET(0x2FC160)
#define STATETREECORE_STATETREEEXECUTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBDC0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionState_TypeDefinitionIndex = 26933;

	struct alignas(8) StateTreeExecutionState
	{
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeExecutionFrame> ActiveFrames; // 0x10
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeTransitionDelayedState> DelayedTransitions; // 0x28
		::System::UInt16 _EnterStateFailedFrameIndex_k__BackingField; // 0x40
		::System::UInt16 _EnterStateFailedTaskIndex_k__BackingField; // 0x42
		::StateTreeCore::StateTreeRunStatus _LastTickStatus_k__BackingField; // 0x44
		::StateTreeCore::StateTreeRunStatus _TreeRunStatus_k__BackingField; // 0x48
		::StateTreeCore::StateTreeRunStatus _RequestedStop_k__BackingField; // 0x4C
		::StateTreeCore::StateTreeUpdatePhase _CurrentPhase_k__BackingField; // 0x50
		::System::UInt16 _CompletedFrameIndex_k__BackingField; // 0x54
		::StateTreeCore::StateTreeStateHandle _CompletedStateHandle_k__BackingField; // 0x56
		::System::UInt16 _StateChangeCount_k__BackingField; // 0x58

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE__CTOR_OFFSET))(this, allocator);
		}

		::System::UInt16 get_EnterStateFailedFrameIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_ENTERSTATEFAILEDFRAMEINDEX_OFFSET))(this);
		}

		::System::Void set_EnterStateFailedFrameIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_SET_ENTERSTATEFAILEDFRAMEINDEX_OFFSET))(this, value);
		}

		::System::UInt16 get_EnterStateFailedTaskIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_ENTERSTATEFAILEDTASKINDEX_OFFSET))(this);
		}

		::System::Void set_EnterStateFailedTaskIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_SET_ENTERSTATEFAILEDTASKINDEX_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeRunStatus get_LastTickStatus()
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_LASTTICKSTATUS_OFFSET))(this);
		}

		::System::Void set_LastTickStatus(::StateTreeCore::StateTreeRunStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeRunStatus))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_SET_LASTTICKSTATUS_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeRunStatus get_TreeRunStatus()
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_TREERUNSTATUS_OFFSET))(this);
		}

		::System::Void set_TreeRunStatus(::StateTreeCore::StateTreeRunStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeRunStatus))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_SET_TREERUNSTATUS_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeRunStatus get_RequestedStop()
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_REQUESTEDSTOP_OFFSET))(this);
		}

		::System::Void set_RequestedStop(::StateTreeCore::StateTreeRunStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeRunStatus))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_SET_REQUESTEDSTOP_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeUpdatePhase get_CurrentPhase()
		{
			return ((::StateTreeCore::StateTreeUpdatePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_CURRENTPHASE_OFFSET))(this);
		}

		::System::Void set_CurrentPhase(::StateTreeCore::StateTreeUpdatePhase value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeUpdatePhase))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_SET_CURRENTPHASE_OFFSET))(this, value);
		}

		::System::UInt16 get_CompletedFrameIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_COMPLETEDFRAMEINDEX_OFFSET))(this);
		}

		::System::Void set_CompletedFrameIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_SET_COMPLETEDFRAMEINDEX_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeStateHandle get_CompletedStateHandle()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_COMPLETEDSTATEHANDLE_OFFSET))(this);
		}

		::System::Void set_CompletedStateHandle(::StateTreeCore::StateTreeStateHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_SET_COMPLETEDSTATEHANDLE_OFFSET))(this, value);
		}

		::System::UInt16 get_StateChangeCount()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_STATECHANGECOUNT_OFFSET))(this);
		}

		::System::Void set_StateChangeCount(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_SET_STATECHANGECOUNT_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_RESET_OFFSET))(this);
		}
	};
}
