#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::IO { class Stream; }
namespace System::Net { class CookieCollection; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class HttpListenerRequest_GCCDelegate; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class TransportContext; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Text { class Encoding; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTPLISTENERREQUEST_ADDHEADER_OFFSET UNITYSDK_OFFSET(0x18E41160)
#define SYSTEM_NET_HTTPLISTENERREQUEST_BEGINGETCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18E42900)
#define SYSTEM_NET_HTTPLISTENERREQUEST_CREATEQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x18E3FF30)
#define SYSTEM_NET_HTTPLISTENERREQUEST_ENDGETCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18E42990)
#define SYSTEM_NET_HTTPLISTENERREQUEST_FINISHINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x18E40460)
#define SYSTEM_NET_HTTPLISTENERREQUEST_FLUSHINPUT_OFFSET UNITYSDK_OFFSET(0x18E41D90)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GETCLIENTCERTIFICATEASYNC_OFFSET UNITYSDK_OFFSET(0x18E42AC0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GETCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18E42A30)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_ACCEPTTYPES_OFFSET UNITYSDK_OFFSET(0x18E42210)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_CLIENTCERTIFICATEERROR_OFFSET UNITYSDK_OFFSET(0x18E42220)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_CONTENTENCODING_OFFSET UNITYSDK_OFFSET(0x18E422D0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_CONTENTLENGTH64_OFFSET UNITYSDK_OFFSET(0x18E42360)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x18E42380)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_COOKIES_OFFSET UNITYSDK_OFFSET(0x18E423E0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_HASENTITYBODY_OFFSET UNITYSDK_OFFSET(0x18E42160)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x18E42490)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_HTTPMETHOD_OFFSET UNITYSDK_OFFSET(0x18E424A0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_INPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x18E42180)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x18E424B0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISLOCAL_OFFSET UNITYSDK_OFFSET(0x18E424C0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISSECURECONNECTION_OFFSET UNITYSDK_OFFSET(0x18E41020)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISWEBSOCKETREQUEST_OFFSET UNITYSDK_OFFSET(0x18E42AB0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x18E42650)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x18E41050)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x18E42830)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_QUERYSTRING_OFFSET UNITYSDK_OFFSET(0x18E42840)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_RAWURL_OFFSET UNITYSDK_OFFSET(0x18E42850)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x18E425E0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_REQUESTTRACEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x18E42860)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_SERVICENAME_OFFSET UNITYSDK_OFFSET(0x18E42A60)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_TRANSPORTCONTEXT_OFFSET UNITYSDK_OFFSET(0x18E42A70)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_URLREFERRER_OFFSET UNITYSDK_OFFSET(0x18E42880)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_URL_OFFSET UNITYSDK_OFFSET(0x18E42870)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERAGENT_OFFSET UNITYSDK_OFFSET(0x18E42890)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERHOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x18E40F80)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERHOSTNAME_OFFSET UNITYSDK_OFFSET(0x18E40F50)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERLANGUAGES_OFFSET UNITYSDK_OFFSET(0x18E428F0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_ISPREDEFINEDSCHEME_OFFSET UNITYSDK_OFFSET(0x18E40290)
#define SYSTEM_NET_HTTPLISTENERREQUEST_MAYBEURI_OFFSET UNITYSDK_OFFSET(0x18E40200)
#define SYSTEM_NET_HTTPLISTENERREQUEST_SETREQUESTLINE_OFFSET UNITYSDK_OFFSET(0x18E3FA70)
#define SYSTEM_NET_HTTPLISTENERREQUEST_UNQUOTE_OFFSET UNITYSDK_OFFSET(0x18E410E0)
#define SYSTEM_NET_HTTPLISTENERREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E42BD0)
#define SYSTEM_NET_HTTPLISTENERREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18E42CE0)
#define SYSTEM_NET_HTTPLISTENERREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3F980)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerRequest_TypeDefinitionIndex = 3528;

	class HttpListenerRequest : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_separators()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequest_TypeDefinitionIndex)->GetStaticField(0x3A40);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet__100continue()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(HttpListenerRequest_TypeDefinitionIndex)->GetStaticField(0x3A48);
		}
		::System::String* raw_url; // 0x10
		::System::IO::Stream* input_stream; // 0x18
		::System::Net::HttpListenerContext* context; // 0x20
		::System::Uri* referrer; // 0x28
		::System::Version* version; // 0x30
		::System::Net::WebHeaderCollection* headers; // 0x38
		::Il2CppArray<::System::String*>* accept_types; // 0x40
		::System::Text::Encoding* content_encoding; // 0x48
		::System::Uri* url; // 0x50
		::System::String* method; // 0x58
		::System::Collections::Specialized::NameValueCollection* query_string; // 0x60
		::System::Net::CookieCollection* cookies; // 0x68
		::System::Net::HttpListenerRequest_GCCDelegate* gcc_delegate; // 0x70
		::Il2CppArray<::System::String*>* user_languages; // 0x78
		::System::Boolean cl_set; // 0x80
		::System::Boolean ka_set; // 0x81
		::System::Boolean is_chunked; // 0x82
		::System::Boolean keep_alive; // 0x83
		::System::Int64 content_length; // 0x88

		::System::Void _ctor(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST__CTOR_OFFSET))(this, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST__CTOR_1_OFFSET))(this);
		}

		::System::Void SetRequestLine(::System::String* req)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_SETREQUESTLINE_OFFSET))(this, req);
		}

		::System::Void CreateQueryString(::System::String* query)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_CREATEQUERYSTRING_OFFSET))(this, query);
		}

		static ::System::Boolean MaybeUri(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_MAYBEURI_OFFSET))(s);
		}

		static ::System::Boolean IsPredefinedScheme(::System::String* scheme)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_ISPREDEFINEDSCHEME_OFFSET))(scheme);
		}

		::System::Void FinishInitialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_FINISHINITIALIZATION_OFFSET))(this);
		}

		static ::System::String* Unquote(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_UNQUOTE_OFFSET))(str);
		}

		::System::Void AddHeader(::System::String* header)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_ADDHEADER_OFFSET))(this, header);
		}

		::System::Boolean FlushInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_FLUSHINPUT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AcceptTypes()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_ACCEPTTYPES_OFFSET))(this);
		}

		::System::Int32 get_ClientCertificateError()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_CLIENTCERTIFICATEERROR_OFFSET))(this);
		}

		::System::Text::Encoding* get_ContentEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_CONTENTENCODING_OFFSET))(this);
		}

		::System::Int64 get_ContentLength64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_CONTENTLENGTH64_OFFSET))(this);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Net::CookieCollection* get_Cookies()
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_COOKIES_OFFSET))(this);
		}

		::System::Boolean get_HasEntityBody()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_HASENTITYBODY_OFFSET))(this);
		}

		::System::Collections::Specialized::NameValueCollection* get_Headers()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::String* get_HttpMethod()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_HTTPMETHOD_OFFSET))(this);
		}

		::System::IO::Stream* get_InputStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_INPUTSTREAM_OFFSET))(this);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean get_IsLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISLOCAL_OFFSET))(this);
		}

		::System::Boolean get_IsSecureConnection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISSECURECONNECTION_OFFSET))(this);
		}

		::System::Boolean get_KeepAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_KEEPALIVE_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_LOCALENDPOINT_OFFSET))(this);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Collections::Specialized::NameValueCollection* get_QueryString()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_QUERYSTRING_OFFSET))(this);
		}

		::System::String* get_RawUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_RAWURL_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		::System::Guid get_RequestTraceIdentifier()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_REQUESTTRACEIDENTIFIER_OFFSET))(this);
		}

		::System::Uri* get_Url()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_URL_OFFSET))(this);
		}

		::System::Uri* get_UrlReferrer()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_URLREFERRER_OFFSET))(this);
		}

		::System::String* get_UserAgent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERAGENT_OFFSET))(this);
		}

		::System::String* get_UserHostAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERHOSTADDRESS_OFFSET))(this);
		}

		::System::String* get_UserHostName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERHOSTNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_UserLanguages()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_USERLANGUAGES_OFFSET))(this);
		}

		::System::IAsyncResult* BeginGetClientCertificate(::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_BEGINGETCLIENTCERTIFICATE_OFFSET))(this, requestCallback, state);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* EndGetClientCertificate(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_ENDGETCLIENTCERTIFICATE_OFFSET))(this, asyncResult);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* GetClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GETCLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::String* get_ServiceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_SERVICENAME_OFFSET))(this);
		}

		::System::Net::TransportContext* get_TransportContext()
		{
			return ((::System::Net::TransportContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_TRANSPORTCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsWebSocketRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GET_ISWEBSOCKETREQUEST_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* GetClientCertificateAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GETCLIENTCERTIFICATEASYNC_OFFSET))(this);
		}
	};
}
