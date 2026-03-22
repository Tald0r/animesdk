#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopDescWidgetController.h"

class Class_2_208CC9941471731A_576;

#define MOLEMOLE_UIVHSDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x88135A0)
#define MOLEMOLE_UIVHSDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x88137D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSDescWidgetController_TypeDefinitionIndex = 56172;

	class UIVHSDescWidgetController : public ::MoleMole::UIGeneralShopDescWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::Class_2_208CC9941471731A_576* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_576*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_);
		}
	};
}
