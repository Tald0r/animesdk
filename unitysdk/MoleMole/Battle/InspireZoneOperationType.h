#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int InspireZoneOperationType_TypeDefinitionIndex = 76551;

	enum class InspireZoneOperationType : ::System::Int32
	{
		None = 0,
		QTE_2 = 5,
		QTE_3 = 6,
		DodgeDummySuccess = 2,
		QTE_1 = 4,
		CommonAid = 14,
		BeHitAid = 3,
		DisorderNormal = 19,
		StunDestroy = 8,
		DisorderBoss = 21,
		CounterHitOther = 1,
		PartDestroy = 11,
		Exhausted = 9,
		Disorder = 15,
		ElementAbnormalNormal = 16,
		ParryAid = 12,
		ElementAbnormalBoss = 18,
		EvadeAid = 13,
		ElementAbnormalElite = 17,
		DisorderElite = 20,
		ElementAbnormal = 10,
	};
}
