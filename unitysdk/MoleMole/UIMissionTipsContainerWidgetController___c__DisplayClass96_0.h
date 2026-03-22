#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4865323EE33E9248;
namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2456D0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_0__PLAYACTIVITYTIP_B__0_OFFSET UNITYSDK_OFFSET(0xB245820)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_0__PLAYACTIVITYTIP_B__3_OFFSET UNITYSDK_OFFSET(0xB2456E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass96_0_TypeDefinitionIndex = 75682;

	class UIMissionTipsContainerWidgetController___c__DisplayClass96_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x18
		::Class_1_4865323EE33E9248* activityPopData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET))(this);
		}

		::System::String* _PlayActivityTip_b__3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_0__PLAYACTIVITYTIP_B__3_OFFSET))(this);
		}

		::System::Void _PlayActivityTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_0__PLAYACTIVITYTIP_B__0_OFFSET))(this);
		}
	};
}
