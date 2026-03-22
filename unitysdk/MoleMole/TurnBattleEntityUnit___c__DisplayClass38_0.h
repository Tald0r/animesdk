#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_50DBA35CF4D6E819.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBD68D80)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__GETSKILLFILTER_B__0_OFFSET UNITYSDK_OFFSET(0xBD68D90)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityUnit___c__DisplayClass38_0_TypeDefinitionIndex = 37999;

	class TurnBattleEntityUnit___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::TurnBattleEntityUnit* __4__this; // 0x10
		::Struct_2_50DBA35CF4D6E819 skill; // 0x18
		::System::Boolean ignoreRange; // 0x40
		::System::Boolean ignoreBlock; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkillFilter_b__0(::MoleMole::TurnBattleEntityUnit* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__GETSKILLFILTER_B__0_OFFSET))(this, target);
		}
	};
}
