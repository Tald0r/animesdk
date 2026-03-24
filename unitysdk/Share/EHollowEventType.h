#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventType_TypeDefinitionIndex = 17824;

	enum class EHollowEventType : ::System::Int16
	{
		Begin = 10,
		Dialog = 40,
		Battle_Elite = 32,
		Battle = 30,
		BattleEnd = 22,
		Dialog_Negative = 42,
		None = 0,
		ChangeLevel_Interact = 23,
		End = 20,
		Dialog_Positive = 41,
		Battle_Normal = 31,
		Battle_Boss = 33,
		All = 1,
		Dialog_Special = 43,
		InteractEnd = 21,
		ChangeLevel_Fight = 24,
	};
}
