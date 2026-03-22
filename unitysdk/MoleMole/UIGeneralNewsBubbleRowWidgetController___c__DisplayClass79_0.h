#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D8C920)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__ONNEWSTIPOPENDELAYEND_B__4_OFFSET UNITYSDK_OFFSET(0x9D8C930)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__ONNEWSTIPOPENDELAYEND_G__ONANIMATIONEND_0_OFFSET UNITYSDK_OFFSET(0x9D8C940)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass79_0_TypeDefinitionIndex = 60645;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x10
		::UnityEngine::RectTransform* root; // 0x18
		::System::Single lastHeight; // 0x20
		::System::Boolean fromResume; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__ONNEWSTIPOPENDELAYEND_B__4_OFFSET))(this);
		}

		::System::Void _OnNewsTipOpenDelayEnd_g__OnAnimationEnd_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__ONNEWSTIPOPENDELAYEND_G__ONANIMATIONEND_0_OFFSET))(this);
		}
	};
}
