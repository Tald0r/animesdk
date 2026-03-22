#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVRBossBattleInfoPageController___c__DisplayClass50_0; }

#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET UNITYSDK_OFFSET(0xEE4FA50)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_1__GOSINGLEPLAYREAL_B__2_OFFSET UNITYSDK_OFFSET(0xEE4FA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoPageController___c__DisplayClass50_1_TypeDefinitionIndex = 37382;

	class UIVRBossBattleInfoPageController___c__DisplayClass50_1 : public ::System::Object
	{
	public:
		::MoleMole::UIVRBossBattleInfoPageController___c__DisplayClass50_0* CS___8__locals1; // 0x10
		::System::Int32 cost; // 0x18
		::Enum_3_DB663931210BBC27_38 noReward; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_1__GOSINGLEPLAYREAL_B__2_OFFSET))(this);
		}
	};
}
