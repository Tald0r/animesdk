#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NPCStreamingProxy_StreamingState_TypeDefinitionIndex = 36803;

enum class NPCStreamingProxy_StreamingState : ::System::Byte
{
	Loaded = 0x2,
	Unloaded = 0x0,
	Loading = 0x1,
};
