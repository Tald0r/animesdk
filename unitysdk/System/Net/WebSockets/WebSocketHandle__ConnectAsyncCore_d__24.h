#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net::Security { class SslStream; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::WebSockets { class ClientWebSocketOptions; }
namespace System::Net::WebSockets { class WebSocketHandle; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTASYNCCORE_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x896650)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTASYNCCORE_D__24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4C1EB0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle__ConnectAsyncCore_d__24_TypeDefinitionIndex = 3894;

	struct alignas(8) WebSocketHandle__ConnectAsyncCore_d__24
	{
		::System::Net::WebSockets::ClientWebSocketOptions* options; // 0x10
		::System::Threading::CancellationTokenRegistration _registration_5__4; // 0x18
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::String*> __u__3; // 0x30
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x40
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> _secKeyAndSecWebSocketAccept_5__3; // 0x58
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x68
		::System::Uri* uri; // 0x78
		::System::Net::WebSockets::WebSocketHandle* __4__this; // 0x80
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Sockets::Socket*> __u__1; // 0x88
		::System::Net::Security::SslStream* _sslStream_5__1; // 0x98
		::System::Threading::CancellationToken cancellationToken; // 0xA0
		::System::IO::Stream* _stream_5__2; // 0xA8
		::System::Int32 __1__state; // 0xB0

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTASYNCCORE_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE__CONNECTASYNCCORE_D__24_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
