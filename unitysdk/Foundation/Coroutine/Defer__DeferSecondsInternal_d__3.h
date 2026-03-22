#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A59A7B0)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A59A840)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A59A8A0)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A59A850)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A59A7A0)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A59A790)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Defer__DeferSecondsInternal_d__3_TypeDefinitionIndex = 8121;

	class Defer__DeferSecondsInternal_d__3 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Single seconds; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::Single __2__current; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
