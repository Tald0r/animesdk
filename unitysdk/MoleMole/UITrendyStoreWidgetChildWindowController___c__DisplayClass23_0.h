#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace MoleMole { class UITrendyStoreWidgetChildWindowController; }

#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8886540)
#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TAKETOYDEAL_B__0_OFFSET UNITYSDK_OFFSET(0x8886550)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStoreWidgetChildWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 69649;

	class UITrendyStoreWidgetChildWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UITrendyStoreWidgetChildWindowController* __4__this; // 0x10
		::System::Int32 dealID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _TakeToyDeal_b__0(::Class_0_16E4307DCC419505_5* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TAKETOYDEAL_B__0_OFFSET))(this, msg);
		}
	};
}
