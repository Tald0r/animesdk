#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/FReadonlyStructView.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x7EF4190)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x7EF4770)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x7EF40C0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x7EF3DD0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x7EF4860)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x7EF48E0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_TRYNAVMESHTOPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x7EF44C0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x7EF49E0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x7EF49F0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x7EF4A00)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x7EF4A10)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x7EF4A70)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x7EF4A80)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_TICK_OFFSET UNITYSDK_OFFSET(0x7EF4A90)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowTaskVirtualProxy_TypeDefinitionIndex = 42241;

	class NavmeshToPathFollowTaskVirtualProxy : public ::StateTreeCore::StateTreeTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void StateCompleted(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_STATECOMPLETED_OFFSET))(this, self, context, completionStatus, completedActiveStates);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::System::Boolean TryNavmeshToPathFollow(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY_TRYNAVMESHTOPATHFOLLOW_OFFSET))(this, self, context);
		}

		::StateTreeCore::StateTreeRunStatus __base_EnterState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_ENTERSTATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_ExitState(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeTransitionResult& P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_EXITSTATE_OFFSET))(this, P0, P1, P2);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::System::Void __base_StateCompleted(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::StateTreeCore::StateTreeRunStatus P2, ::StateTreeCore::StateTreeActiveStates& P3)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_STATECOMPLETED_OFFSET))(this, P0, P1, P2, P3);
		}

		::StateTreeCore::StateTreeRunStatus __base_Tick(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::System::Single P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKVIRTUALPROXY___BASE_TICK_OFFSET))(this, P0, P1, P2);
		}
	};
}
