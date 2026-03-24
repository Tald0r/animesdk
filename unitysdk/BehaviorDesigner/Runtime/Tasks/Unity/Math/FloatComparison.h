#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Unity/Math/FloatComparison_Operation.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B2617D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B2611C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B261850)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B261890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B261920)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int FloatComparison_TypeDefinitionIndex = 31577;

	class FloatComparison : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* float1; // 0x50
		::BehaviorDesigner::Runtime::SharedFloat* float2; // 0x58
		::BehaviorDesigner::Runtime::Tasks::Unity::Math::FloatComparison_Operation operation; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATCOMPARISON___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
