#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8C04200)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendInfoWidgetController_Context_TypeDefinitionIndex = 53908;

	class UIFriendInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsShowFriendListOnly; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
