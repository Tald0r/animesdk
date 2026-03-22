#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeNodeVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/FReadonlyStructView.h"

#define STATETREECORE_STATETREETASKVIRTUALPROXY_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x19BEA160)
#define STATETREECORE_STATETREETASKVIRTUALPROXY_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x19BEA170)
#define STATETREECORE_STATETREETASKVIRTUALPROXY_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x19BEA180)
#define STATETREECORE_STATETREETASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x19BEA190)
#define STATETREECORE_STATETREETASKVIRTUALPROXY_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x19BEA1A0)
#define STATETREECORE_STATETREETASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEA1B0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTaskVirtualProxy_TypeDefinitionIndex = 26973;

	class StateTreeTaskVirtualProxy : public ::StateTreeCore::StateTreeNodeVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKVIRTUALPROXY_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKVIRTUALPROXY_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void StateCompleted(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKVIRTUALPROXY_STATECOMPLETED_OFFSET))(this, self, context, completionStatus, completedActiveStates);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::System::Void TriggerTransitions(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKVIRTUALPROXY_TRIGGERTRANSITIONS_OFFSET))(this, self, context);
		}
	};
}
