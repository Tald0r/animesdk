#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x190CBAF0)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x190CC210)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x190CC220)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x190CBAE0)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x190CC250)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoButton_TypeDefinitionIndex = 33936;

	class HoYoButton : public ::UnityEngine::UI::Button
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_AWAKE_OFFSET))(this);
		}
	};
}
