#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputGroup_TypeDefinitionIndex = 42207;

	enum class InputGroup : ::System::Int32
	{
		CharacterUI = 2,
		CharacterSwitchMute = 5,
		NotSkillHUD = 6,
		All = 7,
		CharacterQTEMute = 4,
		CameraMove = 3,
		None = 8,
		CharacterSkill = 1,
		CharacterMove = 0,
	};
}
