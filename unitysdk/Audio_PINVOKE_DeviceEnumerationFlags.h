#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceEnumerationFlags_TypeDefinitionIndex = 59825;

enum class Audio_PINVOKE_DeviceEnumerationFlags : ::System::Int32
{
	IncludeAliases = 65536,
	AttachedOnly = 1,
	IncludeHidden = 262144,
	AllDevices = 0,
	ForceFeedback = 256,
	None = 0,
	IncludePhantoms = 131072,
};
