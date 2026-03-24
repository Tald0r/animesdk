#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Interaction
{
	inline static constexpr unsigned int AxisSign_TypeDefinitionIndex = 74419;

	enum class AxisSign : ::System::Int32
	{
		Yn = 3,
		Zp = 4,
		Yp = 2,
		Zn = 5,
		None = -1,
		Xn = 1,
		Xp = 0,
	};
}
