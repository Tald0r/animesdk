#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMiniscapeMapIconWidgetController; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMINISCAPEMAPICONWIDGETCONTROLLER_MAPICONVIEW_GET_ICONROOT_OFFSET UNITYSDK_OFFSET(0xAE06150)
#define MOLEMOLE_UIMINISCAPEMAPICONWIDGETCONTROLLER_MAPICONVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xAE06180)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMapIconWidgetController_MapIconView_TypeDefinitionIndex = 41451;

	class UIMiniscapeMapIconWidgetController_MapIconView : public ::System::Object
	{
	public:
		::MoleMole::UIMiniscapeMapIconWidgetController* _uiController; // 0x10

		::System::Void _ctor(::MoleMole::UIMiniscapeMapIconWidgetController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiniscapeMapIconWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPICONWIDGETCONTROLLER_MAPICONVIEW__CTOR_OFFSET))(this, uiController);
		}

		::UnityEngine::RectTransform* get_IconRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPICONWIDGETCONTROLLER_MAPICONVIEW_GET_ICONROOT_OFFSET))(this);
		}
	};
}
