#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_E5C5FCDBF5C3BDAC;
class Class_2_544549712B2B2CA5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIHandBookAntiqueItemRowWidgetController_PanelData; }
namespace System { class Object; }

#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7D068E0)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONGOTOBUTTON_OFFSET UNITYSDK_OFFSET(0x7D06FA0)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7D06B20)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7D06A40)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7D06700)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7D07130)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7D07140)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7D071B0)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7D07230)
#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7D072B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAntiqueItemRowWidgetController_TypeDefinitionIndex = 64427;

	class UIHandBookAntiqueItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_544549712B2B2CA5* _view; // 0x2D0
		::Class_1_E5C5FCDBF5C3BDAC* _progressBarHandler; // 0x2D8
		::MoleMole::UIHandBookAntiqueItemRowWidgetController_PanelData* _panelData; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* dataObject, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, dataObject, init);
		}

		::System::Void OnGoToButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_ONGOTOBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
