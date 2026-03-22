#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_124;
class Class_2_39E2D7E8A370D068;
namespace MoleMole { class UIHandBookZeroWidgetController; }

#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DA5DC0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x9DA5DD0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x9DA5E00)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__3_OFFSET UNITYSDK_OFFSET(0x9DA5E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 45425;

	class UIHandBookZeroWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Class_2_39E2D7E8A370D068* lockModel; // 0x10
		::MoleMole::UIHandBookZeroWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__1_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__3(::Class_2_208CC9941471731A_124* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_124*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__3_OFFSET))(this, entry);
		}
	};
}
