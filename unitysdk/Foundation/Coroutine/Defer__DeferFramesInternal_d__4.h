#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AA2CC80)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AA2CD10)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AA2CD70)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AA2CD20)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA2CC70)
#define FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA2CC60)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Defer__DeferFramesInternal_d__4_TypeDefinitionIndex = 7982;

	class Defer__DeferFramesInternal_d__4 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Single __2__current; // 0x18
		::System::Int32 _i_5__2; // 0x1C
		::System::Int32 frameCount; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERFRAMESINTERNAL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
