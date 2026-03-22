#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }

#define SYSTEM_URIBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x190B5090)
#define SYSTEM_URIBUILDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x190B5170)
#define SYSTEM_URIBUILDER_GET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x190B4AE0)
#define SYSTEM_URIBUILDER_GET_HOST_OFFSET UNITYSDK_OFFSET(0x190B4AF0)
#define SYSTEM_URIBUILDER_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x190B4B00)
#define SYSTEM_URIBUILDER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x190B4B40)
#define SYSTEM_URIBUILDER_GET_PORT_OFFSET UNITYSDK_OFFSET(0x190B4B50)
#define SYSTEM_URIBUILDER_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x190B4B60)
#define SYSTEM_URIBUILDER_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x190B4B70)
#define SYSTEM_URIBUILDER_GET_URI_OFFSET UNITYSDK_OFFSET(0x190B4B80)
#define SYSTEM_URIBUILDER_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x190B5050)
#define SYSTEM_URIBUILDER_INIT_OFFSET UNITYSDK_OFFSET(0x190B3BA0)
#define SYSTEM_URIBUILDER_SETFIELDSFROMURI_OFFSET UNITYSDK_OFFSET(0x190B3E50)
#define SYSTEM_URIBUILDER_SET_EXTRA_OFFSET UNITYSDK_OFFSET(0x190B4820)
#define SYSTEM_URIBUILDER_SET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x190B4A40)
#define SYSTEM_URIBUILDER_SET_HOST_OFFSET UNITYSDK_OFFSET(0x190B42D0)
#define SYSTEM_URIBUILDER_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x190B4B10)
#define SYSTEM_URIBUILDER_SET_PATH_OFFSET UNITYSDK_OFFSET(0x190B4600)
#define SYSTEM_URIBUILDER_SET_PORT_OFFSET UNITYSDK_OFFSET(0x190B4400)
#define SYSTEM_URIBUILDER_SET_QUERY_OFFSET UNITYSDK_OFFSET(0x190B4A90)
#define SYSTEM_URIBUILDER_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x190B4140)
#define SYSTEM_URIBUILDER_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x190B5060)
#define SYSTEM_URIBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x190B4C10)
#define SYSTEM_URIBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x190B39D0)
#define SYSTEM_URIBUILDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x190B3D60)
#define SYSTEM_URIBUILDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x190B4000)
#define SYSTEM_URIBUILDER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x190B4380)
#define SYSTEM_URIBUILDER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x190B4480)
#define SYSTEM_URIBUILDER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x190B46F0)
#define SYSTEM_URIBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x190B3940)

namespace System
{
	inline static constexpr unsigned int UriBuilder_TypeDefinitionIndex = 2657;

	class UriBuilder : public ::System::Object
	{
	public:
		::System::Uri* _uri; // 0x10
		::System::String* _fragment; // 0x18
		::System::String* _query; // 0x20
		::System::String* _path; // 0x28
		::System::String* _scheme; // 0x30
		::System::String* _schemeDelimiter; // 0x38
		::System::String* _username; // 0x40
		::System::String* _password; // 0x48
		::System::String* _host; // 0x50
		::System::Boolean _changed; // 0x58
		::System::Int32 _port; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_1_OFFSET))(this, uri);
		}

		::System::Void _ctor_2(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_2_OFFSET))(this, uri);
		}

		::System::Void _ctor_3(::System::String* schemeName, ::System::String* hostName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_3_OFFSET))(this, schemeName, hostName);
		}

		::System::Void _ctor_4(::System::String* scheme, ::System::String* host, ::System::Int32 portNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_4_OFFSET))(this, scheme, host, portNumber);
		}

		::System::Void _ctor_5(::System::String* scheme, ::System::String* host, ::System::Int32 port, ::System::String* pathValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_5_OFFSET))(this, scheme, host, port, pathValue);
		}

		::System::Void _ctor_6(::System::String* scheme, ::System::String* host, ::System::Int32 port, ::System::String* path, ::System::String* extraValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_6_OFFSET))(this, scheme, host, port, path, extraValue);
		}

		::System::Void Init(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_INIT_OFFSET))(this, uri);
		}

		::System::Void set_Extra(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_EXTRA_OFFSET))(this, value);
		}

		::System::String* get_Fragment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_FRAGMENT_OFFSET))(this);
		}

		::System::Void set_Fragment(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_FRAGMENT_OFFSET))(this, value);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_HOST_OFFSET))(this, value);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_PATH_OFFSET))(this, value);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_PORT_OFFSET))(this, value);
		}

		::System::String* get_Query()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_QUERY_OFFSET))(this);
		}

		::System::Void set_Query(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_QUERY_OFFSET))(this, value);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_SCHEME_OFFSET))(this);
		}

		::System::Void set_Scheme(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_SCHEME_OFFSET))(this, value);
		}

		::System::Uri* get_Uri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_URI_OFFSET))(this);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_USERNAME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* rparam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_EQUALS_OFFSET))(this, rparam);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GETHASHCODE_OFFSET))(this);
		}

		::System::Void SetFieldsFromUri(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SETFIELDSFROMURI_OFFSET))(this, uri);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_TOSTRING_OFFSET))(this);
		}
	};
}
