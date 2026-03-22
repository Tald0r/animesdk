#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_48;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }

#define CUSTOMSKIN_OVERSEADEVICEALERT_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x906A150)
#define CUSTOMSKIN_OVERSEADEVICEALERT_CLICKBIND_OFFSET UNITYSDK_OFFSET(0x9069F70)
#define CUSTOMSKIN_OVERSEADEVICEALERT_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x906A1F0)
#define CUSTOMSKIN_OVERSEADEVICEALERT_CLICKNOW_OFFSET UNITYSDK_OFFSET(0x9069ED0)
#define CUSTOMSKIN_OVERSEADEVICEALERT_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9068E40)
#define CUSTOMSKIN_OVERSEADEVICEALERT_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9068FC0)
#define CUSTOMSKIN_OVERSEADEVICEALERT_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x906A290)
#define CUSTOMSKIN_OVERSEADEVICEALERT_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9069040)
#define CUSTOMSKIN_OVERSEADEVICEALERT_SETDEVICELIST_OFFSET UNITYSDK_OFFSET(0x9069B90)
#define CUSTOMSKIN_OVERSEADEVICEALERT_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x9069A00)
#define CUSTOMSKIN_OVERSEADEVICEALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x9068F40)

inline static constexpr unsigned int CustomSkin_OverseaDeviceAlert_TypeDefinitionIndex = 41028;

class CustomSkin_OverseaDeviceAlert : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaDeviceAlert** StaticGet__instance()
	{
		return (::CustomSkin_OverseaDeviceAlert**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaDeviceAlert_TypeDefinitionIndex)->GetStaticField(0x40990);
	}
	::Class_2_79F6D62CE30E3F8E_48* _view; // 0x18
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* popWidget; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaDeviceAlert* Instance()
	{
		return ((::CustomSkin_OverseaDeviceAlert*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_ONSHOW_OFFSET))(this);
	}

	::System::Void ClicKnow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_CLICKNOW_OFFSET))(this);
	}

	::System::Void ClickBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_CLICKBIND_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetDeviceList()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_SETDEVICELIST_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_ONCONSOLECANCEL_OFFSET))(this);
	}
};
