#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SpecialDamageTextType_TypeDefinitionIndex = 56998;

	enum class SpecialDamageTextType : ::System::Int32
	{
		Thunderbolt = 2,
		Strike = 5,
		None = 0,
		StrikeShunguang = 19,
		PartDestroy = 11,
		LifeConversion = 21,
		EtherInfectionBreak = 17,
		Ether = 8,
		Deflagrate = 1,
		TotalizeDamage = 14,
		Hiisazu = 4,
		Frostburn = 13,
		Disorder = 12,
		HyperCoAttack = 18,
		Icemist = 3,
		ExtraElementAbnormal = 15,
		PerfectCounter = 20,
		Fire = 9,
		Elec = 10,
		EtherYixuan = 16,
		Froze = 6,
		Icebreak = 7,
	};
}
