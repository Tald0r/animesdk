#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalPlayStoryNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA361AD0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0xA361E60)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0xA361EA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0xA361AE0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__3_OFFSET UNITYSDK_OFFSET(0xA361B80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__4_OFFSET UNITYSDK_OFFSET(0xA361BA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__5_OFFSET UNITYSDK_OFFSET(0xA361CA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__6_OFFSET UNITYSDK_OFFSET(0xA361CC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__7_OFFSET UNITYSDK_OFFSET(0xA361DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass33_0_TypeDefinitionIndex = 54693;

	class UIGalgamePageController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x10
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x18
		::MoleMole::GalGame::GalPlayStoryNode* galConfigNode; // 0x20
		::System::String* facialKey; // 0x28
		::MoleMole::UIGalgamePageController* __4__this; // 0x30
		::System::String* poseKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__2_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__3_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__4_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__5_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__6_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__7_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_0__PLAYSTORYNODE_B__1_OFFSET))(this);
		}
	};
}
