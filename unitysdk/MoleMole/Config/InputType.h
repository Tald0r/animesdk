#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputType_TypeDefinitionIndex = 53268;

	enum class InputType : ::System::Int32
	{
		SkillBangbooJump = 20,
		Move = 0,
		SkillBangbooAbyssUltra = 22,
		RunMove = 26,
		SkillUltra = 4,
		Map = 9,
		SkillSoloAid = 15,
		InputLast = 27,
		HUDItem = 7,
		CamZoom = 5,
		InLevelPause = 12,
		CamRotate = 6,
		CharacterQTE = 10,
		HUDNotSkill = 25,
		SkillFunction = 14,
		Interact = 24,
		SkillSoloQTE = 16,
		Chip = 8,
		CharacterSwitch = 11,
		SkillBangbooEvade = 19,
		SkillA = 1,
		SkillBangbooAttack = 18,
		SkillD = 3,
		SkillEtherEyes = 23,
		CityRun = 13,
		SkillB = 2,
		ManualCoAttack = 17,
		SkillBangbooSpecial = 21,
		MaxCount = 28,
	};
}
