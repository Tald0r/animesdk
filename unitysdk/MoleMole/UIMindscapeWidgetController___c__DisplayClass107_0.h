#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMindscapeWidgetController; }

#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS107_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC08590)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS107_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xAC085A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController___c__DisplayClass107_0_TypeDefinitionIndex = 74116;

	class UIMindscapeWidgetController___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMindscapeWidgetController* __4__this; // 0x10
		::System::Boolean isInit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS107_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS107_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
