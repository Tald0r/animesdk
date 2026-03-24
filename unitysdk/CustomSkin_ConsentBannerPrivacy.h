#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_4446D357C89B715C;
namespace MoleMole { class UIGeneralUserAgreementDialogPopWindowController; }
namespace MoleMole { class UITextLink; }
namespace System { class String; }

#define CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKACCEPTBUTTON_OFFSET UNITYSDK_OFFSET(0x71F3FB0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKMANAGEPREFERENCESBUTTON_OFFSET UNITYSDK_OFFSET(0x71F40F0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKREFUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x71F4050)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x71F3090)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x71F3240)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x71F4190)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET UNITYSDK_OFFSET(0x71F4390)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x71F32C0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x71F4580)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_OPENPROTOCOLPRIVACYHYPERLINK_OFFSET UNITYSDK_OFFSET(0x71F42F0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_SETLAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x71F3E60)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x71F37D0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY__CTOR_OFFSET UNITYSDK_OFFSET(0x71F31C0)

inline static constexpr unsigned int CustomSkin_ConsentBannerPrivacy_TypeDefinitionIndex = 69655;

class CustomSkin_ConsentBannerPrivacy : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_ConsentBannerPrivacy** StaticGet__instance()
	{
		return (::CustomSkin_ConsentBannerPrivacy**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_ConsentBannerPrivacy_TypeDefinitionIndex)->GetStaticField(0x45750);
	}
	// static const ::System::String* LINK_ID_PRIVACY; // 0x0
	::MoleMole::UIGeneralUserAgreementDialogPopWindowController* _controller; // 0x18
	::Class_2_4446D357C89B715C* _view; // 0x20
	::MoleMole::UITextLink* textLink; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_ConsentBannerPrivacy* Instance()
	{
		return ((::CustomSkin_ConsentBannerPrivacy*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONSHOW_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_UPDATETEXT_OFFSET))(this);
	}

	::System::Void ClickAcceptButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKACCEPTBUTTON_OFFSET))(this);
	}

	::System::Void ClickRefuseButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKREFUSEBUTTON_OFFSET))(this);
	}

	::System::Void ClickManagePreferencesButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKMANAGEPREFERENCESBUTTON_OFFSET))(this);
	}

	::System::Void OnHrefClick(::System::String* hrefName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONHREFCLICK_OFFSET))(this, hrefName);
	}

	::System::Void OpenProtocolPrivacyHyperLink()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_OPENPROTOCOLPRIVACYHYPERLINK_OFFSET))(this);
	}

	::System::Void OnOpenConsoleProtocolWindow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET))(this);
	}

	::System::Void OnUILayoutPlatformChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this);
	}

	::System::Void SetLayoutPlatform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_SETLAYOUTPLATFORM_OFFSET))(this);
	}
};
