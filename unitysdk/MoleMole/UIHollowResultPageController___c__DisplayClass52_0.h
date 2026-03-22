#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowResultPageController; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE283700)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS52_0__REFRESHBOSSRUSHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0xE283710)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS52_0__REFRESHBOSSRUSHVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0xE283960)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController___c__DisplayClass52_0_TypeDefinitionIndex = 39277;

	class UIHollowResultPageController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowResultPageController* __4__this; // 0x10
		::System::UInt32 curTotal; // 0x18
		::System::Single realExpProgressDuration; // 0x1C
		::System::UInt32 curRemain; // 0x20
		::System::Single timer; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBossRushView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS52_0__REFRESHBOSSRUSHVIEW_B__4_OFFSET))(this);
		}

		::System::Void _RefreshBossRushView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS52_0__REFRESHBOSSRUSHVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
