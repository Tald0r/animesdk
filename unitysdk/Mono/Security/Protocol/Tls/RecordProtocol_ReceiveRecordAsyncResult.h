#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::IO { class Stream; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AA9CF90)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1AA9CF80)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1AA9D120)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1AA9D210)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET UNITYSDK_OFFSET(0x1AA9CFA0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_INITIALBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA9CF70)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AA9D070)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_RECORD_OFFSET UNITYSDK_OFFSET(0x1AA9CF50)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_RESULTINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA9CF60)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1AA9D350)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_2_OFFSET UNITYSDK_OFFSET(0x1AA9D360)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_3_OFFSET UNITYSDK_OFFSET(0x1AA9D370)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AA9D220)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA9CF00)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int RecordProtocol_ReceiveRecordAsyncResult_TypeDefinitionIndex = 2366;

	class RecordProtocol_ReceiveRecordAsyncResult : public ::System::Object
	{
	public:
		::System::Threading::ManualResetEvent* handle; // 0x10
		::System::AsyncCallback* _userCallback; // 0x18
		::System::IO::Stream* _record; // 0x20
		::System::Object* locker; // 0x28
		::Il2CppArray<::System::Byte>* _resultingBuffer; // 0x30
		::Il2CppArray<::System::Byte>* _initialBuffer; // 0x38
		::System::Exception* _asyncException; // 0x40
		::System::Object* _userState; // 0x48
		::System::Boolean completed; // 0x50

		::System::Void _ctor(::System::AsyncCallback* userCallback, ::System::Object* userState, ::Il2CppArray<::System::Byte>* initialBuffer, ::System::IO::Stream* record)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT__CTOR_OFFSET))(this, userCallback, userState, initialBuffer, record);
		}

		::System::IO::Stream* get_Record()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_RECORD_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_ResultingBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_RESULTINGBUFFER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_InitialBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_INITIALBUFFER_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Exception* get_AsyncException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET))(this);
		}

		::System::Boolean get_CompletedWithError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void SetComplete(::System::Exception* ex, ::Il2CppArray<::System::Byte>* resultingBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_OFFSET))(this, ex, resultingBuffer);
		}

		::System::Void SetComplete_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_1_OFFSET))(this, ex);
		}

		::System::Void SetComplete_2(::Il2CppArray<::System::Byte>* resultingBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_2_OFFSET))(this, resultingBuffer);
		}

		::System::Void SetComplete_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_3_OFFSET))(this);
		}
	};
}
