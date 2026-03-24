#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderSequenceSectionType_TypeDefinitionIndex = 62163;

	enum class RenderSequenceSectionType : ::System::UInt32
	{
		None = 0x0,
		Sound = 0x3,
		SceneColorModify = 0x6,
		UV = 0x5,
		All = 0x1,
		Effect = 0x4,
		ScreenContent = 0x2,
	};
}
