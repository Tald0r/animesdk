#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearTransition_ConnectType_TypeDefinitionIndex = 63745;

	enum class UILinearTransition_ConnectType : ::System::Int32
	{
		TwoToOne = 2,
		OneToOne = 0,
		OneToTwo = 1,
		TwoToTwo = 3,
	};
}
