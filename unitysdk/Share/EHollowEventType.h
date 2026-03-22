#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventType_TypeDefinitionIndex = 10340;

	enum class EHollowEventType : ::System::Int16
	{
		End = 20,
		ChangeLevel_Interact = 23,
		Battle = 30,
		Dialog_Positive = 41,
		Dialog_Negative = 42,
		BattleEnd = 22,
		All = 1,
		Battle_Normal = 31,
		Battle_Elite = 32,
		Battle_Boss = 33,
		ChangeLevel_Fight = 24,
		Dialog_Special = 43,
		Dialog = 40,
		Begin = 10,
		None = 0,
		InteractEnd = 21,
	};
}
