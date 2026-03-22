#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/TcpConnectionInformation.h"
#include "unitysdk/System/Net/NetworkInformation/TcpState.h"

namespace System::Net { class IPEndPoint; }

#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMTCPCONNECTIONINFORMATION_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x18FF5020)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMTCPCONNECTIONINFORMATION_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x18FF5030)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMTCPCONNECTIONINFORMATION_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18FF5010)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMTCPCONNECTIONINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF5000)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int SystemTcpConnectionInformation_TypeDefinitionIndex = 3744;

	class SystemTcpConnectionInformation : public ::System::Net::NetworkInformation::TcpConnectionInformation
	{
	public:
		::System::Net::IPEndPoint* remoteEndPoint; // 0x10
		::System::Net::IPEndPoint* localEndPoint; // 0x18
		::System::Net::NetworkInformation::TcpState state; // 0x20

		::System::Void _ctor(::System::Net::IPEndPoint* local, ::System::Net::IPEndPoint* remote, ::System::Net::NetworkInformation::TcpState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::System::Net::NetworkInformation::TcpState))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMTCPCONNECTIONINFORMATION__CTOR_OFFSET))(this, local, remote, state);
		}

		::System::Net::NetworkInformation::TcpState get_State()
		{
			return ((::System::Net::NetworkInformation::TcpState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMTCPCONNECTIONINFORMATION_GET_STATE_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMTCPCONNECTIONINFORMATION_GET_LOCALENDPOINT_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMTCPCONNECTIONINFORMATION_GET_REMOTEENDPOINT_OFFSET))(this);
		}
	};
}
