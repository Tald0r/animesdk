#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_State_TypeDefinitionIndex = 58079;

	enum class UITableViewCell_State : ::System::Int32
	{
		Dimmed = 1,
		Disabled = 3,
		Selected = 2,
		Normal = 0,
	};
}
