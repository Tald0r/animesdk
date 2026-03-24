#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageContext_NavOriginType_TypeDefinitionIndex = 38261;

	enum class UIMainCityNavigationPageContext_NavOriginType : ::System::Int32
	{
		Default = 0,
		Bus = 2,
		Motor = 4,
		Subway = 3,
		Car = 1,
	};
}
