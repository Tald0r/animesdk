#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9E3E3CDA608A4F58;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0xAB6B570)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_CONTENTLAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0xAB6B710)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0xAB6B4A0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_SCROLLRECT_OFFSET UNITYSDK_OFFSET(0xAB6B7E0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_SLIDER_OFFSET UNITYSDK_OFFSET(0xAB6B640)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6B8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniScapeMapPage_MapWidgetController_MiniMapView_TypeDefinitionIndex = 66532;

	class UIMiniScapeMapPage_MapWidgetController_MiniMapView : public ::System::Object
	{
	public:
		::MoleMole::UIMiniScapeMapPage_MapWidgetController* _uiController; // 0x10

		::System::Void _ctor(::MoleMole::UIMiniScapeMapPage_MapWidgetController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiniScapeMapPage_MapWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW__CTOR_OFFSET))(this, uiController);
		}

		::Class_2_CA67A9CEB871FFD3* get_Image()
		{
			return ((::Class_2_CA67A9CEB871FFD3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_IMAGE_OFFSET))(this);
		}

		::Class_2_9E3E3CDA608A4F58* get_Animation()
		{
			return ((::Class_2_9E3E3CDA608A4F58*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_ANIMATION_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UISlider* get_Slider()
		{
			return ((::UnityEngine::UI::Extension::UISlider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_SLIDER_OFFSET))(this);
		}

		::UnityEngine::UI::LayoutElement* get_ContentLayoutElement()
		{
			return ((::UnityEngine::UI::LayoutElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_CONTENTLAYOUTELEMENT_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* get_ScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_SCROLLRECT_OFFSET))(this);
		}
	};
}
