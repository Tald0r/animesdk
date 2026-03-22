#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_Mode_TypeDefinitionIndex = 50908;

	enum class UITableViewCell_Mode : ::System::Int32
	{
		CalcEvery = 2,
		NoCalc = 3,
		Fixed = 0,
		CalcOnce = 1,
	};
}
