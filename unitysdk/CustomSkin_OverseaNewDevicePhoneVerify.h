#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_1;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_CLICTOTHERBUTTON_OFFSET UNITYSDK_OFFSET(0x76AA010)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x76A9E40)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_DOBACK_OFFSET UNITYSDK_OFFSET(0x76A9AF0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_INIT_OFFSET UNITYSDK_OFFSET(0x76A8B80)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x76A88C0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x76A9630)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x76AA300)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x76A8A70)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_QUESTION_OFFSET UNITYSDK_OFFSET(0x76A9A50)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x76A9B90)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x76A9C60)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x76A9CD0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_SUBMIT_OFFSET UNITYSDK_OFFSET(0x76AA0B0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x76A9EF0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x76A9790)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x76A89F0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY__REQUESTVERIFYMESSAGE_B__13_0_OFFSET UNITYSDK_OFFSET(0x76AA490)

inline static constexpr unsigned int CustomSkin_OverseaNewDevicePhoneVerify_TypeDefinitionIndex = 54400;

class CustomSkin_OverseaNewDevicePhoneVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaNewDevicePhoneVerify** StaticGet__instance()
	{
		return (::CustomSkin_OverseaNewDevicePhoneVerify**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaNewDevicePhoneVerify_TypeDefinitionIndex)->GetStaticField(0x46460);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x18
	::UnityEngine::Coroutine* coroutine; // 0x20
	::Class_2_79F6D62CE30E3F8E_1* _view; // 0x28
	::System::Single countDownTime; // 0x30
	::System::Boolean isRequestVerifyCode; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaNewDevicePhoneVerify* Instance()
	{
		return ((::CustomSkin_OverseaNewDevicePhoneVerify*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONCLOSE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_INIT_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_UPDATETEXT_OFFSET))(this);
	}

	::System::Void Question()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_QUESTION_OFFSET))(this);
	}

	::System::Void DoBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_DOBACK_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void ClictOtherButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_CLICTOTHERBUTTON_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__13_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY__REQUESTVERIFYMESSAGE_B__13_0_OFFSET))(this, strResult);
	}
};
