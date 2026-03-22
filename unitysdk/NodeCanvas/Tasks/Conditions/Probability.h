#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_PROBABILITY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x19763840)
#define NODECANVAS_TASKS_CONDITIONS_PROBABILITY_ONCHECK_OFFSET UNITYSDK_OFFSET(0x19763940)
#define NODECANVAS_TASKS_CONDITIONS_PROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x197639A0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int Probability_TypeDefinitionIndex = 25415;

	class Probability : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* maxValue; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* probability; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_PROBABILITY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_PROBABILITY_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_PROBABILITY_ONCHECK_OFFSET))(this);
		}
	};
}
