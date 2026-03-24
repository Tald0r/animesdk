#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FD5CF626EB7D21F.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/Enum_3_DB663931210BBC27_26.h"
#include "unitysdk/Struct_2_545C436C5B39D527.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVRBossBattleInfoPageController; }

#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9EEB440)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__GOSINGLEPLAYREAL_B__1_OFFSET UNITYSDK_OFFSET(0x9EEB450)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__GOSINGLEPLAYREAL_G__CONTINUE_0_OFFSET UNITYSDK_OFFSET(0x9EEB460)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoPageController___c__DisplayClass50_0_TypeDefinitionIndex = 49347;

	class UIVRBossBattleInfoPageController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::MoleMole::UIVRBossBattleInfoPageController* __4__this; // 0x10
		::Struct_2_545C436C5B39D527 battleTypeData; // 0x18
		::Enum_3_A3F38457E644339A rewardBuffGameTag; // 0x30
		::Enum_3_0FD5CF626EB7D21F type; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__GOSINGLEPLAYREAL_B__1_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_g__Continue_0(::Enum_3_DB663931210BBC27_26 noReward)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_26))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_0__GOSINGLEPLAYREAL_G__CONTINUE_0_OFFSET))(this, noReward);
		}
	};
}
