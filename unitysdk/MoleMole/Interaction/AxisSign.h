#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Interaction
{
	inline static constexpr unsigned int AxisSign_TypeDefinitionIndex = 64987;

	enum class AxisSign : ::System::Int32
	{
		Xp = 0,
		Yn = 3,
		None = -1,
		Zp = 4,
		Zn = 5,
		Yp = 2,
		Xn = 1,
	};
}
