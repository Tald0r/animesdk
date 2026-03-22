#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsListWidgetController.h"

#define MOLEMOLE_UIQUESTIONSLISTV3WIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET UNITYSDK_OFFSET(0xAB88DD0)
#define MOLEMOLE_UIQUESTIONSLISTV3WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB88EB0)
#define MOLEMOLE_UIQUESTIONSLISTV3WIDGETCONTROLLER___BASE_ONSETCREATEFUNC_OFFSET UNITYSDK_OFFSET(0xAB88EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsListV3WidgetController_TypeDefinitionIndex = 37170;

	class UIQuestionsListV3WidgetController : public ::MoleMole::UIQuestionsListWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTV3WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnSetCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTV3WIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET))(this);
		}

		::System::Void __base_OnSetCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTV3WIDGETCONTROLLER___BASE_ONSETCREATEFUNC_OFFSET))(this);
		}
	};
}
