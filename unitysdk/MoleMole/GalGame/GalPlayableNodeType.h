#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayableNodeType_TypeDefinitionIndex = 75722;

	enum class GalPlayableNodeType : ::System::Int32
	{
		Transition = 1,
		NoAvatarNormal = 22,
		Normal = 0,
		Show3DModel = 21,
		JumpChapter = 7,
		SubNarrator = 4,
		SubNormal = 18,
		Action = 3,
		NarratorItemIcon = 5,
		BubbleStory = 8,
		SwitchMainCityBGM = 13,
		PictureStory = 28,
		BubbleStorySequence = 30,
		ContinuousShake = 26,
		Condition = 24,
		SoundAction = 27,
		SwitchScene = 6,
		WhiteSwitchScene = 29,
		SwitchBGM = 12,
		SwitchSceneGroup = 25,
	};
}
