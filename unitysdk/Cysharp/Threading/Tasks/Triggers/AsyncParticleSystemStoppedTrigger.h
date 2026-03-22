#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleSystemStoppedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1B0439F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1B043940)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B043BB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET UNITYSDK_OFFSET(0x1B043A50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPED_OFFSET UNITYSDK_OFFSET(0x1B043920)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B043CC0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleSystemStoppedTrigger_TypeDefinitionIndex = 27277;

	class AsyncParticleSystemStoppedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnParticleSystemStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler* GetOnParticleSystemStoppedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler* GetOnParticleSystemStoppedAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnParticleSystemStoppedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnParticleSystemStoppedAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
