#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x7F42150)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__UPDATECONTENTFADEOUTANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x7F42160)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__UPDATECONTENTFADEOUTANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x7F42170)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__UPDATECONTENTFADEOUTANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x7F42180)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__UPDATECONTENTFADEOUTANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0x7F42200)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelTipsWidgetController___c__DisplayClass33_0_TypeDefinitionIndex = 41974;

	class UIABInLevelTipsWidgetController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIABInLevelTipsWidgetController* __4__this; // 0x18
		::System::Single currentWidth; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Single _UpdateContentFadeOutAnimation_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__UPDATECONTENTFADEOUTANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeOutAnimation_b__1(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__UPDATECONTENTFADEOUTANIMATION_B__1_OFFSET))(this, v);
		}

		::System::Void _UpdateContentFadeOutAnimation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__UPDATECONTENTFADEOUTANIMATION_B__2_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeOutAnimation_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS33_0__UPDATECONTENTFADEOUTANIMATION_B__3_OFFSET))(this);
		}
	};
}
