#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_48;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x6E5EE60)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x6E5EF00)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKVERIFY_OFFSET UNITYSDK_OFFSET(0x6E5EC80)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x6E5DEA0)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCLICKGETCAPTCHA_OFFSET UNITYSDK_OFFSET(0x6E5EFA0)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x6E5E020)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x6E5F280)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONREQUESTCAPTCHACALLBACK_OFFSET UNITYSDK_OFFSET(0x6E5F060)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x6E5E090)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_SETMAILINPUT_OFFSET UNITYSDK_OFFSET(0x6E5E950)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x6E5E790)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x6E5DFA0)

inline static constexpr unsigned int CustomSkin_SafePhoneEmailVerify_TypeDefinitionIndex = 62363;

class CustomSkin_SafePhoneEmailVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_SafePhoneEmailVerify** StaticGet__instance()
	{
		return (::CustomSkin_SafePhoneEmailVerify**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_SafePhoneEmailVerify_TypeDefinitionIndex)->GetStaticField(0x2E4D0);
	}
	::Class_2_79F6D62CE30E3F8E_48* _view; // 0x18
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* popWidget; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_SafePhoneEmailVerify* Instance()
	{
		return ((::CustomSkin_SafePhoneEmailVerify*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONSHOW_OFFSET))(this);
	}

	::System::Void ClickVerify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKVERIFY_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetMailInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_SETMAILINPUT_OFFSET))(this);
	}

	::System::Void OnClickGetCaptcha()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCLICKGETCAPTCHA_OFFSET))(this);
	}

	::System::Void OnRequestCaptchaCallback(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONREQUESTCAPTCHACALLBACK_OFFSET))(this, strResult);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCONSOLECANCEL_OFFSET))(this);
	}
};
