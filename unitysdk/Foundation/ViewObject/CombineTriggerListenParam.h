#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_191;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int CombineTriggerListenParam_TypeDefinitionIndex = 64648;

	struct alignas(8) CombineTriggerListenParam
	{
		::System::String* TriggerName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* ColliderNames; // 0x18
		::Class_0_16E4307DCC419505_191* Filter; // 0x20
		::System::Boolean OnceTrigger; // 0x28
	};
}
