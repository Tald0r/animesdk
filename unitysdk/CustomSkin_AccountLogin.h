#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_58;
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace MoleMole { class UITextLink; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define CUSTOMSKIN_ACCOUNTLOGIN_CLICKTAPTAPLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x9D325F0)
#define CUSTOMSKIN_ACCOUNTLOGIN_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x9D320C0)
#define CUSTOMSKIN_ACCOUNTLOGIN_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x9D32F30)
#define CUSTOMSKIN_ACCOUNTLOGIN_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x9D32BA0)
#define CUSTOMSKIN_ACCOUNTLOGIN_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x9D32020)
#define CUSTOMSKIN_ACCOUNTLOGIN_GETTHIRDBUTTONNAME_OFFSET UNITYSDK_OFFSET(0x9D31F00)
#define CUSTOMSKIN_ACCOUNTLOGIN_GUESTLOGIN_OFFSET UNITYSDK_OFFSET(0x9D32890)
#define CUSTOMSKIN_ACCOUNTLOGIN_INITPERSISTENCHECK_OFFSET UNITYSDK_OFFSET(0x9D31CC0)
#define CUSTOMSKIN_ACCOUNTLOGIN_INIT_OFFSET UNITYSDK_OFFSET(0x9D2F910)
#define CUSTOMSKIN_ACCOUNTLOGIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9D2EB00)
#define CUSTOMSKIN_ACCOUNTLOGIN_ISREGISTERVISIBLE_OFFSET UNITYSDK_OFFSET(0x9D309E0)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONBACK_OFFSET UNITYSDK_OFFSET(0x9D32160)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x9D329D0)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONCLICKPERSISTENCHECK_OFFSET UNITYSDK_OFFSET(0x9D32690)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9D2EC80)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x9D2EF00)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x9D32FD0)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET UNITYSDK_OFFSET(0x9D331E0)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONOPENLOGIN_OFFSET UNITYSDK_OFFSET(0x9D2F090)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONPHONELOGINCANCEL_OFFSET UNITYSDK_OFFSET(0x9D33420)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONREGISTERACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D32360)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9D2EDB0)
#define CUSTOMSKIN_ACCOUNTLOGIN_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x9D33560)
#define CUSTOMSKIN_ACCOUNTLOGIN_PHONELOGIN_OFFSET UNITYSDK_OFFSET(0x9D32930)
#define CUSTOMSKIN_ACCOUNTLOGIN_REFRESHCONSOLERELATEUI_OFFSET UNITYSDK_OFFSET(0x9D307D0)
#define CUSTOMSKIN_ACCOUNTLOGIN_REGISTER_OFFSET UNITYSDK_OFFSET(0x9D322A0)
#define CUSTOMSKIN_ACCOUNTLOGIN_SETPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D305E0)
#define CUSTOMSKIN_ACCOUNTLOGIN_SETTHIRDLOGIN_OFFSET UNITYSDK_OFFSET(0x9D30B00)
#define CUSTOMSKIN_ACCOUNTLOGIN_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x9D31840)
#define CUSTOMSKIN_ACCOUNTLOGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2EC00)
#define CUSTOMSKIN_ACCOUNTLOGIN__INIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x9D335D0)
#define CUSTOMSKIN_ACCOUNTLOGIN__INIT_B__14_1_OFFSET UNITYSDK_OFFSET(0x9D33790)
#define CUSTOMSKIN_ACCOUNTLOGIN__INIT_B__14_2_OFFSET UNITYSDK_OFFSET(0x9D33800)
#define CUSTOMSKIN_ACCOUNTLOGIN___BASE_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x9D33870)

inline static constexpr unsigned int CustomSkin_AccountLogin_TypeDefinitionIndex = 43536;

class CustomSkin_AccountLogin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_AccountLogin** StaticGet__instance()
	{
		return (::CustomSkin_AccountLogin**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLogin_TypeDefinitionIndex)->GetStaticField(0x44470);
	}
	// static const ::System::String* LINK_ID_USERAGREEMENT; // 0x0
	// static const ::System::String* LINK_ID_PRIVACY; // 0x0
	::Class_2_79F6D62CE30E3F8E_58* _loginView; // 0x18
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* _acctountPage; // 0x20
	::Il2CppArray<::System::String*>* thirdEntryNameList; // 0x28
	::Il2CppArray<::UnityEngine::Events::UnityAction*>* thirdEntryCallback; // 0x30
	::MoleMole::UITextLink* textLink; // 0x38
	::Il2CppArray<::Foundation::AssetPath>* thirdEntryIconList; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_AccountLogin* Instance()
	{
		return ((::CustomSkin_AccountLogin*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONSHOW_OFFSET))(this);
	}

	::System::Void OnElementStatusChanged(::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONELEMENTSTATUSCHANGED_OFFSET))(this, strElementID, strStatusName, strStatusValue);
	}

	::System::Void OnOpenLogin(::MoleMole::UIGeneralSDKLoginDialogPopWindowController* widget)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralSDKLoginDialogPopWindowController*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONOPENLOGIN_OFFSET))(this, widget);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_INIT_OFFSET))(this);
	}

	::System::Void InitPersistenCheck()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_INITPERSISTENCHECK_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_UPDATETEXT_OFFSET))(this);
	}

	::System::Void RefreshConsoleRelateUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_REFRESHCONSOLERELATEUI_OFFSET))(this);
	}

	::System::Void SetThirdLogin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_SETTHIRDLOGIN_OFFSET))(this);
	}

	::System::String* GetThirdButtonName(::System::String* thirdName)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_GETTHIRDBUTTONNAME_OFFSET))(this, thirdName);
	}

	::System::Void ForgetPassword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_FORGETPASSWORD_OFFSET))(this);
	}

	::System::Void ClickUserAgreementButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_CLICKUSERAGREEMENTBUTTON_OFFSET))(this);
	}

	::System::Void OnBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONBACK_OFFSET))(this);
	}

	::System::Void Register()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_REGISTER_OFFSET))(this);
	}

	::System::Void OnRegisterAccount(::System::String* strArgs)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONREGISTERACCOUNT_OFFSET))(this, strArgs);
	}

	::System::Void ClickTapTapLoginButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_CLICKTAPTAPLOGINBUTTON_OFFSET))(this);
	}

	::System::Void OnClickPersistenCheck()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONCLICKPERSISTENCHECK_OFFSET))(this);
	}

	::System::Void GuestLogin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_GUESTLOGIN_OFFSET))(this);
	}

	::System::Void PhoneLogin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_PHONELOGIN_OFFSET))(this);
	}

	::System::Void OnBtnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ENTERGAME_OFFSET))(this);
	}

	::System::Void ClickUserPrivacyButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_CLICKUSERPRIVACYBUTTON_OFFSET))(this);
	}

	::System::Void OnHrefClick(::System::String* hrefName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONHREFCLICK_OFFSET))(this, hrefName);
	}

	::System::Void OnOpenConsoleProtocolWindow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET))(this);
	}

	::System::Void OnPhoneLoginCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONPHONELOGINCANCEL_OFFSET))(this);
	}

	::System::Void OnUILayoutPlatformChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this);
	}

	::System::Void SetPlatform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_SETPLATFORM_OFFSET))(this);
	}

	::System::Boolean IsRegisterVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN_ISREGISTERVISIBLE_OFFSET))(this);
	}

	::System::Void _Init_b__14_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN__INIT_B__14_0_OFFSET))(this);
	}

	::System::Void _Init_b__14_1(::System::String* acctount)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN__INIT_B__14_1_OFFSET))(this, acctount);
	}

	::System::Void _Init_b__14_2(::System::String* strNewText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN__INIT_B__14_2_OFFSET))(this, strNewText);
	}

	::System::Void __base_OnElementStatusChanged(::System::String* P0, ::System::String* P1, ::System::String* P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN___BASE_ONELEMENTSTATUSCHANGED_OFFSET))(this, P0, P1, P2);
	}
};
