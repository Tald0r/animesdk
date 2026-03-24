#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TurnBattleUnitBase.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xB940FA0)
#define MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT_GET_SOURCEUNIT_OFFSET UNITYSDK_OFFSET(0xB940FB0)
#define MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0xB941050)
#define MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0xB940FD0)
#define MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xB940FC0)
#define MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT___BASE_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0xB9410D0)
#define MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT___BASE_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0xB941130)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityTemporaryUnit_TypeDefinitionIndex = 50290;

	class TurnBattleEntityTemporaryUnit : public ::MoleMole::TurnBattleUnitBase
	{
	public:
		::MoleMole::TurnBattleEntityUnit* _SourceUnit_k__BackingField; // 0x10

		::System::Void _ctor(::MoleMole::TurnBattleEntityUnit* sourceUnit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT__CTOR_OFFSET))(this, sourceUnit);
		}

		::System::Single get_SortWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT_GET_SORTWEIGHT_OFFSET))(this);
		}

		::MoleMole::TurnBattleEntityUnit* get_SourceUnit()
		{
			return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT_GET_SOURCEUNIT_OFFSET))(this);
		}

		::System::Void OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT_ONTURNSTART_OFFSET))(this);
		}

		::System::Void OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT_ONTURNOVER_OFFSET))(this);
		}

		::System::Void __base_OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT___BASE_ONTURNOVER_OFFSET))(this);
		}

		::System::Void __base_OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYTEMPORARYUNIT___BASE_ONTURNSTART_OFFSET))(this);
		}
	};
}
