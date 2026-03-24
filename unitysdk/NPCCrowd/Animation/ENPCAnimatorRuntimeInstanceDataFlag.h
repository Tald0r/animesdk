#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ENPCAnimatorRuntimeInstanceDataFlag_TypeDefinitionIndex = 63892;

	enum class ENPCAnimatorRuntimeInstanceDataFlag : ::System::Byte
	{
		IsStarted = 0x2,
		DrivenByStateMachine = 0x4,
		None = 0x0,
		Looping = 0x1,
	};
}
