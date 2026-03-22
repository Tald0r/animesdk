#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeConditionVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY_COMPILE_OFFSET UNITYSDK_OFFSET(0x648AE30)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x648AFD0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x648AEB0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x648B0A0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x648B1B0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY___BASE_COMPILE_OFFSET UNITYSDK_OFFSET(0x648B1C0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x648B1D0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x648B230)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY___BASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x648B240)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowBlockedConditionVirtualProxy_TypeDefinitionIndex = 60937;

	class PathFollowBlockedConditionVirtualProxy : public ::StateTreeCore::StateTreeConditionVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::UnrealTypes::DataValidationResult Compile(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY_COMPILE_OFFSET))(this, self, instanceDataView);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean TestCondition(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY_TESTCONDITION_OFFSET))(this, self, context);
		}

		::UnrealTypes::DataValidationResult __base_Compile(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeDataView P1)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY___BASE_COMPILE_OFFSET))(this, P0, P1);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_TestCondition(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONVIRTUALPROXY___BASE_TESTCONDITION_OFFSET))(this, P0, P1);
		}
	};
}
