#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionSourceType.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREETRANSITIONSOURCE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define STATETREECORE_STATETREETRANSITIONSOURCE_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define STATETREECORE_STATETREETRANSITIONSOURCE_GET_TARGETSTATE_OFFSET UNITYSDK_OFFSET(0x838780)
#define STATETREECORE_STATETREETRANSITIONSOURCE_GET_TRANSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x5CFEF0)
#define STATETREECORE_STATETREETRANSITIONSOURCE_RESET_OFFSET UNITYSDK_OFFSET(0x8ED400)
#define STATETREECORE_STATETREETRANSITIONSOURCE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x2C6250)
#define STATETREECORE_STATETREETRANSITIONSOURCE_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x2D3600)
#define STATETREECORE_STATETREETRANSITIONSOURCE_SET_TARGETSTATE_OFFSET UNITYSDK_OFFSET(0x838790)
#define STATETREECORE_STATETREETRANSITIONSOURCE_SET_TRANSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x86F5F0)
#define STATETREECORE_STATETREETRANSITIONSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED3E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionSource_TypeDefinitionIndex = 26940;

	struct alignas(4) StateTreeTransitionSource
	{
		::StateTreeCore::StateTreeTransitionSourceType _SourceType_k__BackingField; // 0x10
		::System::UInt16 _TransitionIndex_k__BackingField; // 0x14
		::StateTreeCore::StateTreeStateHandle _TargetState_k__BackingField; // 0x16
		::StateTreeCore::StateTreeTransitionPriority _Priority_k__BackingField; // 0x18

		::System::Void _ctor(::StateTreeCore::StateTreeTransitionSourceType sourceType, ::System::UInt16 transitionIndex, ::StateTreeCore::StateTreeStateHandle targetState, ::StateTreeCore::StateTreeTransitionPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionSourceType, ::System::UInt16, ::StateTreeCore::StateTreeStateHandle, ::StateTreeCore::StateTreeTransitionPriority))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE__CTOR_OFFSET))(this, sourceType, transitionIndex, targetState, priority);
		}

		::StateTreeCore::StateTreeTransitionSourceType get_SourceType()
		{
			return ((::StateTreeCore::StateTreeTransitionSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::StateTreeCore::StateTreeTransitionSourceType value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionSourceType))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_SET_SOURCETYPE_OFFSET))(this, value);
		}

		::System::UInt16 get_TransitionIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_GET_TRANSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_TransitionIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_SET_TRANSITIONINDEX_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeStateHandle get_TargetState()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_GET_TARGETSTATE_OFFSET))(this);
		}

		::System::Void set_TargetState(::StateTreeCore::StateTreeStateHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_SET_TARGETSTATE_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeTransitionPriority get_Priority()
		{
			return ((::StateTreeCore::StateTreeTransitionPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::StateTreeCore::StateTreeTransitionPriority value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionPriority))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONSOURCE_RESET_OFFSET))(this);
		}
	};
}
