#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/SpinLock.h"

namespace System { class Action; }

#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1B10B720)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUNCORE_OFFSET UNITYSDK_OFFSET(0x1B10B9D0)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUN_OFFSET UNITYSDK_OFFSET(0x1B10B9C0)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B10B6D0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ContinuationQueue_TypeDefinitionIndex = 27359;

	class ContinuationQueue : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Action*>* waitingList; // 0x10
		::Il2CppArray<::System::Action*>* actionList; // 0x18
		::System::Int32 waitingListCount; // 0x20
		::System::Int32 actionListCount; // 0x24
		::System::Boolean dequing; // 0x28
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x2C
		::System::Threading::SpinLock gate; // 0x30

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE__CTOR_OFFSET))(this, timing);
		}

		::System::Void Enqueue(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_ENQUEUE_OFFSET))(this, continuation);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUN_OFFSET))(this);
		}

		::System::Void RunCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUNCORE_OFFSET))(this);
		}
	};
}
