#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_D06919D0930604DE_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/Class_4_D06919D0930604DE_Enum_3_4845697BF1CAFCFF.h"
#include "unitysdk/MoleMole/UIActivityBattleYCLPageController_PageState.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D28D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLPageController_Context_TypeDefinitionIndex = 57562;

	class UIActivityBattleYCLPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 questID; // 0x28
		::Class_4_D06919D0930604DE_Enum_3_4845697BF1CAFCFF activityBattleSubType; // 0x2C
		::MoleMole::UIActivityBattleYCLPageController_PageState pageState; // 0x30
		::Class_4_D06919D0930604DE_Enum_3_05BF65C41833FF20 activityBattleType; // 0x34
		::System::Int32 activityID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
