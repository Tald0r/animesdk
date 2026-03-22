#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/MoveToTaskVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/FReadonlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x7DF2F30)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x7DF4450)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x7DF2C40)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_REALEXITACTION_OFFSET UNITYSDK_OFFSET(0x7DF3840)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_SETSTAIRBLEND_OFFSET UNITYSDK_OFFSET(0x7DF3AB0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x7DF3B40)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x7DF46A0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x7DF46B0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x7DF46C0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x7DF4740)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY___BASE_TICK_OFFSET UNITYSDK_OFFSET(0x7DF4750)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorMoveToTaskVirtualProxy_TypeDefinitionIndex = 59475;

	class AttractorMoveToTaskVirtualProxy : public ::NPCCrowd::Ability::MoveToTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::System::Void ExitState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void RealExitAction(::NPCCrowd::Ability::FNPCAttractorControlFragment& attractorControlData, ::NPCCrowd::Ability::FNPCBaseDataFragment baseData, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAttractorControlFragment&, ::NPCCrowd::Ability::FNPCBaseDataFragment, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::NPCCrowd::Ability::FNPCNavmeshFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_REALEXITACTION_OFFSET))(this, attractorControlData, baseData, pathFollow, blackboard, navmesh);
		}

		::System::Void SetStairBlend(::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCNavmeshFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY_SETSTAIRBLEND_OFFSET))(this, navmesh);
		}

		::StateTreeCore::StateTreeRunStatus __base_EnterState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_ExitState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::StateTreeCore::StateTreeRunStatus __base_Tick(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::System::Single P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASKVIRTUALPROXY___BASE_TICK_OFFSET))(this, P0, P1, P2);
		}
	};
}
