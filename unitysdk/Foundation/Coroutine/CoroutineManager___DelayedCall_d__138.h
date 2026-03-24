#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Coroutine { class CoroutineManager; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B215B40)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B215C80)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B215CE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B215C90)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B215B30)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138__CTOR_OFFSET UNITYSDK_OFFSET(0x1B215B20)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___DelayedCall_d__138_TypeDefinitionIndex = 7843;

	class CoroutineManager___DelayedCall_d__138 : public ::System::Object
	{
	public:
		::Foundation::Coroutine::CoroutineManager* __4__this; // 0x10
		::System::Action* action; // 0x18
		::UnityEngine::GameObject* cancelWith; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single __2__current; // 0x2C
		::System::Single delay; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__138_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
