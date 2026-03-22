#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FReadonlyStructView.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xA105D20)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xA106860)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xA105C50)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_GETPREDICTOFFSETS_OFFSET UNITYSDK_OFFSET(0xA106B30)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0xA105830)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xA1068E0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_TICKLOGIC_OFFSET UNITYSDK_OFFSET(0xA105DB0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA106A90)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xA106DE0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xA106DF0)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xA106E00)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xA106E10)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0xA106E70)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xA106E80)
#define NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_TICK_OFFSET UNITYSDK_OFFSET(0xA106E90)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FollowMoveTaskVirtualProxy_TypeDefinitionIndex = 69257;

	class FollowMoveTaskVirtualProxy : public ::StateTreeCore::StateTreeTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void StateCompleted(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_STATECOMPLETED_OFFSET))(this, self, context, completionStatus, completedActiveStates);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::StateTreeCore::StateTreeRunStatus TickLogic(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_TICKLOGIC_OFFSET))(this, self, context);
		}

		static ::UnityEngine::Vector3 GetPredictOffsets(::System::Single param)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY_GETPREDICTOFFSETS_OFFSET))(param);
		}

		::StateTreeCore::StateTreeRunStatus __base_EnterState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_ExitState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET))(this, P0, P1, P2);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::System::Void __base_StateCompleted(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeRunStatus P2, ::StateTreeCore::StateTreeActiveStates& P3)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_STATECOMPLETED_OFFSET))(this, P0, P1, P2, P3);
		}

		::StateTreeCore::StateTreeRunStatus __base_Tick(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::System::Single P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FOLLOWMOVETASKVIRTUALPROXY___BASE_TICK_OFFSET))(this, P0, P1, P2);
		}
	};
}
