#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDrawGizmosSelectedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1B6FD780)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1B6FD6D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B6FD930)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x1B6FD7E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6FDA40)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDrawGizmosSelectedTrigger_TypeDefinitionIndex = 28191;

	class AsyncDrawGizmosSelectedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler* GetOnDrawGizmosSelectedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler* GetOnDrawGizmosSelectedAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnDrawGizmosSelectedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnDrawGizmosSelectedAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
