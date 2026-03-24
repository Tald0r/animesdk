#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_584;

#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD55E530)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__ONSELECTGRID_B__1_OFFSET UNITYSDK_OFFSET(0xD55E540)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleWeekPageController___c__DisplayClass19_1_TypeDefinitionIndex = 66008;

	class UIDoubleWeekPageController___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_584* weeklyQuestConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectGrid_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__DISPLAYCLASS19_1__ONSELECTGRID_B__1_OFFSET))(this);
		}
	};
}
