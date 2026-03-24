#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_1;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_CLICTOTHERBUTTON_OFFSET UNITYSDK_OFFSET(0x6D0A390)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x6D0A1C0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_DOBACK_OFFSET UNITYSDK_OFFSET(0x6D09E70)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_INIT_OFFSET UNITYSDK_OFFSET(0x6D08F00)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x6D08C40)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x6D099B0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x6D0A680)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x6D08DF0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_QUESTION_OFFSET UNITYSDK_OFFSET(0x6D09DD0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x6D09F10)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x6D09FE0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x6D0A050)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_SUBMIT_OFFSET UNITYSDK_OFFSET(0x6D0A430)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x6D0A270)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x6D09B10)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x6D08D70)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__REQUESTVERIFYMESSAGE_B__13_0_OFFSET UNITYSDK_OFFSET(0x6D0A810)

inline static constexpr unsigned int CustomSkin_OverseaNewDeviceEmailVerify_TypeDefinitionIndex = 49009;

class CustomSkin_OverseaNewDeviceEmailVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaNewDeviceEmailVerify** StaticGet__instance()
	{
		return (::CustomSkin_OverseaNewDeviceEmailVerify**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaNewDeviceEmailVerify_TypeDefinitionIndex)->GetStaticField(0x331B0);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x18
	::Class_2_79F6D62CE30E3F8E_1* _view; // 0x20
	::UnityEngine::Coroutine* coroutine; // 0x28
	::System::Single countDownTime; // 0x30
	::System::Boolean isRequestVerifyCode; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaNewDeviceEmailVerify* Instance()
	{
		return ((::CustomSkin_OverseaNewDeviceEmailVerify*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONCLOSE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_INIT_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_UPDATETEXT_OFFSET))(this);
	}

	::System::Void Question()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_QUESTION_OFFSET))(this);
	}

	::System::Void DoBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_DOBACK_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void ClictOtherButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_CLICTOTHERBUTTON_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__13_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__REQUESTVERIFYMESSAGE_B__13_0_OFFSET))(this, strResult);
	}
};
