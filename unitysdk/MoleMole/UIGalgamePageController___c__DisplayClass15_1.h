#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3ED3AB773B8AD4A7;
namespace MoleMole { class UIGalgamePageController___c__DisplayClass15_0; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC10B740)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS15_1__PLAYSWITCHSCENENODE_INNER_B__10_OFFSET UNITYSDK_OFFSET(0xC10BB40)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS15_1__PLAYSWITCHSCENENODE_INNER_B__9_OFFSET UNITYSDK_OFFSET(0xC10B750)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass15_1_TypeDefinitionIndex = 58893;

	class UIGalgamePageController___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass15_0* CS___8__locals1; // 0x18
		::System::String* talkText; // 0x20
		::Class_2_3ED3AB773B8AD4A7* textNode; // 0x28
		::System::Boolean hasOneShotSound; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS15_1__PLAYSWITCHSCENENODE_INNER_B__9_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneNode_Inner_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS15_1__PLAYSWITCHSCENENODE_INNER_B__10_OFFSET))(this);
		}
	};
}
