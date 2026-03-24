#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D3704D04572A8616_Class_2_1CC09060E24A37CA;
namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace System { class Action; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCB339B0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__PLAYPROGRESSPOINTDONEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xCB339C0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__PLAYPROGRESSPOINTDONEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xCB33EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 59326;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDailyQuestHandBookWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::Class_2_0D31A1661D004892<::Class_2_D3704D04572A8616_Class_2_1CC09060E24A37CA*>* progressPoint; // 0x20
		::System::Action* onFinish; // 0x28
		::System::Int32 level; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayProgressPointDoneEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__PLAYPROGRESSPOINTDONEEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayProgressPointDoneEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS16_0__PLAYPROGRESSPOINTDONEEFFECT_B__1_OFFSET))(this);
		}
	};
}
