#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_1;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }

#define MODIFYREALNAMEPHONEVERIFY_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x78E0DF0)
#define MODIFYREALNAMEPHONEVERIFY_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x78E0E90)
#define MODIFYREALNAMEPHONEVERIFY_CLICKEMAILVERIFY_OFFSET UNITYSDK_OFFSET(0x78E0AD0)
#define MODIFYREALNAMEPHONEVERIFY_CLICKOHTERVERIFY_OFFSET UNITYSDK_OFFSET(0x78E0B70)
#define MODIFYREALNAMEPHONEVERIFY_CLICKVERIFY_OFFSET UNITYSDK_OFFSET(0x78E0C10)
#define MODIFYREALNAMEPHONEVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x78DF3D0)
#define MODIFYREALNAMEPHONEVERIFY_ONCLICKGETCAPTCHA_OFFSET UNITYSDK_OFFSET(0x78E0F30)
#define MODIFYREALNAMEPHONEVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x78DF550)
#define MODIFYREALNAMEPHONEVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x78E1290)
#define MODIFYREALNAMEPHONEVERIFY_ONGETCAPTCHACALLBACK_OFFSET UNITYSDK_OFFSET(0x78E0FF0)
#define MODIFYREALNAMEPHONEVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x78DF5C0)
#define MODIFYREALNAMEPHONEVERIFY_SETMAILINPUT_OFFSET UNITYSDK_OFFSET(0x78E0440)
#define MODIFYREALNAMEPHONEVERIFY_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x78E02A0)
#define MODIFYREALNAMEPHONEVERIFY_SETOTHERVERIFY_OFFSET UNITYSDK_OFFSET(0x78E0720)
#define MODIFYREALNAMEPHONEVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x78DF4D0)
#define MODIFYREALNAMEPHONEVERIFY__ONGETCAPTCHACALLBACK_B__15_0_OFFSET UNITYSDK_OFFSET(0x78E14D0)

inline static constexpr unsigned int ModifyRealNamePhoneVerify_TypeDefinitionIndex = 54179;

class ModifyRealNamePhoneVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::ModifyRealNamePhoneVerify** StaticGet__instance()
	{
		return (::ModifyRealNamePhoneVerify**)Il2CppClass::FromTypeDefinitionIndex(ModifyRealNamePhoneVerify_TypeDefinitionIndex)->GetStaticField(0x3EA10);
	}
	::Class_2_79F6D62CE30E3F8E_1* _view; // 0x18
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* popWidget; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY__CTOR_OFFSET))(this);
	}

	static ::ModifyRealNamePhoneVerify* Instance()
	{
		return ((::ModifyRealNamePhoneVerify*(*)())((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_ONSHOW_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetMailInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_SETMAILINPUT_OFFSET))(this);
	}

	::System::Void SetOtherVerify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_SETOTHERVERIFY_OFFSET))(this);
	}

	::System::Void ClickEmailVerify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_CLICKEMAILVERIFY_OFFSET))(this);
	}

	::System::Void ClickOhterVerify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_CLICKOHTERVERIFY_OFFSET))(this);
	}

	::System::Void ClickVerify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_CLICKVERIFY_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void OnClickGetCaptcha()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_ONCLICKGETCAPTCHA_OFFSET))(this);
	}

	::System::Void OnGetCaptchaCallback(::System::String* strArgs)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_ONGETCAPTCHACALLBACK_OFFSET))(this, strArgs);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _OnGetCaptchaCallback_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYREALNAMEPHONEVERIFY__ONGETCAPTCHACALLBACK_B__15_0_OFFSET))(this);
	}
};
