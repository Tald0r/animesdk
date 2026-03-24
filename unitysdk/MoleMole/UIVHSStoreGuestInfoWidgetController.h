#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVHSStoreGeneralInfoWidgetController.h"

class Class_2_208CC9941471731A_31;

#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_AFTERTEMPLATECHANGE_OFFSET UNITYSDK_OFFSET(0x7BDFA50)
#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x7BDFC30)
#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x7BDFC40)
#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7BDFCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreGuestInfoWidgetController_TypeDefinitionIndex = 64201;

	class UIVHSStoreGuestInfoWidgetController : public ::MoleMole::UIVHSStoreGeneralInfoWidgetController
	{
	public:
		::Class_2_208CC9941471731A_31* _template; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void AfterTemplateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_AFTERTEMPLATECHANGE_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_31* get_template()
		{
			return ((::Class_2_208CC9941471731A_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_2_208CC9941471731A_31* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_SET_TEMPLATE_OFFSET))(this, value);
		}
	};
}
