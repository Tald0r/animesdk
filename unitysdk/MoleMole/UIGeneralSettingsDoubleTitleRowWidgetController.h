#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_69CBB7FF0BE6A673_38;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x891C030)
#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x891C0D0)
#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x891C1B0)
#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x891C1E0)
#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x891C250)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSettingsDoubleTitleRowWidgetController_TypeDefinitionIndex = 65081;

	class UIGeneralSettingsDoubleTitleRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_38* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
