#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_NOTIFICATIONMANAGER_CREATENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x186E99D0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_HIDESDKDIALOG_OFFSET UNITYSDK_OFFSET(0x186E9BA0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_ISENABLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x186EA8D0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x186EA690)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x186EA650)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDMOBILEACCOUNT_OFFSET UNITYSDK_OFFSET(0x186EA2A0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDFATIGUEREMINDER_OFFSET UNITYSDK_OFFSET(0x186EA810)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCHANNELERROR_OFFSET UNITYSDK_OFFSET(0x186EAB20)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCLIENTERROR_OFFSET UNITYSDK_OFFSET(0x186D1440)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWHTTPERROR_OFFSET UNITYSDK_OFFSET(0x186EB340)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWSERVERRESPONSEERROR_OFFSET UNITYSDK_OFFSET(0x186EAFE0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGOUT_OFFSET UNITYSDK_OFFSET(0x186EA610)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x186E9890)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDPOPIMAGESHOW_OFFSET UNITYSDK_OFFSET(0x186EA870)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREALNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x186EA300)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREDPOINTINFO_OFFSET UNITYSDK_OFFSET(0x186DBFB0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDUNIWEBVIEW_OFFSET UNITYSDK_OFFSET(0x186DC100)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWBEFORELOGINNOTICEREDPOINT_OFFSET UNITYSDK_OFFSET(0x186EA230)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEIMPORTANTREDPOINT_OFFSET UNITYSDK_OFFSET(0x186EA3D0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEREDPOINT_OFFSET UNITYSDK_OFFSET(0x186E9E00)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x186E9C10)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEIMPORTANTREDPOINT_OFFSET UNITYSDK_OFFSET(0x186EA360)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x186EA040)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINT_OFFSET UNITYSDK_OFFSET(0x186E9D90)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x186E9BD0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWSDKDIALOG_OFFSET UNITYSDK_OFFSET(0x186E9970)
#define MIHOYO_SDK_NOTIFICATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x186EB570)
#define MIHOYO_SDK_NOTIFICATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x186EB560)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NotificationManager_TypeDefinitionIndex = 18081;

	class NotificationManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::NotificationManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::NotificationManager**)Il2CppClass::FromTypeDefinitionIndex(NotificationManager_TypeDefinitionIndex)->GetStaticField(0x93A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SendNotification(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDNOTIFICATION_OFFSET))(this, message);
		}

		::System::Void ShowSDKDialog(::System::String* dialogName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWSDKDIALOG_OFFSET))(this, dialogName);
		}

		::System::Void HideSDKDialog(::System::String* dialogName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_HIDESDKDIALOG_OFFSET))(this, dialogName);
		}

		::System::Void SendUniWebView(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDUNIWEBVIEW_OFFSET))(this, url);
		}

		::System::Void ShowPopNotice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWPOPNOTICE_OFFSET))(this);
		}

		::System::Void ShowCustomPopNotice(::System::String* strType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET))(this, strType);
		}

		::System::Void ShowNoticeRedPoint(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINT_OFFSET))(this, isShow);
		}

		::System::Void ShowCustomNoticeRedPoint(::System::Boolean isShow, ::System::String* strType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEREDPOINT_OFFSET))(this, isShow, strType);
		}

		::System::Void ShowNoticeRedPointText(::System::Int32 nRetCode, ::System::String* strRedPointText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINTTEXT_OFFSET))(this, nRetCode, strRedPointText);
		}

		::System::Void ShowBeforeLoginNoticeRedPoint(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWBEFORELOGINNOTICEREDPOINT_OFFSET))(this, isShow);
		}

		::System::Void SendRedPointInfo(::System::String* strRedPointInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREDPOINTINFO_OFFSET))(this, strRedPointInfo);
		}

		::System::Void SendBindMobileAccount(::System::String* open_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDMOBILEACCOUNT_OFFSET))(this, open_id);
		}

		::System::Void SendRealNameAccount(::System::String* open_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREALNAMEACCOUNT_OFFSET))(this, open_id);
		}

		::System::Void ShowNoticeImportantRedPoint(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEIMPORTANTREDPOINT_OFFSET))(this, isShow);
		}

		::System::Void ShowCustomNoticeImportantRedPoint(::System::Boolean isShow, ::System::String* strType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEIMPORTANTREDPOINT_OFFSET))(this, isShow, strType);
		}

		::System::Void SendLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGOUT_OFFSET))(this);
		}

		::System::Void SendBindAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDACCOUNT_OFFSET))(this);
		}

		::System::Void SendAntiAddiction(::MiHoYo::SDK::JSONNode* msg)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDANTIADDICTION_OFFSET))(this, msg);
		}

		::System::Void SendFatigueReminder(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDFATIGUEREMINDER_OFFSET))(this, msg);
		}

		::System::Void SendPopImageShow(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDPOPIMAGESHOW_OFFSET))(this, msg);
		}

		::System::Boolean IsEnableLoginFlowNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_ISENABLELOGINFLOWNOTIFICATION_OFFSET))(this);
		}

		::System::Void SendLoginFlowChannelError(::System::Int32 code, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCHANNELERROR_OFFSET))(this, code, msg);
		}

		::System::Void SendLoginFlowServerResponseError(::System::Int32 code, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWSERVERRESPONSEERROR_OFFSET))(this, code, msg);
		}

		::System::Void SendLoginFlowHttpError(::System::Int32 code, ::System::String* msg, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWHTTPERROR_OFFSET))(this, code, msg, url);
		}

		::System::Void SendLoginFlowClientError(::System::Int32 nErrCode, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCLIENTERROR_OFFSET))(this, nErrCode, strMsg);
		}

		::System::String* CreateNotification(::System::String* eventName, ::System::String* param)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_CREATENOTIFICATION_OFFSET))(this, eventName, param);
		}
	};
}
