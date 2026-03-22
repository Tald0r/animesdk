#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/StateTreeCore/StateTreeEventQueue.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionState.h"
#include "unitysdk/StateTreeCore/StateTreeTemporaryInstanceData.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionRequest.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedPropertyBag.h"
#include "unitysdk/UnrealTypes/FInstancedStructContainer.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STATETREECORE_STATETREEINSTANCEDATA_AREALLINSTANCESVALID_OFFSET UNITYSDK_OFFSET(0x8EC270)
#define STATETREECORE_STATETREEINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EC060)
#define STATETREECORE_STATETREEINSTANCEDATA_GETMUTABLESTRUCT_OFFSET UNITYSDK_OFFSET(0x8EC190)
#define STATETREECORE_STATETREEINSTANCEDATA_GETSTRUCT_OFFSET UNITYSDK_OFFSET(0x8EC190)
#define STATETREECORE_STATETREEINSTANCEDATA_GETTRANSITIONREQUESTS_OFFSET UNITYSDK_OFFSET(0x8EC1D0)
#define STATETREECORE_STATETREEINSTANCEDATA_INITINSTANCESTRUCTS_OFFSET UNITYSDK_OFFSET(0x8EC260)
#define STATETREECORE_STATETREEINSTANCEDATA_RESETTRANSITIONREQUESTS_OFFSET UNITYSDK_OFFSET(0x8EC250)
#define STATETREECORE_STATETREEINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x8EC180)
#define STATETREECORE_STATETREEINSTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC050)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeInstanceData_TypeDefinitionIndex = 26948;

	struct alignas(8) StateTreeInstanceData
	{
		::System::Int32 DebugInstanceID; // 0x10
		::Unity::Collections::Allocator Allocator; // 0x14
		::StateTreeCore::StateTreeExecutionState ExecutionState; // 0x18
		::UnrealTypes::FInstancedStructContainer InstanceStructs; // 0x68
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeTemporaryInstanceData> TemporaryInstances; // 0x80
		::StateTreeCore::StateTreeEventQueue EventQueue; // 0x98
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeTransitionRequest> _transitionRequests; // 0xB0
		::UnrealTypes::FInstancedPropertyBag GlobalParameters; // 0xC8

		::System::Void _ctor(::Unity::Collections::Allocator allocator, ::System::Int32 debugInstanceID)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA__CTOR_OFFSET))(this, allocator, debugInstanceID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_RESET_OFFSET))(this);
		}

		/*
		::UnrealTypes::FStructView GetMutableStruct(::System::Int32 index)
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GETMUTABLESTRUCT_OFFSET))(this, index);
		}
		*/

		/*
		::UnrealTypes::FReadonlyStructView GetStruct(::System::Int32 index)
		{
			return ((::UnrealTypes::FReadonlyStructView(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GETSTRUCT_OFFSET))(this, index);
		}
		*/

		/*
		::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeTransitionRequest> GetTransitionRequests()
		{
			return ((::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeTransitionRequest>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GETTRANSITIONREQUESTS_OFFSET))(this);
		}
		*/

		::System::Void ResetTransitionRequests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_RESETTRANSITIONREQUESTS_OFFSET))(this);
		}

		/*
		::System::Void InitInstanceStructs(::System::Collections::Generic::List_1<::UnrealTypes::FInstancedStruct>* structs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnrealTypes::FInstancedStruct>*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_INITINSTANCESTRUCTS_OFFSET))(this, structs);
		}
		*/

		::System::Boolean AreAllInstancesValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_AREALLINSTANCESVALID_OFFSET))(this);
		}
	};
}
