#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define CUSTOMSKIN_TOAST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9F43C30)
#define CUSTOMSKIN_TOAST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9F43F10)
#define CUSTOMSKIN_TOAST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9F43DB0)
#define CUSTOMSKIN_TOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x9F43D30)

inline static constexpr unsigned int CustomSkin_Toast_TypeDefinitionIndex = 66962;

class CustomSkin_Toast : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_Toast** StaticGet__instance()
	{
		return (::CustomSkin_Toast**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_Toast_TypeDefinitionIndex)->GetStaticField(0x43970);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_Toast* Instance()
	{
		return ((::CustomSkin_Toast*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST_ONCLOSE_OFFSET))(this);
	}
};
