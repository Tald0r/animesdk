#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_Mode_TypeDefinitionIndex = 58080;

	enum class UITableViewCell_Mode : ::System::Int32
	{
		CalcOnce = 1,
		NoCalc = 3,
		CalcEvery = 2,
		Fixed = 0,
	};
}
