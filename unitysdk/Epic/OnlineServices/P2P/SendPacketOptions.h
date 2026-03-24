#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/PacketReliability.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_ALLOWDELAYEDDELIVERY_OFFSET UNITYSDK_OFFSET(0x19273460)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x19273420)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_DATA_OFFSET UNITYSDK_OFFSET(0x19273440)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x192733C0)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_RELIABILITY_OFFSET UNITYSDK_OFFSET(0x19273480)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x192733E0)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x19273400)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_ALLOWDELAYEDDELIVERY_OFFSET UNITYSDK_OFFSET(0x19273470)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x19273430)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_DATA_OFFSET UNITYSDK_OFFSET(0x19273450)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x192733D0)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_RELIABILITY_OFFSET UNITYSDK_OFFSET(0x19273490)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x192733F0)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x19273410)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x192734A0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SendPacketOptions_TypeDefinitionIndex = 33434;

	class SendPacketOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x10
		::Il2CppArray<::System::Byte>* _Data_k__BackingField; // 0x18
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28
		::System::Byte _Channel_k__BackingField; // 0x30
		::System::Boolean _AllowDelayedDelivery_k__BackingField; // 0x31
		::Epic::OnlineServices::P2P::PacketReliability _Reliability_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_REMOTEUSERID_OFFSET))(this);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_REMOTEUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_SOCKETID_OFFSET))(this, value);
		}

		::System::Byte get_Channel()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_CHANNEL_OFFSET))(this);
		}

		::System::Void set_Channel(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_CHANNEL_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_DATA_OFFSET))(this, value);
		}

		::System::Boolean get_AllowDelayedDelivery()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_ALLOWDELAYEDDELIVERY_OFFSET))(this);
		}

		::System::Void set_AllowDelayedDelivery(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_ALLOWDELAYEDDELIVERY_OFFSET))(this, value);
		}

		::Epic::OnlineServices::P2P::PacketReliability get_Reliability()
		{
			return ((::Epic::OnlineServices::P2P::PacketReliability(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_GET_RELIABILITY_OFFSET))(this);
		}

		::System::Void set_Reliability(::Epic::OnlineServices::P2P::PacketReliability value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::PacketReliability))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONS_SET_RELIABILITY_OFFSET))(this, value);
		}
	};
}
