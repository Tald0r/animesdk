#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AudioMixerDeviceSettingType_TypeDefinitionIndex = 38902;

	enum class AudioMixerDeviceSettingType : ::System::Int32
	{
		HeadPhones = 1,
		TV = 4,
		SoundBar = 2,
		None = 0,
		Phone = 3,
	};
}
