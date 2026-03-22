#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"

#define NPCCROWD_AI_FALSECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x5DF68C0)
#define NPCCROWD_AI_FALSECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x5DF68B0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FalseCondition_TypeDefinitionIndex = 71585;

	class FalseCondition : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FALSECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FALSECONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
