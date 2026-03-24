#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRoleSkinRowWidgetController_ERoleCardType.h"

class Class_2_25B3E66D74D4E517;

#define MOLEMOLE_UIROLESKINROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xDF34B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkinRowWidgetController_Context_TypeDefinitionIndex = 76747;

	class UIRoleSkinRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_25B3E66D74D4E517* data; // 0x28
		::MoleMole::UIRoleSkinRowWidgetController_ERoleCardType roleCardType; // 0x30
		::System::Boolean isAvatarObtained; // 0x34
		::System::Boolean isGetMethodPreview; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKINROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
