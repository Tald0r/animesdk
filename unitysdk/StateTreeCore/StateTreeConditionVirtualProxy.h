#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeNodeVirtualProxy.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define STATETREECORE_STATETREECONDITIONVIRTUALPROXY_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x19BD8550)
#define STATETREECORE_STATETREECONDITIONVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD8560)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionVirtualProxy_TypeDefinitionIndex = 26919;

	class StateTreeConditionVirtualProxy : public ::StateTreeCore::StateTreeNodeVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean TestCondition(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONVIRTUALPROXY_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}
