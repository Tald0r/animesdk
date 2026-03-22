#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceEnumerationFlags_TypeDefinitionIndex = 70696;

enum class Audio_PINVOKE_DeviceEnumerationFlags : ::System::Int32
{
	IncludePhantoms = 131072,
	None = 0,
	AllDevices = 0,
	ForceFeedback = 256,
	IncludeAliases = 65536,
	IncludeHidden = 262144,
	AttachedOnly = 1,
};
