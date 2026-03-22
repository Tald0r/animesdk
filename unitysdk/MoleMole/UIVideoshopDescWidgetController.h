#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopDescWidgetController.h"

class Class_2_208CC9941471731A_576;

#define MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x71E4210)
#define MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x71E4440)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopDescWidgetController_TypeDefinitionIndex = 51690;

	class UIVideoshopDescWidgetController : public ::MoleMole::UIGeneralShopDescWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::Class_2_208CC9941471731A_576* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_576*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_);
		}
	};
}
