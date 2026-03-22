#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/PromoteMemberCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x16E4EE00)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x16E4EDC0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x16E4EDE0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x16E4EDA0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x16E4F000)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x16E4EDD0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x16E4EDF0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x16E4EE20)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x16E4EDB0)
#define EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4F270)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int PromoteMemberCallbackInfo_TypeDefinitionIndex = 32709;

	class PromoteMemberCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_LOBBYID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::PromoteMemberCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_PROMOTEMEMBERCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
