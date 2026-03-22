#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19A52010)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19A522F0)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19A52350)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19A52300)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A52000)
#define FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x19A51FF0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int DeferExtensionMethods__CancelWith_d__1_TypeDefinitionIndex = 8275;

	class DeferExtensionMethods__CancelWith_d__1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine; // 0x10
		::UnityEngine::GameObject* gameObject1; // 0x18
		::UnityEngine::GameObject* gameObject2; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single __2__current; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFEREXTENSIONMETHODS__CANCELWITH_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
