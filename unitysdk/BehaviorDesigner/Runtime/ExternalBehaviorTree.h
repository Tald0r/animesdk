#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/ExternalBehavior.h"

#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIORTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEFBE0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int ExternalBehaviorTree_TypeDefinitionIndex = 31161;

	class ExternalBehaviorTree : public ::BehaviorDesigner::Runtime::ExternalBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIORTREE__CTOR_OFFSET))(this);
		}
	};
}
