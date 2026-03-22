#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeReadonlyRawPtr_1.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STATETREE_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_TIMELEFT_OFFSET UNITYSDK_OFFSET(0x2D8630)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_TRANSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x2FBED0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x8ED1C0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_SET_STATETREE_OFFSET UNITYSDK_OFFSET(0x2C3980)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_SET_TIMELEFT_OFFSET UNITYSDK_OFFSET(0x33FDA0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_SET_TRANSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x2FBEE0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionDelayedState_TypeDefinitionIndex = 26932;

	struct alignas(8) StateTreeTransitionDelayedState
	{
		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> _StateTree_k__BackingField; // 0x10
		::System::UInt16 _TransitionIndex_k__BackingField; // 0x18
		::System::Single _TimeLeft_k__BackingField; // 0x1C

		::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> get_StateTree()
		{
			return ((::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STATETREE_OFFSET))(this);
		}

		::System::Void set_StateTree(::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree> value)
		{
			return ((::System::Void(*)(::PVOID, ::NativeTypes::NativeReadonlyRawPtr_1<::StateTreeCore::StateTree>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_SET_STATETREE_OFFSET))(this, value);
		}

		::System::UInt16 get_TransitionIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_TRANSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_TransitionIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_SET_TRANSITIONINDEX_OFFSET))(this, value);
		}

		::System::Single get_TimeLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_TIMELEFT_OFFSET))(this);
		}

		::System::Void set_TimeLeft(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_SET_TIMELEFT_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_RESET_OFFSET))(this);
		}
	};
}
