#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SKIPERRORCHECKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B330660)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int SkipErrorCheckAttribute_TypeDefinitionIndex = 31252;

	class SkipErrorCheckAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SKIPERRORCHECKATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
