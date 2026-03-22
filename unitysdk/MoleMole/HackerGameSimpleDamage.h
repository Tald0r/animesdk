#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackerGameBaseDamage.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"

#define MOLEMOLE_HACKERGAMESIMPLEDAMAGE_APPLY_OFFSET UNITYSDK_OFFSET(0xC2D3FA0)
#define MOLEMOLE_HACKERGAMESIMPLEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2D40B0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameSimpleDamage_TypeDefinitionIndex = 48074;

	class HackerGameSimpleDamage : public ::MoleMole::HackerGameBaseDamage
	{
	public:
		::System::Int32 Damage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMESIMPLEDAMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::MoleMole::HackerGameDamageData damageData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackerGameDamageData))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMESIMPLEDAMAGE_APPLY_OFFSET))(this, damageData);
		}
	};
}
