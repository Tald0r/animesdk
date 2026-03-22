#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/NativeTypes/NativeRawPtr_1.h"
#include "unitysdk/NativeTypes/NativeReadonlyRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeEvent.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeSelectionFallback.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionSource.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STATETREECORE_STATETREEEXECUTIONCONTEXT_ADDTEMPORARYINSTANCE_OFFSET UNITYSDK_OFFSET(0x8EB8B0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_APPENDINSTANCESTRUCT_OFFSET UNITYSDK_OFFSET(0x19BE57C0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_COPYBATCHONACTIVEINSTANCES_OFFSET UNITYSDK_OFFSET(0x8EB8C0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_COPYBATCHWITHVALIDATION_OFFSET UNITYSDK_OFFSET(0x8EB8F0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_DEBUGGETSTATEPATH_OFFSET UNITYSDK_OFFSET(0x8EB920)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EB4E0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x8EB640)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x8EB630)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_FORMATINDENTSTRING_OFFSET UNITYSDK_OFFSET(0x19BE7E00)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEWORTEMPORARY_OFFSET UNITYSDK_OFFSET(0x8EB790)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEW_1_OFFSET UNITYSDK_OFFSET(0x19BE7130)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEW_OFFSET UNITYSDK_OFFSET(0x8EB6B0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSAFESTATENAME_OFFSET UNITYSDK_OFFSET(0x19BE7CB0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATESTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x19BE8740)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATETREERUNSTATUS_OFFSET UNITYSDK_OFFSET(0x8EB540)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8EB430)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_LOGINSTANCEID_OFFSET UNITYSDK_OFFSET(0x8EB450)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_STATEPATH_OFFSET UNITYSDK_OFFSET(0x19BE7E20)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_STATETREENAME_OFFSET UNITYSDK_OFFSET(0x8EB460)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_HASEVENTTOPROCESS_OFFSET UNITYSDK_OFFSET(0x8EB6A0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_ISHANDLESOURCEVALID_OFFSET UNITYSDK_OFFSET(0x8EB780)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_SETUPNEXTTRANSITION_OFFSET UNITYSDK_OFFSET(0x8EB680)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STARTGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x8EB570)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STARTTEMPORARYGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x3AB320)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x8EB5B0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STOPGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x8EB580)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STOPTEMPORARYGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x259A50)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_TESTALLCONDITIONS_OFFSET UNITYSDK_OFFSET(0x8EB690)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_TICKGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x8EB590)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_TICKTASKS_OFFSET UNITYSDK_OFFSET(0x8EB5A0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_UPDATEINSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x8EB650)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB4D0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT__UPDATEINSTANCEDATA_G__FINDINSTANCETEMPDATA_40_0_OFFSET UNITYSDK_OFFSET(0x19BE5560)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionContext_TypeDefinitionIndex = 26924;

	struct alignas(8) StateTreeExecutionContext
	{
		static ::System::Text::StringBuilder** StaticGet__statePath()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(StateTreeExecutionContext_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 MaxIterations = 0x5; // 0x0
		// static const ::System::Int32 MaxExecutionFrames = 0x8; // 0x0
		// static const ::System::Int32 MaxConditionIndent = 0x4; // 0x0
		// static const ::System::Int32 DebugIndentSize = 0x4; // 0x0
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTree> _rootStateTree; // 0x10
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeInstanceData> _instanceData; // 0x18
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeDataView> _contextAndExternalDataViews; // 0x20
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeEvent> _eventToProcess; // 0x38
		::NativeTypes::NativeList_1<::System::ValueTuple_2<::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree>, ::System::UInt16>> _collectedExternalCache; // 0x50
		::System::Boolean _isActiveExternalDataCollected; // 0x68
		::StateTreeCore::StateTreeTransitionResult _nextTransition; // 0x70
		::StateTreeCore::StateTreeTransitionSource _nextTransitionSource; // 0xB0
		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> _currentlyProcessedParentFrame; // 0xC0
		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> _currentlyProcessedFrame; // 0xC8
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeInstanceData> _currentlyProcessedSharedInstanceData; // 0xD0
		::StateTreeCore::StateTreeStateHandle _currentlyProcessedState; // 0xD8
		::StateTreeCore::StateTreeDataHandle _currentNodeDataHandle; // 0xDC
		::StateTreeCore::StateTreeDataView _currentNodeInstanceData; // 0xE8

		::System::Void _ctor(::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTree> stateTree, ::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeInstanceData> instanceData, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTree>, ::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeInstanceData>, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT__CTOR_OFFSET))(this, stateTree, instanceData, allocator);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_LogInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_LOGINSTANCEID_OFFSET))(this);
		}

		::System::String* get_StateTreeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_STATETREENAME_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_DISPOSE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus GetStateTreeRunStatus()
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATETREERUNSTATUS_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus StartGlobalTasks(::System::UInt16& outLastInitializedTaskIndex)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::System::UInt16&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STARTGLOBALTASKS_OFFSET))(this, outLastInitializedTaskIndex);
		}

		::System::Void StopGlobalTasks(::StateTreeCore::StateTreeRunStatus completionStatus, ::System::UInt16 lastInitializedTaskIndex)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeRunStatus, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STOPGLOBALTASKS_OFFSET))(this, completionStatus, lastInitializedTaskIndex);
		}

		::StateTreeCore::StateTreeRunStatus StartTemporaryGlobalTasks(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> currentParentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STARTTEMPORARYGLOBALTASKS_OFFSET))(this, currentParentFrame, currentFrame);
		}

		/*
		::System::Void StopTemporaryGlobalTasks(::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeTemporaryInstanceData> tempInstances)
		{
			return ((::System::Void(*)(::PVOID, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeTemporaryInstanceData>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STOPTEMPORARYGLOBALTASKS_OFFSET))(this, tempInstances);
		}
		*/

		::StateTreeCore::StateTreeRunStatus TickGlobalTasks(::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_TICKGLOBALTASKS_OFFSET))(this, deltaTime);
		}

		::StateTreeCore::StateTreeRunStatus TickTasks(::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_TICKTASKS_OFFSET))(this, deltaTime);
		}

		::System::Void StateCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STATECOMPLETED_OFFSET))(this);
		}

		::System::Void ExitState(::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_EXITSTATE_OFFSET))(this, transition);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_ENTERSTATE_OFFSET))(this, transition);
		}

		/*
		::System::Void UpdateInstanceData(::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExecutionFrame> currentActiveFrames, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExecutionFrame> nextActiveFrames)
		{
			return ((::System::Void(*)(::PVOID, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExecutionFrame>, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExecutionFrame>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_UPDATEINSTANCEDATA_OFFSET))(this, currentActiveFrames, nextActiveFrames);
		}
		*/

		/*
		static ::System::Void AppendInstanceStruct(::UnrealTypes::FInstancedStructContainer& container, ::NativeTypes::NativeListView_1<::UnrealTypes::FReadonlyStructView> inStructs, ::NativeTypes::NativeListView_1<::NativeTypes::NativeRawPtr_1<::UnrealTypes::FInstancedStruct>> inInstancesToMove)
		{
			return ((::System::Void(*)(::UnrealTypes::FInstancedStructContainer&, ::NativeTypes::NativeListView_1<::UnrealTypes::FReadonlyStructView>, ::NativeTypes::NativeListView_1<::NativeTypes::NativeRawPtr_1<::UnrealTypes::FInstancedStruct>>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_APPENDINSTANCESTRUCT_OFFSET))(container, inStructs, inInstancesToMove);
		}
		*/

		::System::Void SetupNextTransition(::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeStateHandle nextState, ::StateTreeCore::StateTreeTransitionPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeStateHandle, ::StateTreeCore::StateTreeTransitionPriority))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_SETUPNEXTTRANSITION_OFFSET))(this, currentFrame, nextState, priority);
		}

		::System::Boolean TestAllConditions(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> currentParentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::System::Int32 conditionsOffset, ::System::Int32 conditionsNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_TESTALLCONDITIONS_OFFSET))(this, currentParentFrame, currentFrame, conditionsOffset, conditionsNum);
		}

		/*
		::System::Boolean HasEventToProcess(::Foundation::Unreal::FGameplayTag& tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_HASEVENTTOPROCESS_OFFSET))(this, tag);
		}
		*/

		::StateTreeCore::StateTreeDataView GetDataView(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataHandle handle)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEW_OFFSET))(this, parentFrame, currentFrame, handle);
		}

		/*
		static ::StateTreeCore::StateTreeDataView GetDataView_1(::StateTreeCore::StateTreeInstanceData& instanceData, ::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeInstanceData> currentlyProcessedSharedInstanceData, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> contextAndExternalDataViews, ::StateTreeCore::StateTreeDataHandle handle)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::StateTreeCore::StateTreeInstanceData&, ::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTreeInstanceData>, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEW_1_OFFSET))(instanceData, currentlyProcessedSharedInstanceData, parentFrame, currentFrame, contextAndExternalDataViews, handle);
		}
		*/

		::System::Boolean IsHandleSourceValid(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_ISHANDLESOURCEVALID_OFFSET))(this, parentFrame, currentFrame, handle);
		}

		::StateTreeCore::StateTreeDataView GetDataViewOrTemporary(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataHandle handle)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEWORTEMPORARY_OFFSET))(this, parentFrame, currentFrame, handle);
		}

		/*
		::StateTreeCore::StateTreeDataView AddTemporaryInstance(::StateTreeCore::StateTreeExecutionFrame& frame, ::System::UInt16 ownerNodeIndex, ::StateTreeCore::StateTreeDataHandle dataHandle, ::UnrealTypes::FReadonlyStructView newInstanceData)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&, ::System::UInt16, ::StateTreeCore::StateTreeDataHandle, ::UnrealTypes::FReadonlyStructView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_ADDTEMPORARYINSTANCE_OFFSET))(this, frame, ownerNodeIndex, dataHandle, newInstanceData);
		}
		*/

		::System::Boolean CopyBatchOnActiveInstances(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataView targetView, ::System::UInt16 bindingsBatch)
		{
			return ((::System::Boolean(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataView, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_COPYBATCHONACTIVEINSTANCES_OFFSET))(this, parentFrame, currentFrame, targetView, bindingsBatch);
		}

		::System::Boolean CopyBatchWithValidation(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataView targetView, ::System::UInt16 bindingsBatch)
		{
			return ((::System::Boolean(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataView, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_COPYBATCHWITHVALIDATION_OFFSET))(this, parentFrame, currentFrame, targetView, bindingsBatch);
		}

		static ::System::String* GetSafeStateName(::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeStateHandle state)
		{
			return ((::System::String*(*)(::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSAFESTATENAME_OFFSET))(currentFrame, state);
		}

		static ::System::String* FormatIndentString(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_FORMATINDENTSTRING_OFFSET))(index);
		}

		static ::System::Text::StringBuilder* get_StatePath()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_STATEPATH_OFFSET))();
		}

		/*
		::System::String* DebugGetStatePath(::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExecutionFrame> activeFrames, ::System::Int32 currentFrameIndex, ::System::Int32 activeStateIndex)
		{
			return ((::System::String*(*)(::PVOID, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExecutionFrame>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_DEBUGGETSTATEPATH_OFFSET))(this, activeFrames, currentFrameIndex, activeStateIndex);
		}
		*/

		/*
		static ::System::String* GetStateStatusString(::StateTreeCore::StateTreeExecutionState& execState)
		{
			return ((::System::String*(*)(::StateTreeCore::StateTreeExecutionState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATESTATUSSTRING_OFFSET))(execState);
		}
		*/

		/*
		static ::NativeTypes::NativeRawPtr_1<::UnrealTypes::FInstancedStruct> _UpdateInstanceData_g__FindInstanceTempData_40_0(::StateTreeCore::StateTreeExecutionFrame& frame, ::StateTreeCore::StateTreeDataHandle dataHandle, ::StateTreeCore::StateTreeExecutionContext___c__DisplayClass40_0& a3)
		{
			return ((::NativeTypes::NativeRawPtr_1<::UnrealTypes::FInstancedStruct>(*)(::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle, ::StateTreeCore::StateTreeExecutionContext___c__DisplayClass40_0&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT__UPDATEINSTANCEDATA_G__FINDINSTANCETEMPDATA_40_0_OFFSET))(frame, dataHandle, a3);
		}
		*/
	};
}
