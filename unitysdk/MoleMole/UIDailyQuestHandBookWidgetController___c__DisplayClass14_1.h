#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDailyQuestHandBookWidgetController___c__DisplayClass14_0; }
namespace System { class Action; }

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x90F4E10)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_1__TRYPLAYCANTAKEREWARDEFFECT_B__3_OFFSET UNITYSDK_OFFSET(0x90F4E20)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_1__TRYPLAYCANTAKEREWARDEFFECT_B__4_OFFSET UNITYSDK_OFFSET(0x90F4E80)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_1__TRYPLAYCANTAKEREWARDEFFECT_B__5_OFFSET UNITYSDK_OFFSET(0x90F4F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass14_1_TypeDefinitionIndex = 59330;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::System::Action* __9__5; // 0x10
		::System::Action* onFinish; // 0x18
		::MoleMole::UIDailyQuestHandBookWidgetController___c__DisplayClass14_0* CS___8__locals1; // 0x20
		::System::Single duration; // 0x28
		::System::Int32 fromLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Void _TryPlayCanTakeRewardEffect_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_1__TRYPLAYCANTAKEREWARDEFFECT_B__3_OFFSET))(this);
		}

		::System::Void _TryPlayCanTakeRewardEffect_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_1__TRYPLAYCANTAKEREWARDEFFECT_B__4_OFFSET))(this);
		}

		::System::Void _TryPlayCanTakeRewardEffect_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_1__TRYPLAYCANTAKEREWARDEFFECT_B__5_OFFSET))(this);
		}
	};
}
