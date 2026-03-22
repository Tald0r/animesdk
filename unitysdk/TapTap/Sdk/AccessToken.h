#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_ACCESSTOKEN_CURRENTACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1A7C0A00)
#define TAPTAP_SDK_ACCESSTOKEN_GET_KID_OFFSET UNITYSDK_OFFSET(0x1A7C0940)
#define TAPTAP_SDK_ACCESSTOKEN_GET_MACALGORITHM_OFFSET UNITYSDK_OFFSET(0x1A7C09C0)
#define TAPTAP_SDK_ACCESSTOKEN_GET_MACKEY_OFFSET UNITYSDK_OFFSET(0x1A7C09A0)
#define TAPTAP_SDK_ACCESSTOKEN_GET_SCOPE_OFFSET UNITYSDK_OFFSET(0x1A7C09E0)
#define TAPTAP_SDK_ACCESSTOKEN_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1A7C0980)
#define TAPTAP_SDK_ACCESSTOKEN_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1A7C0960)
#define TAPTAP_SDK_ACCESSTOKEN_SET_KID_OFFSET UNITYSDK_OFFSET(0x1A7C0950)
#define TAPTAP_SDK_ACCESSTOKEN_SET_MACALGORITHM_OFFSET UNITYSDK_OFFSET(0x1A7C09D0)
#define TAPTAP_SDK_ACCESSTOKEN_SET_MACKEY_OFFSET UNITYSDK_OFFSET(0x1A7C09B0)
#define TAPTAP_SDK_ACCESSTOKEN_SET_SCOPE_OFFSET UNITYSDK_OFFSET(0x1A7C09F0)
#define TAPTAP_SDK_ACCESSTOKEN_SET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1A7C0990)
#define TAPTAP_SDK_ACCESSTOKEN_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1A7C0970)
#define TAPTAP_SDK_ACCESSTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C0D50)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int AccessToken_TypeDefinitionIndex = 9470;

	class AccessToken : public ::System::Object
	{
	public:
		::System::String* _Token_k__BackingField; // 0x10
		::System::String* _Scope_k__BackingField; // 0x18
		::System::String* _MacKey_k__BackingField; // 0x20
		::System::String* _TokenType_k__BackingField; // 0x28
		::System::String* _MacAlgorithm_k__BackingField; // 0x30
		::System::String* _Kid_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN__CTOR_OFFSET))(this);
		}

		::System::String* get_Kid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_KID_OFFSET))(this);
		}

		::System::Void set_Kid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_KID_OFFSET))(this, value);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_TOKEN_OFFSET))(this, value);
		}

		::System::String* get_TokenType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Void set_TokenType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_TOKENTYPE_OFFSET))(this, value);
		}

		::System::String* get_MacKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_MACKEY_OFFSET))(this);
		}

		::System::Void set_MacKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_MACKEY_OFFSET))(this, value);
		}

		::System::String* get_MacAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_MACALGORITHM_OFFSET))(this);
		}

		::System::Void set_MacAlgorithm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_MACALGORITHM_OFFSET))(this, value);
		}

		::System::String* get_Scope()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_GET_SCOPE_OFFSET))(this);
		}

		::System::Void set_Scope(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_SET_SCOPE_OFFSET))(this, value);
		}

		static ::TapTap::Sdk::AccessToken* CurrentAccessToken()
		{
			return ((::TapTap::Sdk::AccessToken*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_ACCESSTOKEN_CURRENTACCESSTOKEN_OFFSET))();
		}
	};
}
