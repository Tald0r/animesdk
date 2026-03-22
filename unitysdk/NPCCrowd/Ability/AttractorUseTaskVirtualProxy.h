#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/FReadonlyStructView.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x6B3C800)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x6B3CCA0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x6B3C730)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x6B3C440)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_REALEXITACTION_OFFSET UNITYSDK_OFFSET(0x6B3D6B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x6B3D020)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x6B3D9B0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x6B3D9C0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x6B3D9D0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x6B3D9E0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x6B3DA40)
#define NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_TICK_OFFSET UNITYSDK_OFFSET(0x6B3DA50)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorUseTaskVirtualProxy_TypeDefinitionIndex = 40541;

	class AttractorUseTaskVirtualProxy : public ::StateTreeCore::StateTreeTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::System::Void RealExitAction(::NPCCrowd::Ability::FNPCAttractorControlFragment& attractorControlData, ::NPCCrowd::Ability::FNPCBaseDataFragment baseData, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAttractorControlFragment&, ::NPCCrowd::Ability::FNPCBaseDataFragment, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY_REALEXITACTION_OFFSET))(this, attractorControlData, baseData, pathFollow, blackboard);
		}

		::StateTreeCore::StateTreeRunStatus __base_EnterState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_ExitState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET))(this, P0, P1, P2);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::StateTreeCore::StateTreeRunStatus __base_Tick(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::System::Single P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASKVIRTUALPROXY___BASE_TICK_OFFSET))(this, P0, P1, P2);
		}
	};
}
