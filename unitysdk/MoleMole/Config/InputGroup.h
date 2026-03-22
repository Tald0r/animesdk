#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputGroup_TypeDefinitionIndex = 45611;

	enum class InputGroup : ::System::Int32
	{
		NotSkillHUD = 6,
		CharacterSkill = 1,
		CharacterMove = 0,
		CharacterQTEMute = 4,
		CharacterUI = 2,
		None = 8,
		CameraMove = 3,
		All = 7,
		CharacterSwitchMute = 5,
	};
}
