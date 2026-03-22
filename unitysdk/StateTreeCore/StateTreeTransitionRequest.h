#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeReadonlyRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREETRANSITIONREQUEST_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x34CDD0)
#define STATETREECORE_STATETREETRANSITIONREQUEST_GET_SOURCEROOTSTATE_OFFSET UNITYSDK_OFFSET(0x390970)
#define STATETREECORE_STATETREETRANSITIONREQUEST_GET_SOURCESTATETREE_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STATETREECORE_STATETREETRANSITIONREQUEST_GET_SOURCESTATE_OFFSET UNITYSDK_OFFSET(0x3305B0)
#define STATETREECORE_STATETREETRANSITIONREQUEST_GET_TARGETSTATE_OFFSET UNITYSDK_OFFSET(0x8ED1E0)
#define STATETREECORE_STATETREETRANSITIONREQUEST_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x34CE60)
#define STATETREECORE_STATETREETRANSITIONREQUEST_SET_SOURCEROOTSTATE_OFFSET UNITYSDK_OFFSET(0x72CDA0)
#define STATETREECORE_STATETREETRANSITIONREQUEST_SET_SOURCESTATETREE_OFFSET UNITYSDK_OFFSET(0x2CB170)
#define STATETREECORE_STATETREETRANSITIONREQUEST_SET_SOURCESTATE_OFFSET UNITYSDK_OFFSET(0x3305D0)
#define STATETREECORE_STATETREETRANSITIONREQUEST_SET_TARGETSTATE_OFFSET UNITYSDK_OFFSET(0x8ED1F0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionRequest_TypeDefinitionIndex = 26941;

	struct alignas(8) StateTreeTransitionRequest
	{
		::StateTreeCore::StateTreeStateHandle _SourceState_k__BackingField; // 0x10
		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> _SourceStateTree_k__BackingField; // 0x18
		::StateTreeCore::StateTreeStateHandle _SourceRootState_k__BackingField; // 0x20
		::StateTreeCore::StateTreeStateHandle _TargetState_k__BackingField; // 0x22
		::StateTreeCore::StateTreeTransitionPriority _Priority_k__BackingField; // 0x24

		::StateTreeCore::StateTreeStateHandle get_SourceState()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_GET_SOURCESTATE_OFFSET))(this);
		}

		::System::Void set_SourceState(::StateTreeCore::StateTreeStateHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_SET_SOURCESTATE_OFFSET))(this, value);
		}

		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> get_SourceStateTree()
		{
			return ((::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_GET_SOURCESTATETREE_OFFSET))(this);
		}

		::System::Void set_SourceStateTree(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> value)
		{
			return ((::System::Void(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_SET_SOURCESTATETREE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeStateHandle get_SourceRootState()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_GET_SOURCEROOTSTATE_OFFSET))(this);
		}

		::System::Void set_SourceRootState(::StateTreeCore::StateTreeStateHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_SET_SOURCEROOTSTATE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeStateHandle get_TargetState()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_GET_TARGETSTATE_OFFSET))(this);
		}

		::System::Void set_TargetState(::StateTreeCore::StateTreeStateHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_SET_TARGETSTATE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeTransitionPriority get_Priority()
		{
			return ((::StateTreeCore::StateTreeTransitionPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::StateTreeCore::StateTreeTransitionPriority value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionPriority))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_SET_PRIORITY_OFFSET))(this, value);
		}
	};
}
