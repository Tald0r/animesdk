#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/SDKUIControllerInputKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYCODES_OFFSET UNITYSDK_OFFSET(0x18CE5560)
#define MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x18CE5DD0)
#define MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x18CE59E0)
#define MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x18CE61C0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIControllerInput_TypeDefinitionIndex = 19161;

	class SDKUIControllerInput : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* GetKeyCodes(::MiHoYo::SDK::PS::SDKUIControllerInputKey key)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*(*)(::MiHoYo::SDK::PS::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYCODES_OFFSET))(key);
		}

		static ::System::Boolean GetKeyUp(::MiHoYo::SDK::PS::SDKUIControllerInputKey key)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::PS::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYUP_OFFSET))(key);
		}

		static ::System::Boolean GetKeyDown(::MiHoYo::SDK::PS::SDKUIControllerInputKey key)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::PS::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYDOWN_OFFSET))(key);
		}

		static ::System::Boolean GetKey(::MiHoYo::SDK::PS::SDKUIControllerInputKey key)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::PS::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEY_OFFSET))(key);
		}
	};
}
