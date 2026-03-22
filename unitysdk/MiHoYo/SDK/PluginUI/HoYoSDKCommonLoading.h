#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1954CE30)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1954D050)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1954CF90)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING__CTOR_OFFSET UNITYSDK_OFFSET(0x1954CF10)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonLoading_TypeDefinitionIndex = 33971;

	class HoYoSDKCommonLoading : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKCommonLoading_TypeDefinitionIndex)->GetStaticField(0x247A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONCLOSE_OFFSET))(this);
		}
	};
}
