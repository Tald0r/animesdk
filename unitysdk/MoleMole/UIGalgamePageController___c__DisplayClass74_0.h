#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A05E342C0B6131A8;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole { class UIGalgamePageController_StageZoomInfo; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA938520)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS74_0__GENERATEUIZOOMPLAYABLE_B__0_OFFSET UNITYSDK_OFFSET(0xA938530)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass74_0_TypeDefinitionIndex = 58885;

	class UIGalgamePageController___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController_StageZoomInfo* stageZoomInfo; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::Class_2_A05E342C0B6131A8* uizoomPlayItem; // 0x20
		::System::Int32 stageNodeIdx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateUIZoomPlayable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS74_0__GENERATEUIZOOMPLAYABLE_B__0_OFFSET))(this);
		}
	};
}
