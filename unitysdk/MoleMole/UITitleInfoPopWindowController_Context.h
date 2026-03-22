#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_EFE356ABDC0704AC.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9386210)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleInfoPopWindowController_Context_TypeDefinitionIndex = 56904;

	class UITitleInfoPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_EFE356ABDC0704AC titleInfo; // 0x28
		::System::Nullable_1<::System::UInt32> friendAvatarID; // 0x38
		::System::Boolean isFromFriend; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
