#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define STATETREECORE_STATETREEEXECUTIONFRAME_CLONE_OFFSET UNITYSDK_OFFSET(0x8EBC10)
#define STATETREECORE_STATETREEEXECUTIONFRAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EBBF0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_ACTIVEINSTANCEINDEXBASE_OFFSET UNITYSDK_OFFSET(0x5680D0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_EXTERNALDATABASEINDEX_OFFSET UNITYSDK_OFFSET(0x8EBA70)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_GLOBALINSTANCEINDEXBASE_OFFSET UNITYSDK_OFFSET(0x8EBA90)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_GLOBALPARAMETERDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x53A5B0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_ISGLOBALFRAME_OFFSET UNITYSDK_OFFSET(0x8EBAE0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_NUMCURRENTLYACTIVESTATES_OFFSET UNITYSDK_OFFSET(0x8EBAC0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_STATEPARAMETERDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x379DB0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_GET_STATETREE_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_ISSAMEFRAME_OFFSET UNITYSDK_OFFSET(0x8EBCF0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_SET_ACTIVEINSTANCEINDEXBASE_OFFSET UNITYSDK_OFFSET(0x5680E0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_SET_EXTERNALDATABASEINDEX_OFFSET UNITYSDK_OFFSET(0x8EBA80)
#define STATETREECORE_STATETREEEXECUTIONFRAME_SET_GLOBALINSTANCEINDEXBASE_OFFSET UNITYSDK_OFFSET(0x8EBAA0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_SET_GLOBALPARAMETERDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x8EBAB0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_SET_ISGLOBALFRAME_OFFSET UNITYSDK_OFFSET(0x8EBAF0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_SET_NUMCURRENTLYACTIVESTATES_OFFSET UNITYSDK_OFFSET(0x8EBAD0)
#define STATETREECORE_STATETREEEXECUTIONFRAME_SET_STATEPARAMETERDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x379D80)
#define STATETREECORE_STATETREEEXECUTIONFRAME_SET_STATETREE_OFFSET UNITYSDK_OFFSET(0x2C3980)
#define STATETREECORE_STATETREEEXECUTIONFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBB00)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionFrame_TypeDefinitionIndex = 26934;

	struct alignas(8) StateTreeExecutionFrame
	{
		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTree> _StateTree_k__BackingField; // 0x10
		::StateTreeCore::StateTreeStateHandle RootState; // 0x18
		::StateTreeCore::StateTreeActiveStates ActiveStates; // 0x20
		::System::UInt16 _ExternalDataBaseIndex_k__BackingField; // 0x40
		::System::UInt16 _GlobalInstanceIndexBase_k__BackingField; // 0x42
		::System::UInt16 _ActiveInstanceIndexBase_k__BackingField; // 0x44
		::StateTreeCore::StateTreeDataHandle _StateParameterDataHandle_k__BackingField; // 0x48
		::StateTreeCore::StateTreeDataHandle _GlobalParameterDataHandle_k__BackingField; // 0x50
		::System::Byte _NumCurrentlyActiveStates_k__BackingField; // 0x58
		::System::Boolean _IsGlobalFrame_k__BackingField; // 0x59

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME__CTOR_OFFSET))(this, allocator);
		}

		::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTree> get_StateTree()
		{
			return ((::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTree>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_STATETREE_OFFSET))(this);
		}

		::System::Void set_StateTree(::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTree> value)
		{
			return ((::System::Void(*)(::PVOID, ::NativeTypes::NativeRawPtr_1<::StateTreeCore::StateTree>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_SET_STATETREE_OFFSET))(this, value);
		}

		::System::UInt16 get_ExternalDataBaseIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_EXTERNALDATABASEINDEX_OFFSET))(this);
		}

		::System::Void set_ExternalDataBaseIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_SET_EXTERNALDATABASEINDEX_OFFSET))(this, value);
		}

		::System::UInt16 get_GlobalInstanceIndexBase()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_GLOBALINSTANCEINDEXBASE_OFFSET))(this);
		}

		::System::Void set_GlobalInstanceIndexBase(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_SET_GLOBALINSTANCEINDEXBASE_OFFSET))(this, value);
		}

		::System::UInt16 get_ActiveInstanceIndexBase()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_ACTIVEINSTANCEINDEXBASE_OFFSET))(this);
		}

		::System::Void set_ActiveInstanceIndexBase(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_SET_ACTIVEINSTANCEINDEXBASE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeDataHandle get_StateParameterDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_STATEPARAMETERDATAHANDLE_OFFSET))(this);
		}

		::System::Void set_StateParameterDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_SET_STATEPARAMETERDATAHANDLE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeDataHandle get_GlobalParameterDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_GLOBALPARAMETERDATAHANDLE_OFFSET))(this);
		}

		::System::Void set_GlobalParameterDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_SET_GLOBALPARAMETERDATAHANDLE_OFFSET))(this, value);
		}

		::System::Byte get_NumCurrentlyActiveStates()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_NUMCURRENTLYACTIVESTATES_OFFSET))(this);
		}

		::System::Void set_NumCurrentlyActiveStates(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_SET_NUMCURRENTLYACTIVESTATES_OFFSET))(this, value);
		}

		::System::Boolean get_IsGlobalFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_GET_ISGLOBALFRAME_OFFSET))(this);
		}

		::System::Void set_IsGlobalFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_SET_ISGLOBALFRAME_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_DISPOSE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeExecutionFrame Clone()
		{
			return ((::StateTreeCore::StateTreeExecutionFrame(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_CLONE_OFFSET))(this);
		}

		::System::Boolean IsSameFrame(::StateTreeCore::StateTreeExecutionFrame& frame)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONFRAME_ISSAMEFRAME_OFFSET))(this, frame);
		}
	};
}
