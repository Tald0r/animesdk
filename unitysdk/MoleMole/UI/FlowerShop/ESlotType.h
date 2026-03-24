#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::UI::FlowerShop
{
	inline static constexpr unsigned int ESlotType_TypeDefinitionIndex = 76497;

	enum class ESlotType : ::System::Int32
	{
		InValid = -1,
		Slot1 = 1,
		Base = 0,
		Slot3 = 3,
		Slot2 = 2,
	};
}
