#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3ED3AB773B8AD4A7;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x911A180)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__0_OFFSET UNITYSDK_OFFSET(0x911A6A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__1_OFFSET UNITYSDK_OFFSET(0x911A6C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__2_OFFSET UNITYSDK_OFFSET(0x911A710)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__3_OFFSET UNITYSDK_OFFSET(0x911A190)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__4_OFFSET UNITYSDK_OFFSET(0x911A390)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__6_OFFSET UNITYSDK_OFFSET(0x911A3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass25_0_TypeDefinitionIndex = 58881;

	class UIGalgamePageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x10
		::System::String* voiceKey; // 0x18
		::Class_2_3ED3AB773B8AD4A7* textPlayNode; // 0x20
		::MoleMole::UIGalgamePageController* __4__this; // 0x28
		::System::Boolean hasOneShotSound; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__3_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__4_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__6_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS25_0__PLAYSUBNARRATORNODE_B__2_OFFSET))(this);
		}
	};
}
