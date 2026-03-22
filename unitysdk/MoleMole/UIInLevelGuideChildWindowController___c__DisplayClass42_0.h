#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelGuideChildWindowController; }
namespace MoleMole { class UIInLevelGuideItemChildWindowController; }

#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__COLLECTARROWITEM_B__0_OFFSET UNITYSDK_OFFSET(0xBFD91A0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD9190)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideChildWindowController___c__DisplayClass42_0_TypeDefinitionIndex = 62947;

	class UIInLevelGuideChildWindowController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelGuideChildWindowController* __4__this; // 0x10
		::MoleMole::UIInLevelGuideItemChildWindowController* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _CollectArrowItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__COLLECTARROWITEM_B__0_OFFSET))(this);
		}
	};
}
