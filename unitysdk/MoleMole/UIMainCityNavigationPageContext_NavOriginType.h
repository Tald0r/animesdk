#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageContext_NavOriginType_TypeDefinitionIndex = 64222;

	enum class UIMainCityNavigationPageContext_NavOriginType : ::System::Int32
	{
		Default = 0,
		Car = 1,
		Motor = 4,
		Subway = 3,
		Bus = 2,
	};
}
