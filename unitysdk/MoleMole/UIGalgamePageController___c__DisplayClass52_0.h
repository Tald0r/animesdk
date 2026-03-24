#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3ED3AB773B8AD4A7;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B63B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0xB2B63C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0xB2B6410)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0xB2B6450)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__3_OFFSET UNITYSDK_OFFSET(0xB2B6790)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__4_OFFSET UNITYSDK_OFFSET(0xB2B63F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass52_0_TypeDefinitionIndex = 58887;

	class UIGalgamePageController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::String* avatarName; // 0x10
		::Class_2_3ED3AB773B8AD4A7* textPlayNode; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x20
		::MoleMole::UIGalgamePageController* __4__this; // 0x28
		::System::Boolean hasVoice; // 0x30
		::System::Boolean hasOneShotSound; // 0x31
		::System::Boolean hasSound; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__4_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__2_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYPICTURESTORYNODE_B__3_OFFSET))(this);
		}
	};
}
