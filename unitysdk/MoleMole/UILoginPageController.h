#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_7BB13037D7F77E90.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79F6D62CE30E3F8E_95;
class Class_2_80AC63F59C5E376B;
namespace MoleMole { class MonoGamepadBaseList; }
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralLoginTipsDialogPopWindowController; }
namespace MoleMole { class UILoginAgeEjectDialogPopWindowController; }
namespace MoleMole { class UIResourceLoadWidgetContext; }
namespace MoleMole { class UIResourceLoadWidgetController; }
namespace MoleMole { class UISDKLoginContext; }
namespace MoleMole { class UISDKLoginWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UILOGINPAGECONTROLLER_CANCELLOGIN_OFFSET UNITYSDK_OFFSET(0xB231150)
#define MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN2_OFFSET UNITYSDK_OFFSET(0xB232690)
#define MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN_OFFSET UNITYSDK_OFFSET(0xB232270)
#define MOLEMOLE_UILOGINPAGECONTROLLER_COLOSESDKTIPS_OFFSET UNITYSDK_OFFSET(0xB232B50)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ENABLELOGININPUTBLOCK_OFFSET UNITYSDK_OFFSET(0xB233650)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GAMEPADSETDEFAULTSELECT_OFFSET UNITYSDK_OFFSET(0xB22E620)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GETLOGINKEY_OFFSET UNITYSDK_OFFSET(0xB22DF50)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOTWIDGET_OFFSET UNITYSDK_OFFSET(0xB22B8A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOT_OFFSET UNITYSDK_OFFSET(0xB22B7E0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xB22B630)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0xB22B5F0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_SDKWIGETROOT_OFFSET UNITYSDK_OFFSET(0xB22B600)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xB22B5E0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_INITLOGIN_OFFSET UNITYSDK_OFFSET(0xB22EAC0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_INITSEVERLIST_OFFSET UNITYSDK_OFFSET(0xB22F610)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ISDISPATCHFREQUENTATTEMPTS_OFFSET UNITYSDK_OFFSET(0xB230560)
#define MOLEMOLE_UILOGINPAGECONTROLLER_LOGININDISPATCH_OFFSET UNITYSDK_OFFSET(0xB230380)
#define MOLEMOLE_UILOGINPAGECONTROLLER_LOGININGAMESERVER_OFFSET UNITYSDK_OFFSET(0xB230860)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0xB22FD30)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB22B910)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xB22DC50)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONLOGINERROR_OFFSET UNITYSDK_OFFSET(0xB231C60)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONLOGINGAMESERVER_OFFSET UNITYSDK_OFFSET(0xB231E00)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKENTERGAMESUCCESS_OFFSET UNITYSDK_OFFSET(0xB2320A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0xB230BE0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSETLANGUAGEVOICE_OFFSET UNITYSDK_OFFSET(0xB2332B0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB22B6A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB22D0D0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB22B9B0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB2336D0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENAGEDAILOG_OFFSET UNITYSDK_OFFSET(0xB233130)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENCLOUDPRELOGIN_OFFSET UNITYSDK_OFFSET(0xB232E30)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENDEBUGLOGIN_OFFSET UNITYSDK_OFFSET(0xB232BF0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENRESOURCELOAD_OFFSET UNITYSDK_OFFSET(0xB2334A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENSDKLOGIN_OFFSET UNITYSDK_OFFSET(0xB232C80)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENSELECTSERVER_OFFSET UNITYSDK_OFFSET(0xB230170)
#define MOLEMOLE_UILOGINPAGECONTROLLER_REFRESHSERVERTEXT_OFFSET UNITYSDK_OFFSET(0xB232A30)
#define MOLEMOLE_UILOGINPAGECONTROLLER_REQUESTSERVERLIST_OFFSET UNITYSDK_OFFSET(0xB22F3B0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_RESETFOCUS_OFFSET UNITYSDK_OFFSET(0xB231B00)
#define MOLEMOLE_UILOGINPAGECONTROLLER_RESETLOGIN_OFFSET UNITYSDK_OFFSET(0xB2314C0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETBESTSERVER_OFFSET UNITYSDK_OFFSET(0xB22FC10)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETIGNORECUSTOMLISTNAVIGATESTATE_OFFSET UNITYSDK_OFFSET(0xB231870)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETLOGINMODE_OFFSET UNITYSDK_OFFSET(0xB232620)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETLOGINREADY_OFFSET UNITYSDK_OFFSET(0xB230E80)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETMESSAGEKEY_OFFSET UNITYSDK_OFFSET(0xB22E090)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETRESOURCEVERSION_OFFSET UNITYSDK_OFFSET(0xB22E8E0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETSERVERBYNAME_OFFSET UNITYSDK_OFFSET(0xB22FA00)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xB22D000)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETVERSIONINFO_OFFSET UNITYSDK_OFFSET(0xB22CDB0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETXBOXIDTAG_OFFSET UNITYSDK_OFFSET(0xB22E850)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SHOWSERVERLISTVIEW_OFFSET UNITYSDK_OFFSET(0xB2301E0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINANDLOADRESOURCE_OFFSET UNITYSDK_OFFSET(0xB231570)
#define MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINPROCESS_OFFSET UNITYSDK_OFFSET(0xB22CEA0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGIN_OFFSET UNITYSDK_OFFSET(0xB22F0B0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xB22F350)
#define MOLEMOLE_UILOGINPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB233860)
#define MOLEMOLE_UILOGINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB233840)
#define MOLEMOLE_UILOGINPAGECONTROLLER__LOGININGAMESERVER_B__30_0_OFFSET UNITYSDK_OFFSET(0xB233A50)
#define MOLEMOLE_UILOGINPAGECONTROLLER__ONUIINIT_B__13_0_OFFSET UNITYSDK_OFFSET(0xB233870)
#define MOLEMOLE_UILOGINPAGECONTROLLER__ONUIOPEN_B__58_0_OFFSET UNITYSDK_OFFSET(0xB233B90)
#define MOLEMOLE_UILOGINPAGECONTROLLER__ONUIOPEN_B__58_1_OFFSET UNITYSDK_OFFSET(0xB233BA0)
#define MOLEMOLE_UILOGINPAGECONTROLLER__STARTLOGINPROCESS_B__20_0_OFFSET UNITYSDK_OFFSET(0xB233900)
#define MOLEMOLE_UILOGINPAGECONTROLLER__STARTLOGIN_B__21_0_OFFSET UNITYSDK_OFFSET(0xB233910)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xB233BB0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB233BC0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xB233C30)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB233C90)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB233CA0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB233CB0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB233CC0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xB233D30)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController_TypeDefinitionIndex = 47649;

	class UILoginPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_Hide_Code_Login()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UILoginPageController_TypeDefinitionIndex)->GetStaticField(0xD020);
		}
		// static const ::System::String* _RESOURCES_DESCRIPTION_TITLE; // 0x0
		// static const ::System::Int32 _Frequent_attempts_Count = 0x5; // 0x0
		// static const ::System::Single _Frequent_attempts_Time; // 0x0
		::System::Single _maxProgressValue; // 0x2F8
		::System::Single _progressOffset; // 0x2FC
		::System::Boolean _enableHotSwitch; // 0x300
		::Class_2_79F6D62CE30E3F8E_95* _view; // 0x308
		::Class_2_80AC63F59C5E376B* _loginModel; // 0x310
		::UnityEngine::Animation* mhyLogoPlay; // 0x318
		::UnityEngine::Animation* gameLogoPlay; // 0x320
		::UnityEngine::Animation* warningLogoPlay; // 0x328
		::MoleMole::UISDKLoginWidgetController* _sdkLogin; // 0x330
		::MoleMole::UIResourceLoadWidgetController* _resourceLoadWidget; // 0x338
		::MoleMole::UILoginAgeEjectDialogPopWindowController* ageDialog; // 0x340
		::MoleMole::UIGeneralLoginTipsDialogPopWindowController* _logintTipsParent; // 0x348
		::MoleMole::MonoGamepadBaseList* MonoGamepadModule_Left; // 0x350
		::MoleMole::MonoGamepadCustomList* MonoGamepadModule_Center; // 0x358
		::MoleMole::MonoGamepadBaseList* MonoGamepadModule_Right; // 0x360
		::Enum_3_7BB13037D7F77E90 _loginPageState; // 0x368
		::System::Boolean Disable_Frequent_attempts; // 0x36C
		::System::Collections::Generic::List_1<::System::Single>* attempts_Time; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_205E43D40B9E7AEA get_MessageMatchPage()
		{
			return ((::Enum_3_205E43D40B9E7AEA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_SDKWigetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_SDKWIGETROOT_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::UnityEngine::Transform* GetTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOT_OFFSET))(this);
		}

		::MoleMole::UIGeneralLoginTipsDialogPopWindowController* GetTipsRootWidget()
		{
			return ((::MoleMole::UIGeneralLoginTipsDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOTWIDGET_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void SetXboxIdTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETXBOXIDTAG_OFFSET))(this);
		}

		::System::Void SetResourceVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETRESOURCEVERSION_OFFSET))(this);
		}

		::System::Void SetMessageKey(::System::String* key, ::System::Boolean needLoppAni, ::System::Boolean showGamePadHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETMESSAGEKEY_OFFSET))(this, key, needLoppAni, showGamePadHint);
		}

		::System::Void StartLoginProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINPROCESS_OFFSET))(this);
		}

		::System::Void StartLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGIN_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_START_OFFSET))(this);
		}

		::System::Void RequestServerList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_REQUESTSERVERLIST_OFFSET))(this);
		}

		::System::Void InitSeverList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_INITSEVERLIST_OFFSET))(this);
		}

		::System::Void SetServerByName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETSERVERBYNAME_OFFSET))(this, name);
		}

		::System::Void SetBestServer(::System::Action* success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETBESTSERVER_OFFSET))(this, success);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, time);
		}

		::System::Void OpenSelectServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENSELECTSERVER_OFFSET))(this);
		}

		::System::Void LoginInDispatch(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_LOGININDISPATCH_OFFSET))(this, arg);
		}

		::System::Void LoginInGameServer(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_LOGININGAMESERVER_OFFSET))(this, arg);
		}

		::System::Void OnSDKLoginSuccess(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKLOGINSUCCESS_OFFSET))(this, arg);
		}

		::System::Void SetLoginReady(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETLOGINREADY_OFFSET))(this, arg);
		}

		::System::Void CancelLogin(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_CANCELLOGIN_OFFSET))(this, arg);
		}

		::System::String* GetLoginKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GETLOGINKEY_OFFSET))(this);
		}

		::System::Void ResetLogin(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_RESETLOGIN_OFFSET))(this, arg);
		}

		::System::Void StartLoginAndLoadResource(::MoleMole::UIResourceLoadWidgetContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIResourceLoadWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINANDLOADRESOURCE_OFFSET))(this, context);
		}

		::System::Void ResetFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_RESETFOCUS_OFFSET))(this);
		}

		::System::Void OnLoginError(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONLOGINERROR_OFFSET))(this, arg);
		}

		::System::Void OnLoginGameServer(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONLOGINGAMESERVER_OFFSET))(this, args);
		}

		::System::Void OnSDKEnterGameSuccess(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKENTERGAMESUCCESS_OFFSET))(this, args);
		}

		::System::Void CloseLogin(::System::Action_1<::System::Boolean>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN_OFFSET))(this, cb);
		}

		::System::Void CloseLogin2(::System::Action_1<::System::Boolean>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN2_OFFSET))(this, cb);
		}

		::System::Void ShowServerListView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SHOWSERVERLISTVIEW_OFFSET))(this);
		}

		::System::Void RefreshServerText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_REFRESHSERVERTEXT_OFFSET))(this);
		}

		::System::Void ColoseSDKTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_COLOSESDKTIPS_OFFSET))(this);
		}

		::System::Void InitLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_INITLOGIN_OFFSET))(this);
		}

		::System::Void SetLoginMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETLOGINMODE_OFFSET))(this);
		}

		::System::Void SetVersionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETVERSIONINFO_OFFSET))(this);
		}

		::System::Void OpenAgeDailog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENAGEDAILOG_OFFSET))(this);
		}

		::System::Void OpenCloudPreLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENCLOUDPRELOGIN_OFFSET))(this);
		}

		::System::Void OnSetLanguageVoice(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSETLANGUAGEVOICE_OFFSET))(this, args);
		}

		::System::Void OpenSDKLogin(::MoleMole::UISDKLoginContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISDKLoginContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENSDKLOGIN_OFFSET))(this, context);
		}

		::System::Void OpenDebugLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENDEBUGLOGIN_OFFSET))(this);
		}

		::System::Void OpenResourceLoad(::MoleMole::UIResourceLoadWidgetContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIResourceLoadWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENRESOURCELOAD_OFFSET))(this, context);
		}

		::System::Void EnableLoginInputBlock(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ENABLELOGININPUTBLOCK_OFFSET))(this, arg);
		}

		::System::Void SetIgnoreCustomListNavigateState(::System::Boolean ignoreNavigate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETIGNORECUSTOMLISTNAVIGATESTATE_OFFSET))(this, ignoreNavigate);
		}

		::System::Void GamePadSetDefaultSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GAMEPADSETDEFAULTSELECT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean IsDispatchFrequentAttempts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ISDISPATCHFREQUENTATTEMPTS_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__ONUIINIT_B__13_0_OFFSET))(this);
		}

		::System::Void _StartLoginProcess_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__STARTLOGINPROCESS_B__20_0_OFFSET))(this);
		}

		::System::Void _StartLogin_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__STARTLOGIN_B__21_0_OFFSET))(this);
		}

		::System::Void _LoginInGameServer_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__LOGININGAMESERVER_B__30_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__58_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__ONUIOPEN_B__58_0_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__58_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__ONUIOPEN_B__58_1_OFFSET))(this, _);
		}

		::Enum_3_8E90989A26BC6232 __base_get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
