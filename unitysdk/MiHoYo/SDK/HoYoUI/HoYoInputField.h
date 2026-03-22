#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/InputField.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x18F391F0)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x18F39420)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0x18F39430)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x18F391E0)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x18F395F0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoInputField_TypeDefinitionIndex = 33939;

	class HoYoInputField : public ::UnityEngine::UI::InputField
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x210

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_AWAKE_OFFSET))(this);
		}
	};
}
