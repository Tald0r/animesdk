#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::UI::FlowerShop
{
	inline static constexpr unsigned int ESlotType_TypeDefinitionIndex = 64564;

	enum class ESlotType : ::System::Int32
	{
		Slot2 = 2,
		Slot1 = 1,
		InValid = -1,
		Base = 0,
		Slot3 = 3,
	};
}
