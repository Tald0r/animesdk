#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_COMPLETE_1_OFFSET UNITYSDK_OFFSET(0x19011F10)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x19011F00)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x19012020)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x19012030)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x19012120)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19012130)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x190121E0)

namespace System::Net
{
	inline static constexpr unsigned int HttpStreamAsyncResult_TypeDefinitionIndex = 3534;

	class HttpStreamAsyncResult : public ::System::Object
	{
	public:
		::System::AsyncCallback* Callback; // 0x10
		::Il2CppArray<::System::Byte>* Buffer; // 0x18
		::System::Object* State; // 0x20
		::System::Exception* Error; // 0x28
		::System::Object* locker; // 0x30
		::System::Threading::ManualResetEvent* handle; // 0x38
		::System::Int32 Count; // 0x40
		::System::Int32 Offset; // 0x44
		::System::Int32 SynchRead; // 0x48
		::System::Boolean completed; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT__CTOR_OFFSET))(this);
		}

		::System::Void Complete(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_COMPLETE_OFFSET))(this, e);
		}

		::System::Void Complete_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_COMPLETE_1_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}
	};
}
