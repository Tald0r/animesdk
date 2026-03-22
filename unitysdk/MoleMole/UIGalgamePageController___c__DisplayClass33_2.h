#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayStoryNode_SwitchContinuousShakeType.h"
#include "unitysdk/Struct_2_DB26017D92737DC1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass33_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA3620C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_2__PLAYSTORYNODE_B__10_OFFSET UNITYSDK_OFFSET(0xA3620D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_2__PLAYSTORYNODE_B__11_OFFSET UNITYSDK_OFFSET(0xA362280)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass33_2_TypeDefinitionIndex = 54655;

	class UIGalgamePageController___c__DisplayClass33_2 : public ::System::Object
	{
	public:
		::System::Action* __9__11; // 0x10
		::Struct_2_DB26017D92737DC1 itemGroup; // 0x18
		::MoleMole::UIGalgamePageController___c__DisplayClass33_0* CS___8__locals2; // 0x30
		::MoleMole::GalGame::GalPlayStoryNode_SwitchContinuousShakeType switchContinuousShakeType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_2__PLAYSTORYNODE_B__10_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_2__PLAYSTORYNODE_B__11_OFFSET))(this);
		}
	};
}
