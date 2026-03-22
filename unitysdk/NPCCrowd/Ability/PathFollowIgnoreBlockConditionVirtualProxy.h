#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeConditionVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x77CA5B0)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x77CA490)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x77CA680)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x77CA780)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x77CA790)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x77CA7F0)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY___BASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x77CA800)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowIgnoreBlockConditionVirtualProxy_TypeDefinitionIndex = 38349;

	class PathFollowIgnoreBlockConditionVirtualProxy : public ::StateTreeCore::StateTreeConditionVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean TestCondition(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY_TESTCONDITION_OFFSET))(this, self, context);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_TestCondition(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONVIRTUALPROXY___BASE_TESTCONDITION_OFFSET))(this, P0, P1);
		}
	};
}
