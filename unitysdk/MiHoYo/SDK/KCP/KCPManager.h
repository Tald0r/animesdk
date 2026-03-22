#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KCP/KCPLogLevel.h"
#include "unitysdk/MiHoYo/SDK/KCPErrorCode.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class IKCPChannel; }
namespace MiHoYo::SDK { class KCPClient_OnTimeoutDelegate; }
namespace MiHoYo::SDK::KCP { class KCPManager_OnLogErrorWithCodeAction; }
namespace MiHoYo::SDK::KCP { class KCPManager_OnLogMessageAction; }
namespace MiHoYo::SDK::KCP { class KCPManager_OnLogVerboseAction; }
namespace System { class String; }

#define MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0x18F399F0)
#define MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x18F39890)
#define MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0x18F39730)
#define MIHOYO_SDK_KCP_KCPMANAGER_CONNECTIMPL_OFFSET UNITYSDK_OFFSET(0x18F3A0F0)
#define MIHOYO_SDK_KCP_KCPMANAGER_CONNECT_OFFSET UNITYSDK_OFFSET(0x18F39C70)
#define MIHOYO_SDK_KCP_KCPMANAGER_DISCONNECTPROC_OFFSET UNITYSDK_OFFSET(0x18F3A220)
#define MIHOYO_SDK_KCP_KCPMANAGER_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x18F3B090)
#define MIHOYO_SDK_KCP_KCPMANAGER_HEATBEATPROC_OFFSET UNITYSDK_OFFSET(0x18F3A8B0)
#define MIHOYO_SDK_KCP_KCPMANAGER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18F39B50)
#define MIHOYO_SDK_KCP_KCPMANAGER_KCPKIBANAREPORT_OFFSET UNITYSDK_OFFSET(0x18F3A760)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONCONNECT_OFFSET UNITYSDK_OFFSET(0x18F3A5E0)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONDISCONNECT_OFFSET UNITYSDK_OFFSET(0x18F3A820)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONERROR_OFFSET UNITYSDK_OFFSET(0x18F3A830)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOG_OFFSET UNITYSDK_OFFSET(0x18F3A6A0)
#define MIHOYO_SDK_KCP_KCPMANAGER_RECEIVEPACKETPROC_OFFSET UNITYSDK_OFFSET(0x18F3AE10)
#define MIHOYO_SDK_KCP_KCPMANAGER_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x18F39E20)
#define MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGERRORWITHCODE_OFFSET UNITYSDK_OFFSET(0x18F39AA0)
#define MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x18F39940)
#define MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGVERBOSE_OFFSET UNITYSDK_OFFSET(0x18F397E0)
#define MIHOYO_SDK_KCP_KCPMANAGER_STARTHEATBEAT_OFFSET UNITYSDK_OFFSET(0x18F3A640)
#define MIHOYO_SDK_KCP_KCPMANAGER_STARTRECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x18F3A440)
#define MIHOYO_SDK_KCP_KCPMANAGER_WAITHEATBEATENDED_OFFSET UNITYSDK_OFFSET(0x18F3A540)
#define MIHOYO_SDK_KCP_KCPMANAGER_WAITRECEIVERENDED_OFFSET UNITYSDK_OFFSET(0x18F3A4A0)
#define MIHOYO_SDK_KCP_KCPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F39C10)
#define MIHOYO_SDK_KCP_KCPMANAGER__DISCONNECT_B__28_0_OFFSET UNITYSDK_OFFSET(0x18F3B110)
#define MIHOYO_SDK_KCP_KCPMANAGER__STARTHEATBEAT_B__25_0_OFFSET UNITYSDK_OFFSET(0x18F3B100)
#define MIHOYO_SDK_KCP_KCPMANAGER__STARTRECEIVEPACKET_B__19_0_OFFSET UNITYSDK_OFFSET(0x18F3B0F0)

namespace MiHoYo::SDK::KCP
{
	inline static constexpr unsigned int KCPManager_TypeDefinitionIndex = 33920;

	class KCPManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::KCP::KCPManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::KCP::KCPManager**)Il2CppClass::FromTypeDefinitionIndex(KCPManager_TypeDefinitionIndex)->GetStaticField(0x23D20);
		}
		static ::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction** StaticGet_OnLogVerbose()
		{
			return (::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction**)Il2CppClass::FromTypeDefinitionIndex(KCPManager_TypeDefinitionIndex)->GetStaticField(0x23D28);
		}
		static ::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction** StaticGet_OnLogErrorWithCode()
		{
			return (::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction**)Il2CppClass::FromTypeDefinitionIndex(KCPManager_TypeDefinitionIndex)->GetStaticField(0x23D30);
		}
		static ::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction** StaticGet_OnLogMessage()
		{
			return (::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction**)Il2CppClass::FromTypeDefinitionIndex(KCPManager_TypeDefinitionIndex)->GetStaticField(0x23D38);
		}
		// static const ::System::Int32 KCP_HEATBEAT_TIME_INTERVAL = 0xBB8; // 0x0
		::System::Object* m_lockHeatbeat; // 0x10
		::System::Object* m_lockReceiver; // 0x18
		::MiHoYo::SDK::SecurityTunnel_AuthInfo m_authInfo; // 0x20
		::System::Object* m_lockDisconnect; // 0x60
		::System::Boolean m_bIsConnected; // 0x68
		::System::Boolean m_bDisconnect; // 0x69
		::System::Int32 m_nRetryCount; // 0x6C
		::System::Int32 m_nReconnectDuration; // 0x70
		::System::Int32 m_nWaitRecvMsgTimeoutSec; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnLogVerbose(::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGVERBOSE_OFFSET))(value);
		}

		static ::System::Void remove_OnLogVerbose(::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogVerboseAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGVERBOSE_OFFSET))(value);
		}

		static ::System::Void add_OnLogMessage(::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGMESSAGE_OFFSET))(value);
		}

		static ::System::Void remove_OnLogMessage(::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogMessageAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGMESSAGE_OFFSET))(value);
		}

		static ::System::Void add_OnLogErrorWithCode(::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ADD_ONLOGERRORWITHCODE_OFFSET))(value);
		}

		static ::System::Void remove_OnLogErrorWithCode(::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCP::KCPManager_OnLogErrorWithCodeAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_REMOVE_ONLOGERRORWITHCODE_OFFSET))(value);
		}

		static ::MiHoYo::SDK::KCP::KCPManager* Instance()
		{
			return ((::MiHoYo::SDK::KCP::KCPManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_INSTANCE_OFFSET))();
		}

		::System::Int32 Connect(::System::String* strHost, ::System::UInt16 nPort, ::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::UInt16, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_CONNECT_OFFSET))(this, strHost, nPort, authInfo);
		}

		::System::Void RegisterEvent(::MiHoYo::SDK::KCPClient_OnTimeoutDelegate* timeout)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPClient_OnTimeoutDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_REGISTEREVENT_OFFSET))(this, timeout);
		}

		::System::Void ConnectImpl(::System::String* strHost, ::System::UInt16 nPort, ::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_CONNECTIMPL_OFFSET))(this, strHost, nPort, authInfo);
		}

		::System::Void WaitReceiverEnded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_WAITRECEIVERENDED_OFFSET))(this);
		}

		::System::Void WaitHeatbeatEnded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_WAITHEATBEATENDED_OFFSET))(this);
		}

		::System::Void StartReceivePacket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_STARTRECEIVEPACKET_OFFSET))(this);
		}

		::System::Void OnConnect(::MiHoYo::SDK::IKCPChannel* channel, ::System::Int32 nCode)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONCONNECT_OFFSET))(this, channel, nCode);
		}

		::System::Void OnLog(::System::Int32 nLogLevel, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOG_OFFSET))(this, nLogLevel, strMsg);
		}

		::System::Void KCPKibanaReport(::System::String* eventStr, ::System::String* msg, ::MiHoYo::SDK::KCP::KCPLogLevel logLevel, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::KCP::KCPLogLevel, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_KCPKIBANAREPORT_OFFSET))(this, eventStr, msg, logLevel, code);
		}

		::System::Void OnDisconnect(::MiHoYo::SDK::IKCPChannel* channel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONDISCONNECT_OFFSET))(this, channel);
		}

		::System::Void OnError(::MiHoYo::SDK::KCPErrorCode code, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONERROR_OFFSET))(this, code, errorMessage);
		}

		::System::Void StartHeatbeat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_STARTHEATBEAT_OFFSET))(this);
		}

		::System::Void HeatbeatProc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_HEATBEATPROC_OFFSET))(this);
		}

		::System::Void ReceivePacketProc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_RECEIVEPACKETPROC_OFFSET))(this);
		}

		::System::Void Disconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_DISCONNECT_OFFSET))(this);
		}

		::System::Void DisconnectProc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_DISCONNECTPROC_OFFSET))(this);
		}

		::System::Void _StartReceivePacket_b__19_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER__STARTRECEIVEPACKET_B__19_0_OFFSET))(this, _);
		}

		::System::Void _StartHeatbeat_b__25_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER__STARTHEATBEAT_B__25_0_OFFSET))(this, _);
		}

		::System::Void _Disconnect_b__28_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER__DISCONNECT_B__28_0_OFFSET))(this, _);
		}
	};
}
