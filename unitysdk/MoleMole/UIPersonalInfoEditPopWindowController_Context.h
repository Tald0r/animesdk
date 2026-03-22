#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x68DE7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController_Context_TypeDefinitionIndex = 59016;

	class UIPersonalInfoEditPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::System::Boolean> isShowingBirthday; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
