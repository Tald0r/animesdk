#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Tls::Handshake { class HandshakeMessage; }
namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B006CF0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1B006CE0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1B006E80)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1B006F70)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET UNITYSDK_OFFSET(0x1B006D00)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B006DD0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1B006CD0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_SETCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1B0070A0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B006F80)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B006C90)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int RecordProtocol_SendRecordAsyncResult_TypeDefinitionIndex = 2367;

	class RecordProtocol_SendRecordAsyncResult : public ::System::Object
	{
	public:
		::System::AsyncCallback* _userCallback; // 0x10
		::System::Object* _userState; // 0x18
		::System::Exception* _asyncException; // 0x20
		::System::Threading::ManualResetEvent* handle; // 0x28
		::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* _message; // 0x30
		::System::Object* locker; // 0x38
		::System::Boolean completed; // 0x40

		::System::Void _ctor(::System::AsyncCallback* userCallback, ::System::Object* userState, ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*, ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT__CTOR_OFFSET))(this, userCallback, userState, message);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* get_Message()
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_MESSAGE_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Exception* get_AsyncException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET))(this);
		}

		::System::Boolean get_CompletedWithError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void SetComplete(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_SETCOMPLETE_OFFSET))(this, ex);
		}

		::System::Void SetComplete_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_SENDRECORDASYNCRESULT_SETCOMPLETE_1_OFFSET))(this);
		}
	};
}
