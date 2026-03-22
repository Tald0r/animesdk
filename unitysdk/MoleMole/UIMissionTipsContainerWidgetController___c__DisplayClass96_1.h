#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass96_0; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE0710)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_1__PLAYACTIVITYTIP_B__1_OFFSET UNITYSDK_OFFSET(0xCFEB8D0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_1__PLAYACTIVITYTIP_B__2_OFFSET UNITYSDK_OFFSET(0xCFEB960)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass96_1_TypeDefinitionIndex = 75716;

	class UIMissionTipsContainerWidgetController___c__DisplayClass96_1 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass96_0* CS___8__locals1; // 0x18
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayActivityTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_1__PLAYACTIVITYTIP_B__1_OFFSET))(this);
		}

		::System::Void _PlayActivityTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS96_1__PLAYACTIVITYTIP_B__2_OFFSET))(this);
		}
	};
}
