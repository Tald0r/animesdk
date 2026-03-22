#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController_BtnCDState_TypeDefinitionIndex = 49206;

	enum class UISkillButtonBaseController_BtnCDState : ::System::Int32
	{
		CountCD = 3,
		None = 0,
		ForceCD = 2,
		SilentCD = 1,
	};
}
