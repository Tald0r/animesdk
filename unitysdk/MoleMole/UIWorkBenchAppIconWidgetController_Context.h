#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_2_208CC9941471731A_200;

#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x8895B60)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x8895B70)
#define MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8895B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchAppIconWidgetController_Context_TypeDefinitionIndex = 66033;

	class UIWorkBenchAppIconWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_200* _template_k__BackingField; // 0x28
		::Share::ENotificationBadgeType RedHintType; // 0x30

		::System::Void _ctor(::Class_2_208CC9941471731A_200* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_200*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, template_);
		}

		::Class_2_208CC9941471731A_200* get_template()
		{
			return ((::Class_2_208CC9941471731A_200*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_2_208CC9941471731A_200* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_200*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPICONWIDGETCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET))(this, value);
		}
	};
}
