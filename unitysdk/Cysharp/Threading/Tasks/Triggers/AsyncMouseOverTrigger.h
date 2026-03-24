#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseOverHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1B70E2D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1B70E220)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B70E480)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_OFFSET UNITYSDK_OFFSET(0x1B70E330)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1B70E200)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B70E590)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseOverTrigger_TypeDefinitionIndex = 28209;

	class AsyncMouseOverTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnMouseOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler* GetOnMouseOverAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler* GetOnMouseOverAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseOverAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseOverAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
