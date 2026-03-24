#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System::Net::Sockets { class Socket_SendFileHandler; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x18BB5C70)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x18BB5D20)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x18BB5DD0)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_DELEGATE_OFFSET UNITYSDK_OFFSET(0x18BB5F30)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18BB5E80)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_ORIGINAL_OFFSET UNITYSDK_OFFSET(0x18BB5F40)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB5C60)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket_SendFileAsyncResult_TypeDefinitionIndex = 3655;

	class Socket_SendFileAsyncResult : public ::System::Object
	{
	public:
		::System::Net::Sockets::Socket_SendFileHandler* d; // 0x10
		::System::IAsyncResult* ares; // 0x18

		::System::Void _ctor(::System::Net::Sockets::Socket_SendFileHandler* d, ::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket_SendFileHandler*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT__CTOR_OFFSET))(this, d, ares);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Net::Sockets::Socket_SendFileHandler* get_Delegate()
		{
			return ((::System::Net::Sockets::Socket_SendFileHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_DELEGATE_OFFSET))(this);
		}

		::System::IAsyncResult* get_Original()
		{
			return ((::System::IAsyncResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILEASYNCRESULT_GET_ORIGINAL_OFFSET))(this);
		}
	};
}
