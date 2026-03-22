#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ValueTask_1_TypeDefinitionIndex = 870;

	template <typename TResult>
	struct ValueTask_1
	{
		::System::Threading::Tasks::Task_1<TResult>* _task; // 0x0
		TResult _result; // 0x0
	};
}
