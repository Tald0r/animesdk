#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Auth { class Token; }

#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONS_GET_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x19A7F780)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONS_SET_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x19A7F790)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19A7F7A0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int VerifyUserAuthOptions_TypeDefinitionIndex = 33146;

	class VerifyUserAuthOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Auth::Token* _AuthToken_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Auth::Token* get_AuthToken()
		{
			return ((::Epic::OnlineServices::Auth::Token*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONS_GET_AUTHTOKEN_OFFSET))(this);
		}

		::System::Void set_AuthToken(::Epic::OnlineServices::Auth::Token* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::Token*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONS_SET_AUTHTOKEN_OFFSET))(this, value);
		}
	};
}
