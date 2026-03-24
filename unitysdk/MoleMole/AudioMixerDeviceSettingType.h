#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AudioMixerDeviceSettingType_TypeDefinitionIndex = 59552;

	enum class AudioMixerDeviceSettingType : ::System::Int32
	{
		HeadPhones = 1,
		None = 0,
		Phone = 3,
		SoundBar = 2,
		TV = 4,
	};
}
