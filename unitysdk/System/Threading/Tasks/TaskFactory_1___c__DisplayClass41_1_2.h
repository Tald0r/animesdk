#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System::Threading { class AtomicBoolean; }
namespace System::Threading::Tasks { template <typename T1, typename T2, typename T3> class TaskFactory_1___c__DisplayClass41_0_2; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_1___c__DisplayClass41_1_2_TypeDefinitionIndex = 883;

	template <typename TResult, typename TArg1, typename TArg2>
	class TaskFactory_1___c__DisplayClass41_1_2 : public ::System::Object
	{
	public:
		::System::Threading::AtomicBoolean* invoked; // 0x0
		::System::Threading::Tasks::TaskFactory_1___c__DisplayClass41_0_2<TResult, TArg1, TArg2>* CS___8__locals1; // 0x0
	};
}
