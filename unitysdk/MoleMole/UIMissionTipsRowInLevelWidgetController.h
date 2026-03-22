#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsRowWidgetController.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSROWINLEVELWIDGETCONTROLLER_PLAYWITHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8C8170)
#define MOLEMOLE_UIMISSIONTIPSROWINLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C8410)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowInLevelWidgetController_TypeDefinitionIndex = 50097;

	class UIMissionTipsRowInLevelWidgetController : public ::MoleMole::UIMissionTipsRowWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWINLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void PlayWithCallback(::System::String* animName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWINLEVELWIDGETCONTROLLER_PLAYWITHCALLBACK_OFFSET))(this, animName, callback);
		}
	};
}
