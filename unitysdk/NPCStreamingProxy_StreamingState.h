#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NPCStreamingProxy_StreamingState_TypeDefinitionIndex = 60102;

enum class NPCStreamingProxy_StreamingState : ::System::Byte
{
	Loading = 0x1,
	Unloaded = 0x0,
	Loaded = 0x2,
};
