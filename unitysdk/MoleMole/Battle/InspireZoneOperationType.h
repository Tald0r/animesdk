#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int InspireZoneOperationType_TypeDefinitionIndex = 63981;

	enum class InspireZoneOperationType : ::System::Int32
	{
		ElementAbnormalBoss = 18,
		QTE_1 = 4,
		None = 0,
		ElementAbnormal = 10,
		DisorderNormal = 19,
		Disorder = 15,
		DisorderBoss = 21,
		EvadeAid = 13,
		DisorderElite = 20,
		CounterHitOther = 1,
		CommonAid = 14,
		ElementAbnormalElite = 17,
		ElementAbnormalNormal = 16,
		BeHitAid = 3,
		QTE_3 = 6,
		ParryAid = 12,
		QTE_2 = 5,
		StunDestroy = 8,
		Exhausted = 9,
		PartDestroy = 11,
		DodgeDummySuccess = 2,
	};
}
