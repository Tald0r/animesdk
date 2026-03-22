#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole::GalGame { class GalPlaySubStoryNode; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D84820)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS40_0__PLAYSUBSTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0x9D84C60)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS40_0__PLAYSUBSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x9D84830)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS40_0__PLAYSUBSTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0x9D84B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass40_0_TypeDefinitionIndex = 54665;

	class UIGalgamePageController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::String* facialKey; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x20
		::MoleMole::GalGame::GalPlaySubStoryNode* galConfigNode; // 0x28
		::System::String* poseKey; // 0x30
		::System::Int32 locationKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS40_0__PLAYSUBSTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS40_0__PLAYSUBSTORYNODE_B__2_OFFSET))(this);
		}

		::System::Void _PlaySubStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS40_0__PLAYSUBSTORYNODE_B__0_OFFSET))(this);
		}
	};
}
