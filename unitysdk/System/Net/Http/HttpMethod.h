#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19DFDB90)
#define SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x19DFDB60)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19DFDC10)
#define SYSTEM_NET_HTTP_HTTPMETHOD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19DFDB30)
#define SYSTEM_NET_HTTP_HTTPMETHOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19DFDCA0)
#define SYSTEM_NET_HTTP_HTTPMETHOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DFDCB0)
#define SYSTEM_NET_HTTP_HTTPMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x19DFDAB0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMethod_TypeDefinitionIndex = 23523;

	class HttpMethod : public ::System::Object
	{
	public:
		static ::System::Net::Http::HttpMethod** StaticGet_head_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x1D510);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_put_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x1D518);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_delete_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x1D520);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_post_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x1D528);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_options_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x1D530);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_trace_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x1D538);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_get_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x1D540);
		}
		::System::String* method; // 0x10

		::System::Void _ctor(::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD__CTOR_OFFSET))(this, method);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD__CCTOR_OFFSET))();
		}

		static ::System::Boolean op_Equality(::System::Net::Http::HttpMethod* left, ::System::Net::Http::HttpMethod* right)
		{
			return ((::System::Boolean(*)(::System::Net::Http::HttpMethod*, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_OP_EQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::System::Net::Http::HttpMethod* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_TOSTRING_OFFSET))(this);
		}
	};
}
