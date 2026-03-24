#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputType_TypeDefinitionIndex = 75852;

	enum class InputType : ::System::Int32
	{
		SkillSoloQTE = 16,
		ManualCoAttack = 17,
		SkillD = 3,
		Move = 0,
		SkillEtherEyes = 23,
		SkillBangbooEvade = 19,
		InLevelPause = 12,
		HUDItem = 7,
		HUDNotSkill = 25,
		MaxCount = 28,
		Chip = 8,
		SkillBangbooAttack = 18,
		CharacterQTE = 10,
		CharacterSwitch = 11,
		CamZoom = 5,
		Map = 9,
		CamRotate = 6,
		CityRun = 13,
		InputLast = 27,
		SkillFunction = 14,
		Interact = 24,
		RunMove = 26,
		SkillBangbooSpecial = 21,
		SkillB = 2,
		SkillUltra = 4,
		SkillSoloAid = 15,
		SkillBangbooAbyssUltra = 22,
		SkillA = 1,
		SkillBangbooJump = 20,
	};
}
