#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79AE422BA06F6D26_7;
namespace MoleMole { class UIGeneralDescriptConfrimDialogPopWindowController; }

#define CUSTOMSKIN_REACTIVATION_CLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x64581A0)
#define CUSTOMSKIN_REACTIVATION_CLICKCONFRIM_OFFSET UNITYSDK_OFFSET(0x6458240)
#define CUSTOMSKIN_REACTIVATION_INSTANCE_OFFSET UNITYSDK_OFFSET(0x64578E0)
#define CUSTOMSKIN_REACTIVATION_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x6457A60)
#define CUSTOMSKIN_REACTIVATION_ONSHOW_OFFSET UNITYSDK_OFFSET(0x6457BA0)
#define CUSTOMSKIN_REACTIVATION__CTOR_OFFSET UNITYSDK_OFFSET(0x64579E0)

inline static constexpr unsigned int CustomSkin_Reactivation_TypeDefinitionIndex = 73276;

class CustomSkin_Reactivation : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_Reactivation** StaticGet__instance()
	{
		return (::CustomSkin_Reactivation**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_Reactivation_TypeDefinitionIndex)->GetStaticField(0x3F960);
	}
	::Class_2_79AE422BA06F6D26_7* _view; // 0x18
	::MoleMole::UIGeneralDescriptConfrimDialogPopWindowController* _controller; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_Reactivation* Instance()
	{
		return ((::CustomSkin_Reactivation*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_ONSHOW_OFFSET))(this);
	}

	::System::Void ClickClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_CLICKCLOSE_OFFSET))(this);
	}

	::System::Void ClickConfrim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_CLICKCONFRIM_OFFSET))(this);
	}
};
