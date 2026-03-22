#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/FReadonlyStructView.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x695C060)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x695C540)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x695BF90)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x695C980)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x695CA20)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x695CA30)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x695CA40)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x695CA50)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY___BASE_TICK_OFFSET UNITYSDK_OFFSET(0x695CAB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int UIBubblePerformTaskVirtualProxy_TypeDefinitionIndex = 65219;

	class UIBubblePerformTaskVirtualProxy : public ::StateTreeCore::StateTreeTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::StateTreeCore::StateTreeRunStatus __base_EnterState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_ExitState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET))(this, P0, P1, P2);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus __base_Tick(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::System::Single P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKVIRTUALPROXY___BASE_TICK_OFFSET))(this, P0, P1, P2);
		}
	};
}
