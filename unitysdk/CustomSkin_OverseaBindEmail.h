#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_48;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_OVERSEABINDEMAIL_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x7151F20)
#define CUSTOMSKIN_OVERSEABINDEMAIL_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x7151E80)
#define CUSTOMSKIN_OVERSEABINDEMAIL_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x7152640)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x71526F0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_INSTANCE_OFFSET UNITYSDK_OFFSET(0x7150970)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x7150AF0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x7152990)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONPWDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x7151FC0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7150CA0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x7152200)
#define CUSTOMSKIN_OVERSEABINDEMAIL_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x7150C10)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETEMAILINPUT_OFFSET UNITYSDK_OFFSET(0x71515C0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETGETCODEBTN_OFFSET UNITYSDK_OFFSET(0x7151B50)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x7151D70)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x71517A0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x7151C30)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETZONETIP_OFFSET UNITYSDK_OFFSET(0x7151540)
#define CUSTOMSKIN_OVERSEABINDEMAIL_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x7152450)
#define CUSTOMSKIN_OVERSEABINDEMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x7152030)
#define CUSTOMSKIN_OVERSEABINDEMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x7150A70)
#define CUSTOMSKIN_OVERSEABINDEMAIL__REQUESTVERIFYMESSAGE_B__18_0_OFFSET UNITYSDK_OFFSET(0x7152BC0)

inline static constexpr unsigned int CustomSkin_OverseaBindEmail_TypeDefinitionIndex = 67647;

class CustomSkin_OverseaBindEmail : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaBindEmail** StaticGet__instance()
	{
		return (::CustomSkin_OverseaBindEmail**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaBindEmail_TypeDefinitionIndex)->GetStaticField(0x29370);
	}
	::UnityEngine::Coroutine* coroutine; // 0x18
	::Class_2_79F6D62CE30E3F8E_48* _loginView; // 0x20
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x28
	::System::Boolean isRequestVerifyCode; // 0x30
	::System::Single countDownTime; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaBindEmail* Instance()
	{
		return ((::CustomSkin_OverseaBindEmail*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ONSHOW_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetZoneTip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETZONETIP_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void SetEmailInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETEMAILINPUT_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void OnPWDValueChange(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ONPWDVALUECHANGE_OFFSET))(this, input);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void SetGetCodeBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETGETCODEBTN_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void SetRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETREGISTER_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ENTERGAME_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__18_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__REQUESTVERIFYMESSAGE_B__18_0_OFFSET))(this, strResult);
	}
};
