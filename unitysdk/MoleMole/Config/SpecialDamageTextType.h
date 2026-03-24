#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SpecialDamageTextType_TypeDefinitionIndex = 69485;

	enum class SpecialDamageTextType : ::System::Int32
	{
		Icemist = 3,
		Disorder = 12,
		EtherInfectionBreak = 17,
		PartDestroy = 11,
		Deflagrate = 1,
		Strike = 5,
		Frostburn = 13,
		Hiisazu = 4,
		Froze = 6,
		Fire = 9,
		HyperCoAttack = 18,
		LifeConversion = 21,
		Icebreak = 7,
		Elec = 10,
		Ether = 8,
		None = 0,
		EtherYixuan = 16,
		Thunderbolt = 2,
		PerfectCounter = 20,
		TotalizeDamage = 14,
		StrikeShunguang = 19,
		ExtraElementAbnormal = 15,
	};
}
