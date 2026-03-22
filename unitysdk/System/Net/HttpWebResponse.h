#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/WebResponse.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::IO { class Stream; }
namespace System::Net { class CookieCollection; }
namespace System::Net { class CookieContainer; }
namespace System::Net { class WebConnectionData; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_HTTPWEBRESPONSE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x19D78290)
#define SYSTEM_NET_HTTPWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x19D78E10)
#define SYSTEM_NET_HTTPWEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D78E90)
#define SYSTEM_NET_HTTPWEBRESPONSE_FILLCOOKIES_OFFSET UNITYSDK_OFFSET(0x19D77CC0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETMUSTIMPLEMENT_OFFSET UNITYSDK_OFFSET(0x19D78480)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19D78AD0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0x19D78900)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x19D78A00)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_CHARACTERSET_OFFSET UNITYSDK_OFFSET(0x19D78080)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTENCODING_OFFSET UNITYSDK_OFFSET(0x19D78200)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x19D782F0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x19D78160)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_COOKIES_OFFSET UNITYSDK_OFFSET(0x19D78300)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x19D78470)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_ISMUTUALLYAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x19D78530)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_LASTMODIFIED_OFFSET UNITYSDK_OFFSET(0x19D78580)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x19D78690)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x19D78700)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x19D78770)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_SERVER_OFFSET UNITYSDK_OFFSET(0x19D787E0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x19D78870)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19D78880)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET UNITYSDK_OFFSET(0x19D788F0)
#define SYSTEM_NET_HTTPWEBRESPONSE_READALL_OFFSET UNITYSDK_OFFSET(0x19D78990)
#define SYSTEM_NET_HTTPWEBRESPONSE_SET_COOKIES_OFFSET UNITYSDK_OFFSET(0x19D78400)
#define SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D78E40)
#define SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19D78AC0)
#define SYSTEM_NET_HTTPWEBRESPONSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D77E20)
#define SYSTEM_NET_HTTPWEBRESPONSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19D78EE0)
#define SYSTEM_NET_HTTPWEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D77A20)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebResponse_TypeDefinitionIndex = 3539;

	class HttpWebResponse : public ::System::Net::WebResponse
	{
	public:
		::System::IO::Stream* stream; // 0x20
		::System::String* contentType; // 0x28
		::System::String* statusDescription; // 0x30
		::System::Net::CookieCollection* cookieCollection; // 0x38
		::System::String* method; // 0x40
		::System::Version* version; // 0x48
		::System::Net::WebHeaderCollection* webHeaders; // 0x50
		::System::Uri* uri; // 0x58
		::System::Net::CookieContainer* cookie_container; // 0x60
		::System::Boolean disposed; // 0x68
		::System::Net::HttpStatusCode statusCode; // 0x6C
		::System::Int64 contentLength; // 0x70

		::System::Void _ctor(::System::Uri* uri, ::System::String* method, ::System::Net::WebConnectionData* data, ::System::Net::CookieContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Net::WebConnectionData*, ::System::Net::CookieContainer*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE__CTOR_OFFSET))(this, uri, method, data, container);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE__CTOR_1_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE__CTOR_2_OFFSET))(this);
		}

		::System::String* get_CharacterSet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_CHARACTERSET_OFFSET))(this);
		}

		::System::String* get_ContentEncoding()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTENCODING_OFFSET))(this);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Net::CookieCollection* get_Cookies()
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_COOKIES_OFFSET))(this);
		}

		::System::Void set_Cookies(::System::Net::CookieCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SET_COOKIES_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_HEADERS_OFFSET))(this);
		}

		static ::System::Exception* GetMustImplement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETMUSTIMPLEMENT_OFFSET))();
		}

		::System::Boolean get_IsMutuallyAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_ISMUTUALLYAUTHENTICATED_OFFSET))(this);
		}

		::System::DateTime get_LastModified()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_LASTMODIFIED_OFFSET))(this);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_METHOD_OFFSET))(this);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Uri* get_ResponseUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_RESPONSEURI_OFFSET))(this);
		}

		::System::String* get_Server()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_SERVER_OFFSET))(this);
		}

		::System::Net::HttpStatusCode get_StatusCode()
		{
			return ((::System::Net::HttpStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSCODE_OFFSET))(this);
		}

		::System::String* get_StatusDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET))(this);
		}

		::System::Boolean get_SupportsHeaders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_SUPPORTSHEADERS_OFFSET))(this);
		}

		::System::String* GetResponseHeader(::System::String* headerName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET))(this, headerName);
		}

		::System::Void ReadAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_READALL_OFFSET))(this);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_CLOSE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_CHECKDISPOSED_OFFSET))(this);
		}

		::System::Void FillCookies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_FILLCOOKIES_OFFSET))(this);
		}
	};
}
