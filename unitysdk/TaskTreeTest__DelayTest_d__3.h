#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define TASKTREETEST__DELAYTEST_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1815EA30)
#define TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1815EBA0)
#define TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1815EC00)
#define TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1815EBB0)
#define TASKTREETEST__DELAYTEST_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1815EA20)
#define TASKTREETEST__DELAYTEST_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1815EA10)

inline static constexpr unsigned int TaskTreeTest__DelayTest_d__3_TypeDefinitionIndex = 78731;

class TaskTreeTest__DelayTest_d__3 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>* completionSource; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__DELAYTEST_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
