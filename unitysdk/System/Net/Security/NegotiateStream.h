#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Net/Security/AuthenticatedStream.h"
#include "unitysdk/System/Net/Security/ProtectionLevel.h"
#include "unitysdk/System/Security/Principal/TokenImpersonationLevel.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net { class NetworkCredential; }
namespace System::Security::Authentication::ExtendedProtection { class ChannelBinding; }
namespace System::Security::Authentication::ExtendedProtection { class ExtendedProtectionPolicy; }
namespace System::Security::Principal { class IIdentity; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_1_OFFSET UNITYSDK_OFFSET(0x19387620)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_2_OFFSET UNITYSDK_OFFSET(0x19387820)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_3_OFFSET UNITYSDK_OFFSET(0x193879B0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_4_OFFSET UNITYSDK_OFFSET(0x19387A00)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET UNITYSDK_OFFSET(0x193874C0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_1_OFFSET UNITYSDK_OFFSET(0x19386F80)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_2_OFFSET UNITYSDK_OFFSET(0x19386FD0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_3_OFFSET UNITYSDK_OFFSET(0x19387020)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_4_OFFSET UNITYSDK_OFFSET(0x19387070)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x19386F30)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVERASYNC_1_OFFSET UNITYSDK_OFFSET(0x19387BB0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVERASYNC_2_OFFSET UNITYSDK_OFFSET(0x19387C00)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVERASYNC_3_OFFSET UNITYSDK_OFFSET(0x19387C50)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVERASYNC_OFFSET UNITYSDK_OFFSET(0x19387A50)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVER_1_OFFSET UNITYSDK_OFFSET(0x19387110)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVER_2_OFFSET UNITYSDK_OFFSET(0x19387160)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVER_3_OFFSET UNITYSDK_OFFSET(0x193871B0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x193870C0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_1_OFFSET UNITYSDK_OFFSET(0x19386C10)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_2_OFFSET UNITYSDK_OFFSET(0x19386C60)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_3_OFFSET UNITYSDK_OFFSET(0x19386CB0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_4_OFFSET UNITYSDK_OFFSET(0x19386D00)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x19386BC0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASSERVER_1_OFFSET UNITYSDK_OFFSET(0x19386DF0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASSERVER_2_OFFSET UNITYSDK_OFFSET(0x19386E40)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASSERVER_3_OFFSET UNITYSDK_OFFSET(0x19386E90)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x19386DA0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x19386D50)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x19386EE0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19387200)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_ENDAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x19387210)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_ENDAUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x193872B0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x19387260)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x19387300)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x19387350)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x193867E0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x19386810)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19386840)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x19386890)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_IMPERSONATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x193868C0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x19386910)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISENCRYPTED_OFFSET UNITYSDK_OFFSET(0x19386960)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISMUTUALLYAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x193869B0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x19386A00)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISSIGNED_OFFSET UNITYSDK_OFFSET(0x19386A50)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19386AA0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x19386AD0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19386B30)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_REMOTEIDENTITY_OFFSET UNITYSDK_OFFSET(0x19386B50)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x19386BA0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x19387380)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x193873D0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x19387420)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x19386B00)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19386B40)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x19386BB0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x19387470)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193867D0)
#define SYSTEM_NET_SECURITY_NEGOTIATESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x193867C0)

namespace System::Net::Security
{
	inline static constexpr unsigned int NegotiateStream_TypeDefinitionIndex = 3697;

	class NegotiateStream : public ::System::Net::Security::AuthenticatedStream
	{
	public:
		::System::Int32 readTimeout; // 0x38
		::System::Int32 writeTimeout; // 0x3C

		::System::Void _ctor(::System::IO::Stream* innerStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM__CTOR_OFFSET))(this, innerStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM__CTOR_1_OFFSET))(this, innerStream, leaveInnerStreamOpen);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_CANTIMEOUT_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Security::Principal::TokenImpersonationLevel get_ImpersonationLevel()
		{
			return ((::System::Security::Principal::TokenImpersonationLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_IMPERSONATIONLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean get_IsEncrypted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISENCRYPTED_OFFSET))(this);
		}

		::System::Boolean get_IsMutuallyAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISMUTUALLYAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean get_IsServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISSERVER_OFFSET))(this);
		}

		::System::Boolean get_IsSigned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_ISSIGNED_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Security::Principal::IIdentity* get_RemoteIdentity()
		{
			return ((::System::Security::Principal::IIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_REMOTEIDENTITY_OFFSET))(this);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient(::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET))(this, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient_1(::System::Net::NetworkCredential* credential, ::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding, ::System::String* targetName, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_1_OFFSET))(this, credential, binding, targetName, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient_2(::System::Net::NetworkCredential* credential, ::System::String* targetName, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_2_OFFSET))(this, credential, targetName, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient_3(::System::Net::NetworkCredential* credential, ::System::String* targetName, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel allowedImpersonationLevel, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::String*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_3_OFFSET))(this, credential, targetName, requiredProtectionLevel, allowedImpersonationLevel, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient_4(::System::Net::NetworkCredential* credential, ::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding, ::System::String* targetName, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel allowedImpersonationLevel, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*, ::System::String*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASCLIENT_4_OFFSET))(this, credential, binding, targetName, requiredProtectionLevel, allowedImpersonationLevel, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsServer(::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASSERVER_OFFSET))(this, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsServer_1(::System::Net::NetworkCredential* credential, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* policy, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel requiredImpersonationLevel, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASSERVER_1_OFFSET))(this, credential, policy, requiredProtectionLevel, requiredImpersonationLevel, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsServer_2(::System::Net::NetworkCredential* credential, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel requiredImpersonationLevel, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASSERVER_2_OFFSET))(this, credential, requiredProtectionLevel, requiredImpersonationLevel, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsServer_3(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* policy, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINAUTHENTICATEASSERVER_3_OFFSET))(this, policy, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, asyncCallback, asyncState);
		}

		::System::Void AuthenticateAsClient()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_OFFSET))(this);
		}

		::System::Void AuthenticateAsClient_1(::System::Net::NetworkCredential* credential, ::System::String* targetName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_1_OFFSET))(this, credential, targetName);
		}

		::System::Void AuthenticateAsClient_2(::System::Net::NetworkCredential* credential, ::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding, ::System::String* targetName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_2_OFFSET))(this, credential, binding, targetName);
		}

		::System::Void AuthenticateAsClient_3(::System::Net::NetworkCredential* credential, ::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding, ::System::String* targetName, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel allowedImpersonationLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*, ::System::String*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_3_OFFSET))(this, credential, binding, targetName, requiredProtectionLevel, allowedImpersonationLevel);
		}

		::System::Void AuthenticateAsClient_4(::System::Net::NetworkCredential* credential, ::System::String* targetName, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel allowedImpersonationLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::String*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENT_4_OFFSET))(this, credential, targetName, requiredProtectionLevel, allowedImpersonationLevel);
		}

		::System::Void AuthenticateAsServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVER_OFFSET))(this);
		}

		::System::Void AuthenticateAsServer_1(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* policy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVER_1_OFFSET))(this, policy);
		}

		::System::Void AuthenticateAsServer_2(::System::Net::NetworkCredential* credential, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* policy, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel requiredImpersonationLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVER_2_OFFSET))(this, credential, policy, requiredProtectionLevel, requiredImpersonationLevel);
		}

		::System::Void AuthenticateAsServer_3(::System::Net::NetworkCredential* credential, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel requiredImpersonationLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVER_3_OFFSET))(this, credential, requiredProtectionLevel, requiredImpersonationLevel);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void EndAuthenticateAsClient(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_ENDAUTHENTICATEASCLIENT_OFFSET))(this, asyncResult);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Void EndAuthenticateAsServer(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_ENDAUTHENTICATEASSERVER_OFFSET))(this, asyncResult);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync_1(::System::Net::NetworkCredential* credential, ::System::String* targetName)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_1_OFFSET))(this, credential, targetName);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync_2(::System::Net::NetworkCredential* credential, ::System::String* targetName, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel allowedImpersonationLevel)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::String*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_2_OFFSET))(this, credential, targetName, requiredProtectionLevel, allowedImpersonationLevel);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync_3(::System::Net::NetworkCredential* credential, ::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding, ::System::String* targetName)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_3_OFFSET))(this, credential, binding, targetName);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync_4(::System::Net::NetworkCredential* credential, ::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding, ::System::String* targetName, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel allowedImpersonationLevel)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*, ::System::String*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASCLIENTASYNC_4_OFFSET))(this, credential, binding, targetName, requiredProtectionLevel, allowedImpersonationLevel);
		}

		::System::Threading::Tasks::Task* AuthenticateAsServerAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVERASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* AuthenticateAsServerAsync_1(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* policy)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVERASYNC_1_OFFSET))(this, policy);
		}

		::System::Threading::Tasks::Task* AuthenticateAsServerAsync_2(::System::Net::NetworkCredential* credential, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel requiredImpersonationLevel)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVERASYNC_2_OFFSET))(this, credential, requiredProtectionLevel, requiredImpersonationLevel);
		}

		::System::Threading::Tasks::Task* AuthenticateAsServerAsync_3(::System::Net::NetworkCredential* credential, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* policy, ::System::Net::Security::ProtectionLevel requiredProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel requiredImpersonationLevel)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::NetworkCredential*, ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*, ::System::Net::Security::ProtectionLevel, ::System::Security::Principal::TokenImpersonationLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_NEGOTIATESTREAM_AUTHENTICATEASSERVERASYNC_3_OFFSET))(this, credential, policy, requiredProtectionLevel, requiredImpersonationLevel);
		}
	};
}
