#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/FReadonlyStructView.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x7225D60)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x7225C90)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x7225A40)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY_TICKLOGIC_OFFSET UNITYSDK_OFFSET(0x7225DF0)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x72261A0)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x72261B0)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x72261C0)
#define NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x7226220)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotFindTaskVirtualProxy_TypeDefinitionIndex = 63132;

	class WaitingSlotFindTaskVirtualProxy : public ::StateTreeCore::StateTreeTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus TickLogic(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY_TICKLOGIC_OFFSET))(this, self, context);
		}

		::StateTreeCore::StateTreeRunStatus __base_EnterState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET))(this, P0, P1, P2);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTFINDTASKVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}
	};
}
