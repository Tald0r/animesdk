#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_D06919D0930604DE_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/Class_4_D06919D0930604DE_Enum_3_F7B17BC384A28970.h"
#include "unitysdk/MoleMole/UIActivityBattleYCLPageController_PageState.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x987B660)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLPageController_Context_TypeDefinitionIndex = 61178;

	class UIActivityBattleYCLPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_4_D06919D0930604DE_Enum_3_F7B17BC384A28970 activityBattleSubType; // 0x28
		::System::Int32 questID; // 0x2C
		::System::Int32 activityID; // 0x30
		::Class_4_D06919D0930604DE_Enum_3_05BF65C41833FF20 activityBattleType; // 0x34
		::MoleMole::UIActivityBattleYCLPageController_PageState pageState; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
