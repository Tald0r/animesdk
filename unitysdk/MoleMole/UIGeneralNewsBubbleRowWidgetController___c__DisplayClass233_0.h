#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD575510)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__UPDATERATINGICONWITHPROGRESS_B__3_OFFSET UNITYSDK_OFFSET(0xD5759D0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__UPDATERATINGICONWITHPROGRESS_B__4_OFFSET UNITYSDK_OFFSET(0xD5759A0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__UPDATERATINGICONWITHPROGRESS_G____CHANGEICONPROG_1_OFFSET UNITYSDK_OFFSET(0xD5757C0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__UPDATERATINGICONWITHPROGRESS_G____CHANGEICON_0_OFFSET UNITYSDK_OFFSET(0xD575520)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass233_0_TypeDefinitionIndex = 60646;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass233_0 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x18
		::System::Boolean ignoreSwitchOut; // 0x20
		::MoleMole::Level::RatingType ratingTypeIcon; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateRatingIconWithProgress_g____ChangeIcon_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__UPDATERATINGICONWITHPROGRESS_G____CHANGEICON_0_OFFSET))(this);
		}

		::System::Void _UpdateRatingIconWithProgress_g____ChangeIconProg_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__UPDATERATINGICONWITHPROGRESS_G____CHANGEICONPROG_1_OFFSET))(this);
		}

		::System::Void _UpdateRatingIconWithProgress_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__UPDATERATINGICONWITHPROGRESS_B__4_OFFSET))(this);
		}

		::System::Void _UpdateRatingIconWithProgress_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS233_0__UPDATERATINGICONWITHPROGRESS_B__3_OFFSET))(this);
		}
	};
}
