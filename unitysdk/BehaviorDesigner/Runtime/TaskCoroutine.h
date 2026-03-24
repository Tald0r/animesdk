#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE_GET_COROUTINE_OFFSET UNITYSDK_OFFSET(0x1AFF4390)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE_RUNCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1AFF4480)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE_STOP_OFFSET UNITYSDK_OFFSET(0x1AFF43A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF43E0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int TaskCoroutine_TypeDefinitionIndex = 31186;

	class TaskCoroutine : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* mCoroutineEnumerator; // 0x10
		::System::String* mCoroutineName; // 0x18
		::UnityEngine::Coroutine* mCoroutine; // 0x20
		::BehaviorDesigner::Runtime::Behavior* mParent; // 0x28
		::System::Boolean mStop; // 0x30

		::System::Void _ctor(::BehaviorDesigner::Runtime::Behavior* parent, ::System::Collections::IEnumerator* coroutine, ::System::String* coroutineName)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::System::Collections::IEnumerator*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__CTOR_OFFSET))(this, parent, coroutine, coroutineName);
		}

		::UnityEngine::Coroutine* get_Coroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE_GET_COROUTINE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE_STOP_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RunCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE_RUNCOROUTINE_OFFSET))(this);
		}
	};
}
