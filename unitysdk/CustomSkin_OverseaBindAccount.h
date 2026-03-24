#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_1;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_OVERSEABINDACCOUNT_CLICKBACK_OFFSET UNITYSDK_OFFSET(0x87C9D20)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_CLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x87C9DC0)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_CLICKFORGOT_OFFSET UNITYSDK_OFFSET(0x87C9E60)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_INSTANCE_OFFSET UNITYSDK_OFFSET(0x87C8D60)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_ONBINDCLICKED_OFFSET UNITYSDK_OFFSET(0x87C9F20)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x87C8EE0)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x87CA5C0)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_ONFORGETPASSWORDCALLBACK_OFFSET UNITYSDK_OFFSET(0x87CA260)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_ONSHOW_OFFSET UNITYSDK_OFFSET(0x87C8F60)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_REGISTTEXTACTION_OFFSET UNITYSDK_OFFSET(0x87C9C30)
#define CUSTOMSKIN_OVERSEABINDACCOUNT_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x87C9980)
#define CUSTOMSKIN_OVERSEABINDACCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x87C8E60)
#define CUSTOMSKIN_OVERSEABINDACCOUNT__REGISTTEXTACTION_B__7_0_OFFSET UNITYSDK_OFFSET(0x87CA800)
#define CUSTOMSKIN_OVERSEABINDACCOUNT__REGISTTEXTACTION_B__7_1_OFFSET UNITYSDK_OFFSET(0x87CA880)

inline static constexpr unsigned int CustomSkin_OverseaBindAccount_TypeDefinitionIndex = 37530;

class CustomSkin_OverseaBindAccount : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaBindAccount** StaticGet__instance()
	{
		return (::CustomSkin_OverseaBindAccount**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaBindAccount_TypeDefinitionIndex)->GetStaticField(0x2FDA0);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _popWidget; // 0x18
	::Class_2_79F6D62CE30E3F8E_1* _view; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaBindAccount* Instance()
	{
		return ((::CustomSkin_OverseaBindAccount*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_ONSHOW_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_UPDATETEXT_OFFSET))(this);
	}

	::System::Void RegistTextAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_REGISTTEXTACTION_OFFSET))(this);
	}

	::System::Void ClickBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_CLICKBACK_OFFSET))(this);
	}

	::System::Void ClickClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_CLICKCLOSE_OFFSET))(this);
	}

	::System::Void ClickForgot()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_CLICKFORGOT_OFFSET))(this);
	}

	::System::Void OnBindClicked()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_ONBINDCLICKED_OFFSET))(this);
	}

	::System::Void OnForgetPasswordCallback(::System::String* strArgs)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_ONFORGETPASSWORDCALLBACK_OFFSET))(this, strArgs);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RegistTextAction_b__7_0(::System::String* strNewText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT__REGISTTEXTACTION_B__7_0_OFFSET))(this, strNewText);
	}

	::System::Void _RegistTextAction_b__7_1(::System::String* strNewText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNT__REGISTTEXTACTION_B__7_1_OFFSET))(this, strNewText);
	}
};
