#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LoginSettingShowState_TypeDefinitionIndex = 59707;

	enum class LoginSettingShowState : ::System::Int32
	{
		Default = 0,
		ForceShow = 1,
		ForceHide = 2,
	};
}
