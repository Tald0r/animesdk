#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_1;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }

#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_CLICKBIND_OFFSET UNITYSDK_OFFSET(0x9C3FF10)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_CLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x9C3FE70)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C3F220)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C3F3D0)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONREGISTERCLICK_OFFSET UNITYSDK_OFFSET(0x9C3FFB0)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9C3F450)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x9C3FCE0)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9C3F350)

inline static constexpr unsigned int CustomSkin_OverseaBindAccountPopup_TypeDefinitionIndex = 44312;

class CustomSkin_OverseaBindAccountPopup : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaBindAccountPopup** StaticGet__instance()
	{
		return (::CustomSkin_OverseaBindAccountPopup**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaBindAccountPopup_TypeDefinitionIndex)->GetStaticField(0x40E70);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _popWidget; // 0x18
	::Class_2_79F6D62CE30E3F8E_1* _view; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaBindAccountPopup* Instance()
	{
		return ((::CustomSkin_OverseaBindAccountPopup*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONSHOW_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_UPDATETEXT_OFFSET))(this);
	}

	::System::Void ClickClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_CLICKCLOSE_OFFSET))(this);
	}

	::System::Void ClickBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_CLICKBIND_OFFSET))(this);
	}

	::System::Void OnRegisterClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONREGISTERCLICK_OFFSET))(this);
	}
};
