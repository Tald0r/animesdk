#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayableNodeType_TypeDefinitionIndex = 50652;

	enum class GalPlayableNodeType : ::System::Int32
	{
		Normal = 0,
		Action = 3,
		WhiteSwitchScene = 29,
		SwitchScene = 6,
		SwitchMainCityBGM = 13,
		SwitchSceneGroup = 25,
		SwitchBGM = 12,
		SubNarrator = 4,
		SubNormal = 18,
		Condition = 24,
		NarratorItemIcon = 5,
		Transition = 1,
		PictureStory = 28,
		SoundAction = 27,
		BubbleStorySequence = 30,
		NoAvatarNormal = 22,
		ContinuousShake = 26,
		Show3DModel = 21,
		JumpChapter = 7,
		BubbleStory = 8,
	};
}
