#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_214D9C2B38669660;
class Class_2_D202B83AFEDC0267;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET UNITYSDK_OFFSET(0xA6D0B90)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_BINDCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6D0AB0)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_BINDEVENT_BUTTON_OFFSET UNITYSDK_OFFSET(0xA6D0740)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_GET_PROMOTERTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA6D0EC0)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xA6D0A00)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA6D0880)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA6D0920)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA6D0690)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_REMOVEALLCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6D0B20)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_SET_PROMOTERTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA6D0ED0)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D0F70)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xA6D0F80)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA6D0F90)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA6D1000)
#define MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA6D1080)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSPromoterWidgetController_TypeDefinitionIndex = 57680;

	class UIVHSPromoterWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_214D9C2B38669660* _view; // 0x2D0
		::System::Action_1<::MoleMole::UIVHSPromoterWidgetController*>* _clickedCallbackExtra; // 0x2D8
		::System::Boolean _initPromoterTemplate; // 0x2E0
		::Class_2_D202B83AFEDC0267* _promoterTemplate; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void BindClickCallback(::System::Action_1<::MoleMole::UIVHSPromoterWidgetController*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIVHSPromoterWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_BINDCLICKCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RemoveAllClickCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_REMOVEALLCLICKCALLBACK_OFFSET))(this);
		}

		::System::Void BindEvent_Button()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_BINDEVENT_BUTTON_OFFSET))(this);
		}

		::System::Void AfterDataChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET))(this);
		}

		::Class_2_D202B83AFEDC0267* get_promoterTemplate()
		{
			return ((::Class_2_D202B83AFEDC0267*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_GET_PROMOTERTEMPLATE_OFFSET))(this);
		}

		::System::Void set_promoterTemplate(::Class_2_D202B83AFEDC0267* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D202B83AFEDC0267*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER_SET_PROMOTERTEMPLATE_OFFSET))(this, value);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPROMOTERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
