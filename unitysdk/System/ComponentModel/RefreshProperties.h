#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int RefreshProperties_TypeDefinitionIndex = 3023;

	enum class RefreshProperties : ::System::Int32
	{
		None = 0,
		All = 1,
		Repaint = 2,
	};
}
