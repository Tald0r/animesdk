#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define CUSTOMSKIN_SDKALERT_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9093610)
#define CUSTOMSKIN_SDKALERT_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x9093C20)
#define CUSTOMSKIN_SDKALERT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x9093B80)
#define CUSTOMSKIN_SDKALERT_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9093790)
#define CUSTOMSKIN_SDKALERT_ONSHOW_OFFSET UNITYSDK_OFFSET(0x90938C0)
#define CUSTOMSKIN_SDKALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x9093710)

inline static constexpr unsigned int CustomSkin_SDKAlert_TypeDefinitionIndex = 37522;

class CustomSkin_SDKAlert : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_SDKAlert** StaticGet__instance()
	{
		return (::CustomSkin_SDKAlert**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_SDKAlert_TypeDefinitionIndex)->GetStaticField(0x44860);
	}
	::MoleMole::UILoginMessageBoxPopWindowController* tip; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_SDKAlert* Instance()
	{
		return ((::CustomSkin_SDKAlert*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClickConfirm()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_ONCLICKCONFIRM_OFFSET))(this);
	}

	::System::Void OnClickCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_ONCLICKCANCEL_OFFSET))(this);
	}
};
