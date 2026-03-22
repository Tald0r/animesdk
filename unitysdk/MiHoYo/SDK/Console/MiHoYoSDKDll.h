#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ChannelType.h"
#include "unitysdk/MiHoYo/SDK/ClientType.h"
#include "unitysdk/MiHoYo/SDK/PS_IssuerID.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x18B91170)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x18B94930)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x18B92260)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x18B92160)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x18B94A60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x18B90FA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET UNITYSDK_OFFSET(0x18B96440)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x18B928B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x18B9AA00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x18B9A700)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PERMISSION_OFFSET UNITYSDK_OFFSET(0x18B9A690)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x18B9A5A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_MATCH_OFFSET UNITYSDK_OFFSET(0x18B9B1F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_SESSION_OFFSET UNITYSDK_OFFSET(0x18B99B60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x18B92E80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x18B92DB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x18B9AAC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACTIVITIES_OFFSET UNITYSDK_OFFSET(0x18B9A330)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x18B98BC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_CURRENT_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x18B9AB20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x18B98B20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_LEADERBOARDS_OFFSET UNITYSDK_OFFSET(0x18B9A530)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_MATCH_DETAIL_OFFSET UNITYSDK_OFFSET(0x18B9B260)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x18B92E20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_PLAYER_SESSION_INFO_OFFSET UNITYSDK_OFFSET(0x18B9AC00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SANDBOX_ID_OFFSET UNITYSDK_OFFSET(0x18B92EE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SESSION_LEADER_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x18B9AB80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_STATISTICS_OFFSET UNITYSDK_OFFSET(0x18B9A4C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_USER_PROFILE_OFFSET UNITYSDK_OFFSET(0x18B92F40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_HAS_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x18B9A2B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_MATCH_OFFSET UNITYSDK_OFFSET(0x18B9B930)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_SESSION_OFFSET UNITYSDK_OFFSET(0x18B9A1E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_MATCH_OFFSET UNITYSDK_OFFSET(0x18B9B9A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_SESSION_OFFSET UNITYSDK_OFFSET(0x18B9A250)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REGISTER_RECEIVE_INVITE_OFFSET UNITYSDK_OFFSET(0x18B9A400)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REPORT_MATCH_RESULTS_OFFSET UNITYSDK_OFFSET(0x18B9BA10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_RESOLVE_PRIVILEGE_OFFSET UNITYSDK_OFFSET(0x18B9A620)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SEND_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x18B99490)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_DESTORY_OFFSET UNITYSDK_OFFSET(0x18B99B00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_INIT_OFFSET UNITYSDK_OFFSET(0x18B99AA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SET_SESSION_OFFSET UNITYSDK_OFFSET(0x18B9A170)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_ERROR_DIALOG_OFFSET UNITYSDK_OFFSET(0x18B98E80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x18B98E10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_PROFILE_CARD_OFFSET UNITYSDK_OFFSET(0x18B98DA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_SESSION_INVITE_OFFSET UNITYSDK_OFFSET(0x18B98EF0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SWITCH_CONTROL_OFFSET UNITYSDK_OFFSET(0x18B9BA80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_ACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x18B9AA60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_DETAIL_OFFSET UNITYSDK_OFFSET(0x18B9B2D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_STATUS_OFFSET UNITYSDK_OFFSET(0x18B9B8C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_RECENT_PLAYERS_OFFSET UNITYSDK_OFFSET(0x18B9A3A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_STATISTICS_OFFSET UNITYSDK_OFFSET(0x18B9A460)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GETINITSTATUS_OFFSET UNITYSDK_OFFSET(0x18B8C3D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ACCOUNT_ID_BY_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x18B97410)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ONLINE_ID_LIST_BY_ACCOUNT_ID_LIST_OFFSET UNITYSDK_OFFSET(0x18B97480)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x18B96BA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x18B96830)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x18B97A50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x18B974F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x18B968A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_USER_ID_OFFSET UNITYSDK_OFFSET(0x18B967C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_HIDE_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x18B96C60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x18B92CA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET UNITYSDK_OFFSET(0x18B96380)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x18B92C20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x18B92D30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x18B95960)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x18B95A00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET UNITYSDK_OFFSET(0x18B96250)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x18B91B30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x18B96D90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET UNITYSDK_OFFSET(0x18B96690)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x18B96390)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET UNITYSDK_OFFSET(0x18B93040)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET UNITYSDK_OFFSET(0x18B946A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x18B93F30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET UNITYSDK_OFFSET(0x18B92B70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET UNITYSDK_OFFSET(0x18B92B80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET UNITYSDK_OFFSET(0x18B96120)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET UNITYSDK_OFFSET(0x18B94500)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET UNITYSDK_OFFSET(0x18B94540)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET UNITYSDK_OFFSET(0x18B94910)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x18B948D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET UNITYSDK_OFFSET(0x18B95F80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x18B95E90)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x18B95FA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x18B96050)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET UNITYSDK_OFFSET(0x18B946B0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET UNITYSDK_OFFSET(0x18B94470)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET UNITYSDK_OFFSET(0x18B926D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x18B929C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET UNITYSDK_OFFSET(0x18B92A40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x18B948F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET UNITYSDK_OFFSET(0x18B93010)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_URL_WITH_LOGIN_STATUS_OFFSET UNITYSDK_OFFSET(0x18B93170)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x18B95F50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_PAY_OFFSET UNITYSDK_OFFSET(0x18B95810)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x18B961C0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x18B93A30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_PRIVACY_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x18B92FE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_USER_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x18B92FB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET UNITYSDK_OFFSET(0x18B92AD0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x18B93C60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET UNITYSDK_OFFSET(0x18B95D60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET UNITYSDK_OFFSET(0x18B937F0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET UNITYSDK_OFFSET(0x18B95B40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x18B93960)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B91110)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_LIST_OFFSET UNITYSDK_OFFSET(0x18B97EC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_OFFSET UNITYSDK_OFFSET(0x18B97E50)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_END_OFFSET UNITYSDK_OFFSET(0x18B97D70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_DESTORY_OFFSET UNITYSDK_OFFSET(0x18B97CA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x18B97C30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_RESUME_OFFSET UNITYSDK_OFFSET(0x18B97F30)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_START_OFFSET UNITYSDK_OFFSET(0x18B97D00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_TERMINATE_OFFSET UNITYSDK_OFFSET(0x18B97DE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DLC_PAY_OFFSET UNITYSDK_OFFSET(0x18B98610)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x18B98010)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_INIT_OFFSET UNITYSDK_OFFSET(0x18B97FA0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GET_COMMUNICATION_RESTRICTION_STATUS_OFFSET UNITYSDK_OFFSET(0x18B98A00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_HAS_PREMIUM_OFFSET UNITYSDK_OFFSET(0x18B98490)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_NOTIFY_PREMIUM_FEATURE_OFFSET UNITYSDK_OFFSET(0x18B986A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PREMIUM_PAY_OFFSET UNITYSDK_OFFSET(0x18B98510)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x18B98070)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x18B980D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x18B98A60)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x18B98130)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x18B98430)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x18B98AC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B98C80)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B98C20)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B97B10)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B97AB0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x18B958A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x18B911D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0x18B96760)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x18B96CC0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_EMPTY_STORE_DIALOG_OFFSET UNITYSDK_OFFSET(0x18B96E40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x18B96C00)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_SYSTEM_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x18B973A0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x18B964E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x18B96600)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B98D40)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B98CE0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B97BD0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B97B70)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B91050)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18B94610)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x18B94580)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B9C4D0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9C4B0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 18584;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA3B0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA3B8);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA3C0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA3C8);
		}
		static ::MiHoYo::SDK::ChannelType* StaticGet_channel()
		{
			return (::MiHoYo::SDK::ChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4520);
		}
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4524);
		}
		static ::System::Boolean* StaticGet_isBackground()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4525);
		}
		static ::System::Boolean* StaticGet_isSetEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4526);
		}
		static ::MiHoYo::SDK::ClientType* StaticGet_clientType()
		{
			return (::MiHoYo::SDK::ClientType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4528);
		}
		static ::MiHoYo::SDK::PS_IssuerID* StaticGet_issuerId()
		{
			return (::MiHoYo::SDK::PS_IssuerID*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x452C);
		}
		static ::System::Int32* StaticGet_trophyContext()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4530);
		}
		static ::MiHoYo::SDK::SubChannelType* StaticGet_subChannel()
		{
			return (::MiHoYo::SDK::SubChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4534);
		}
		::System::Boolean isAppBackground; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UPDATE_OFFSET))(this);
		}

		::System::Void OnNotificationCallback(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET))(this, message);
		}

		::System::Void AddInputField(::UnityEngine::UI::InputField* inputField)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET))(this, inputField);
		}

		static ::System::String* SDKInvoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(funcName, args, callback);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_OFFSET))(callback);
		}

		static ::System::Boolean GetInitStatus()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GETINITSTATUS_OFFSET))();
		}

		static ::System::String* all_set_env(::System::String* env)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(env);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* dataString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(dataString);
		}

		static ::System::String* login_login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET))(callback);
		}

		static ::System::String* login_logout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET))(callback);
		}

		static ::System::String* login_logout_without_confirm(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET))(callback);
		}

		static ::System::String* login_switch_role(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET))(callback);
		}

		static ::System::String* login_get_account_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET))();
		}

		static ::System::String* login_get_asterisk_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET))();
		}

		static ::System::String* info_get_device_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET))();
		}

		static ::System::String* info_get_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_get_region_multiple_language(::System::String* code)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET))(code);
		}

		static ::System::String* console_get_account_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_ID_OFFSET))();
		}

		static ::System::String* console_get_online_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ONLINE_ID_OFFSET))();
		}

		static ::System::String* console_get_account_country()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACCOUNT_COUNTRY_OFFSET))();
		}

		static ::System::String* console_get_sandbox_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SANDBOX_ID_OFFSET))();
		}

		static ::System::String* console_get_user_profile(::System::String* xuid, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_USER_PROFILE_OFFSET))(xuid, callback);
		}

		static ::System::String* login_show_user_agreement()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_USER_AGREEMENT_OFFSET))();
		}

		static ::System::String* login_show_privacy_protocol()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SHOW_PRIVACY_PROTOCOL_OFFSET))();
		}

		static ::System::String* login_open_protocol_webview(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET))(jsonString);
		}

		static ::System::String* launch_open_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET))(url);
		}

		static ::System::String* login_open_url_with_login_status(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_URL_WITH_LOGIN_STATUS_OFFSET))(jsonString);
		}

		static ::System::String* notice_show_notice(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET))(jsonString);
		}

		static ::System::String* notice_show_pop_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET))();
		}

		static ::System::String* login_set_server_id(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET))(value);
		}

		static ::System::String* login_will_enter_game(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_enter_game(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(jsonString);
		}

		static ::System::String* login_list_goods(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_get_price_tier(::System::String* currency, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET))(currency, callback);
		}

		static ::System::String* login_get_product_list(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET))(jsonString, callback);
		}

		static ::System::String* watermark_set_enable(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(args);
		}

		static ::System::String* watermark_set_config(::System::String* jsonStrings)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(jsonStrings);
		}

		static ::System::String* login_create_role(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET))(jsonString);
		}

		static ::System::String* login_level_up(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET))(jsonString);
		}

		static ::System::String* login_has_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET))();
		}

		static ::System::String* login_open_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET))();
		}

		static ::System::String* login_has_customer_service()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET))();
		}

		static ::System::String* all_set_device_id(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET))(value);
		}

		static ::System::String* all_set_language(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET))(value);
		}

		static ::System::String* login_pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_PAY_OFFSET))(jsonString, callback);
		}

		static ::System::String* report_set_info(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET))(jsonString);
		}

		static ::System::String* info_get_sub_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_set_game_parameters(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET))(jsonString);
		}

		static ::System::String* notice_show_pop_image(::System::String* animation)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET))(animation);
		}

		static ::System::String* notice_set_notice_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET))(url);
		}

		static ::System::String* login_has_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_open_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_has_scan_func()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET))();
		}

		static ::System::String* login_is_account_bind_mobile()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET))();
		}

		static ::System::String* login_is_account_real_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET))();
		}

		static ::System::String* login_get_bind_state()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET))();
		}

		static ::System::String* login_set_account(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET))(jsonString);
		}

		static ::System::String* info_set_game_version(::System::String* version)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET))(version);
		}

		static ::System::String* info_get_cps()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET))();
		}

		static ::System::String* launch_enable_auto_test(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET))(enable);
		}

		static ::System::String* camera_set_ui_camera(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET))(jsonString);
		}

		static ::System::String* ugc_set_token(::System::String* token)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET))(token);
		}

		static ::System::String* ugc_show_bbs_agreement(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET))(jsonString, callback);
		}

		static ::System::String* launch_close_all_ui()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET))();
		}

		static ::System::String* set_ps_client_id(::System::String* clientId)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_CLIENT_ID_OFFSET))(clientId);
		}

		static ::System::String* get_ps_user_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_USER_ID_OFFSET))();
		}

		static ::System::String* get_ps_account_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_ID_OFFSET))();
		}

		static ::System::String* get_ps_online_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ONLINE_ID_OFFSET))();
		}

		static ::System::String* get_ps_account_country()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_ACCOUNT_COUNTRY_OFFSET))();
		}

		static ::System::String* show_ps_store_icon(::System::String* type)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_PS_STORE_ICON_OFFSET))(type);
		}

		static ::System::String* hide_ps_store_icon()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_HIDE_PS_STORE_ICON_OFFSET))();
		}

		static ::System::String* set_ps_trophy(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SET_PS_TROPHY_OFFSET))(value);
		}

		static ::System::String* init_ps_trophy()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_INIT_PS_TROPHY_OFFSET))();
		}

		static ::System::String* show_empty_store_dialog(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_EMPTY_STORE_DIALOG_OFFSET))(callback);
		}

		static ::System::String* show_system_message_dialog(::System::String* type, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_SHOW_SYSTEM_MESSAGE_DIALOG_OFFSET))(type, callback);
		}

		static ::System::String* get_account_id_by_online_id(::System::String* onlineId, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ACCOUNT_ID_BY_ONLINE_ID_OFFSET))(onlineId, callback);
		}

		static ::System::String* get_online_id_list_by_account_id_list(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_ONLINE_ID_LIST_BY_ACCOUNT_ID_LIST_OFFSET))(jsonString, callback);
		}

		static ::System::String* get_ps_friend_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_FRIEND_LIST_OFFSET))(callback);
		}

		static ::System::String* get_ps_block_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_GET_PS_BLOCK_LIST_OFFSET))(callback);
		}

		static ::System::String* register_ps_friend_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_FRIEND_UPDATE_OFFSET))(callback);
		}

		static ::System::String* register_ps_block_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_PS_BLOCK_UPDATE_OFFSET))(callback);
		}

		static ::System::String* unregister_ps_friend_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_FRIEND_UPDATE_OFFSET))();
		}

		static ::System::String* unregister_ps_block_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_PS_BLOCK_UPDATE_OFFSET))();
		}

		static ::System::String* ps_activity_manager_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_INIT_OFFSET))();
		}

		static ::System::String* ps_activity_manager_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_DESTORY_OFFSET))();
		}

		static ::System::String* ps_activity_start(::System::String* activityId)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_START_OFFSET))(activityId);
		}

		static ::System::String* ps_activity_end(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_END_OFFSET))(jsonString);
		}

		static ::System::String* ps_activity_terminate()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_TERMINATE_OFFSET))();
		}

		static ::System::String* ps_activity_change_availability(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_OFFSET))(jsonString);
		}

		static ::System::String* ps_activity_change_availability_list(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_LIST_OFFSET))(jsonString);
		}

		static ::System::String* ps_activity_resume(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_ACTIVITY_RESUME_OFFSET))(jsonString);
		}

		static ::System::String* ps_gameintent_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_INIT_OFFSET))();
		}

		static ::System::String* ps_gameintent_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GAMEINTENT_DESTORY_OFFSET))();
		}

		static ::System::String* ps_register_gameintent_get_activity_id(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET))(callback);
		}

		static ::System::String* ps_register_gameintent_get_session_id(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET))(callback);
		}

		static ::System::String* ps_unregister_gameintent_get_activity_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET))();
		}

		static ::System::String* ps_unregister_gameintent_get_session_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET))();
		}

		static ::System::String* ps_has_premium()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_HAS_PREMIUM_OFFSET))();
		}

		static ::System::String* ps_premium_pay(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_PREMIUM_PAY_OFFSET))(callback);
		}

		static ::System::String* ps_dlc_pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_DLC_PAY_OFFSET))(jsonString, callback);
		}

		static ::System::String* ps_notify_premium_feature(::System::String* properties)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_NOTIFY_PREMIUM_FEATURE_OFFSET))(properties);
		}

		static ::System::String* ps_get_communication_restriction_status(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_GET_COMMUNICATION_RESTRICTION_STATUS_OFFSET))(callback);
		}

		static ::System::String* ps_register_np_state(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_REGISTER_NP_STATE_OFFSET))(callback);
		}

		static ::System::String* ps_unregister_np_state()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_PS_UNREGISTER_NP_STATE_OFFSET))();
		}

		static ::System::String* console_get_friend_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_FRIEND_LIST_OFFSET))(callback);
		}

		static ::System::String* console_get_block_list(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_BLOCK_LIST_OFFSET))(callback);
		}

		static ::System::String* register_console_friend_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_FRIEND_UPDATE_OFFSET))(callback);
		}

		static ::System::String* register_console_block_update(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_REGISTER_CONSOLE_BLOCK_UPDATE_OFFSET))(callback);
		}

		static ::System::String* unregister_console_friend_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_FRIEND_UPDATE_OFFSET))();
		}

		static ::System::String* unregister_console_block_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_UNREGISTER_CONSOLE_BLOCK_UPDATE_OFFSET))();
		}

		static ::System::String* console_show_profile_card(::System::String* xuid, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_PROFILE_CARD_OFFSET))(xuid, callback);
		}

		static ::System::String* console_show_message_dialog(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_MESSAGE_DIALOG_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_show_error_dialog(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_ERROR_DIALOG_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_show_session_invite(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SHOW_SESSION_INVITE_OFFSET))(callback);
		}

		static ::System::String* console_send_session_invite(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SEND_SESSION_INVITE_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_session_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_INIT_OFFSET))();
		}

		static ::System::String* console_session_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SESSION_DESTORY_OFFSET))();
		}

		static ::System::String* console_create_session(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_SESSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_set_session(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SET_SESSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_join_session(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_SESSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_leave_session(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_SESSION_OFFSET))(callback);
		}

		static ::System::String* console_has_join_session()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_HAS_JOIN_SESSION_OFFSET))();
		}

		static ::System::String* console_get_activities(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACTIVITIES_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_update_recent_players(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_RECENT_PLAYERS_OFFSET))(jsonString);
		}

		static ::System::String* console_register_receive_invite(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REGISTER_RECEIVE_INVITE_OFFSET))(callback);
		}

		static ::System::String* console_update_statistics(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_STATISTICS_OFFSET))(jsonString);
		}

		static ::System::String* console_get_statistics(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_STATISTICS_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_get_leaderboards(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_LEADERBOARDS_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_check_privilege(::System::String* strPrivilege)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PRIVILEGE_OFFSET))(strPrivilege);
		}

		static ::System::String* console_resolve_privilege(::System::String* strPrivilege, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_RESOLVE_PRIVILEGE_OFFSET))(strPrivilege, callback);
		}

		static ::System::String* console_check_permission(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CHECK_PERMISSION_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_achievement_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_INIT_OFFSET))();
		}

		static ::System::String* console_achievement_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_ACHIEVEMENT_DESTORY_OFFSET))();
		}

		static ::System::String* console_update_achievement(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_ACHIEVEMENT_OFFSET))(jsonString);
		}

		static ::System::String* console_get_achievements(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_ACHIEVEMENTS_OFFSET))(callback);
		}

		static ::System::String* console_get_current_session_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_CURRENT_SESSION_ID_OFFSET))();
		}

		static ::System::String* console_get_session_leader_account_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_SESSION_LEADER_ACCOUNT_ID_OFFSET))();
		}

		static ::System::String* console_get_player_session_info(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_PLAYER_SESSION_INFO_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_create_match(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_CREATE_MATCH_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_get_match_detail(::System::String* matchId, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_GET_MATCH_DETAIL_OFFSET))(matchId, callback);
		}

		static ::System::String* console_update_match_detail(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_DETAIL_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_update_match_status(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_UPDATE_MATCH_STATUS_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_join_match(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_JOIN_MATCH_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_leave_match(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_LEAVE_MATCH_OFFSET))(jsonString, callback);
		}

		static ::System::String* console_report_match_results(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_REPORT_MATCH_RESULTS_OFFSET))(jsonString, callback);
		}

		static ::System::Void console_switch_control(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CONSOLE_SWITCH_CONTROL_OFFSET))(jsonString, callback);
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_CHECKINIT_OFFSET))();
		}
	};
}
