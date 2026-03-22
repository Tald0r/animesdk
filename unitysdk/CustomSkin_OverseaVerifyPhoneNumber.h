#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_48;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x6748C30)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x6748B90)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x6749140)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x6747AA0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x6747C20)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x6749440)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x6747E40)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x6748CD0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x67491F0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETGETCODEBTN_OFFSET UNITYSDK_OFFSET(0x67487E0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x6748980)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x6748590)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x67488B0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x6748F50)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SUBMIT_OFFSET UNITYSDK_OFFSET(0x6749260)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x6747BA0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__REQUESTVERIFYMESSAGE_B__14_0_OFFSET UNITYSDK_OFFSET(0x6749670)

inline static constexpr unsigned int CustomSkin_OverseaVerifyPhoneNumber_TypeDefinitionIndex = 65986;

class CustomSkin_OverseaVerifyPhoneNumber : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaVerifyPhoneNumber** StaticGet__instance()
	{
		return (::CustomSkin_OverseaVerifyPhoneNumber**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaVerifyPhoneNumber_TypeDefinitionIndex)->GetStaticField(0x3E150);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x18
	::UnityEngine::Coroutine* coroutine; // 0x20
	::Class_2_79F6D62CE30E3F8E_48* _view; // 0x28
	::System::Boolean isRequestVerifyCode; // 0x30
	::System::Single countDownTime; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaVerifyPhoneNumber* Instance()
	{
		return ((::CustomSkin_OverseaVerifyPhoneNumber*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONSHOW_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETNOTICE_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void SetGetCodeBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETGETCODEBTN_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void SetRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETREGISTER_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__14_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__REQUESTVERIFYMESSAGE_B__14_0_OFFSET))(this, strResult);
	}
};
