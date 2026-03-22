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

#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x6A01E10)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x6A021C0)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x6A01D40)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x6A01A50)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x6A022B0)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x6A02820)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x6A02830)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x6A02840)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x6A02850)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x6A028B0)
#define NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_TICK_OFFSET UNITYSDK_OFFSET(0x6A028C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int WaitingSlotMoveToSlotTaskVirtualProxy_TypeDefinitionIndex = 57613;

	class WaitingSlotMoveToSlotTaskVirtualProxy : public ::StateTreeCore::StateTreeTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::StateTreeCore::StateTreeRunStatus __base_EnterState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_ExitState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET))(this, P0, P1, P2);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::StateTreeCore::StateTreeRunStatus __base_Tick(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::System::Single P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_WAITINGSLOTMOVETOSLOTTASKVIRTUALPROXY___BASE_TICK_OFFSET))(this, P0, P1, P2);
		}
	};
}
