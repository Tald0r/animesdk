#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net { class SimpleAsyncCallback; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_SIMPLEASYNCRESULT_DOCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x185A4AD0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_DOCALLBACK_PRIVATE_OFFSET UNITYSDK_OFFSET(0x185A49B0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x185A4E60)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x185A4C80)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLYPEEK_OFFSET UNITYSDK_OFFSET(0x185A4EA0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x185A4E70)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x185A4EC0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_GOTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x185A4EB0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x185A4BD0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_RESET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x185A47C0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_RUNWITHLOCK_OFFSET UNITYSDK_OFFSET(0x185A4720)
#define SYSTEM_NET_SIMPLEASYNCRESULT_RUN_OFFSET UNITYSDK_OFFSET(0x185A4410)
#define SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_1_OFFSET UNITYSDK_OFFSET(0x185A44F0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x185A49D0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x185A48C0)
#define SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x185A4610)
#define SYSTEM_NET_SIMPLEASYNCRESULT_WAITUNTILCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x185A4D70)
#define SYSTEM_NET_SIMPLEASYNCRESULT_WAITUNTILCOMPLETE_OFFSET UNITYSDK_OFFSET(0x185A4AF0)
#define SYSTEM_NET_SIMPLEASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185A4390)
#define SYSTEM_NET_SIMPLEASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x185A4360)

namespace System::Net
{
	inline static constexpr unsigned int SimpleAsyncResult_TypeDefinitionIndex = 3558;

	class SimpleAsyncResult : public ::System::Object
	{
	public:
		::System::Net::SimpleAsyncCallback* cb; // 0x10
		::System::Exception* exc; // 0x18
		::System::Object* state; // 0x20
		::System::Threading::ManualResetEvent* handle; // 0x28
		::System::Object* locker; // 0x30
		::System::Nullable_1<::System::Boolean> user_read_synch; // 0x38
		::System::Boolean isCompleted; // 0x3A
		::System::Boolean synch; // 0x3B
		::System::Boolean callbackDone; // 0x3C

		::System::Void _ctor(::System::Net::SimpleAsyncCallback* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT__CTOR_OFFSET))(this, cb);
		}

		::System::Void _ctor_1(::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT__CTOR_1_OFFSET))(this, cb, state);
		}

		static ::System::Void Run(::System::Func_2<::System::Net::SimpleAsyncResult*, ::System::Boolean>* func, ::System::Net::SimpleAsyncCallback* callback)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Net::SimpleAsyncResult*, ::System::Boolean>*, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_RUN_OFFSET))(func, callback);
		}

		static ::System::Void RunWithLock(::System::Object* locker, ::System::Func_2<::System::Net::SimpleAsyncResult*, ::System::Boolean>* func, ::System::Net::SimpleAsyncCallback* callback)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Func_2<::System::Net::SimpleAsyncResult*, ::System::Boolean>*, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_RUNWITHLOCK_OFFSET))(locker, func, callback);
		}

		::System::Void Reset_internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_RESET_INTERNAL_OFFSET))(this);
		}

		::System::Void SetCompleted(::System::Boolean synch, ::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_OFFSET))(this, synch, e);
		}

		::System::Void SetCompleted_1(::System::Boolean synch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_1_OFFSET))(this, synch);
		}

		::System::Void SetCompleted_internal(::System::Boolean synch, ::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_INTERNAL_OFFSET))(this, synch, e);
		}

		::System::Void SetCompleted_internal_1(::System::Boolean synch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_SETCOMPLETED_INTERNAL_1_OFFSET))(this, synch);
		}

		::System::Void DoCallback_private()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_DOCALLBACK_PRIVATE_OFFSET))(this);
		}

		::System::Void DoCallback_internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_DOCALLBACK_INTERNAL_OFFSET))(this);
		}

		::System::Void WaitUntilComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_WAITUNTILCOMPLETE_OFFSET))(this);
		}

		::System::Boolean WaitUntilComplete_1(::System::Int32 timeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_WAITUNTILCOMPLETE_1_OFFSET))(this, timeout, exitContext);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronouslyPeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLYPEEK_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_GotException()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_GOTEXCEPTION_OFFSET))(this);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT_GET_EXCEPTION_OFFSET))(this);
		}
	};
}
