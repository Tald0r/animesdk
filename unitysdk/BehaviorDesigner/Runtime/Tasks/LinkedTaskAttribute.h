#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_LINKEDTASKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65BBD0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int LinkedTaskAttribute_TypeDefinitionIndex = 30288;

	class LinkedTaskAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_LINKEDTASKATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
