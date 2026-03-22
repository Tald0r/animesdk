#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_2_208CC9941471731A_115;

#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x7550840)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x7550850)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x754F960)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkbenchMainPageSmallBtnWidgetController_Context_TypeDefinitionIndex = 68754;

	class UIWorkbenchMainPageSmallBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_115* _template_k__BackingField; // 0x28
		::Share::ENotificationBadgeType RedHintType; // 0x30

		::System::Void _ctor(::Class_2_208CC9941471731A_115* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_115*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, template_);
		}

		::Class_2_208CC9941471731A_115* get_template()
		{
			return ((::Class_2_208CC9941471731A_115*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_2_208CC9941471731A_115* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_115*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET))(this, value);
		}
	};
}
