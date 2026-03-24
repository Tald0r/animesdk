#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6BF50)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS83_0__ONNEWSTIPOPENDELAYEND_B__4_OFFSET UNITYSDK_OFFSET(0xAC6BF60)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS83_0__ONNEWSTIPOPENDELAYEND_G__ONANIMATIONEND_0_OFFSET UNITYSDK_OFFSET(0xAC6BF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass83_0_TypeDefinitionIndex = 73198;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x10
		::System::Single lastHeight; // 0x18
		::System::Boolean fromResume; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS83_0__ONNEWSTIPOPENDELAYEND_B__4_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_g__OnAnimationEnd_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS83_0__ONNEWSTIPOPENDELAYEND_G__ONANIMATIONEND_0_OFFSET))(this);
		}
	};
}
