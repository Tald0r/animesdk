#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3ED3AB773B8AD4A7;
class Class_2_9A82E4A106BA6573;
namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIGalgamePageController___c__DisplayClass17_1; }
namespace MoleMole { class UIGalgameTextRowWidgetController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC10CA80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__10_OFFSET UNITYSDK_OFFSET(0xC10D9F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__11_OFFSET UNITYSDK_OFFSET(0xC10DE20)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__12_OFFSET UNITYSDK_OFFSET(0xC10D210)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__15_OFFSET UNITYSDK_OFFSET(0xC10D510)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__6_OFFSET UNITYSDK_OFFSET(0xC10CA90)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__7_OFFSET UNITYSDK_OFFSET(0xC10CD80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__8_OFFSET UNITYSDK_OFFSET(0xC10D5F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__9_OFFSET UNITYSDK_OFFSET(0xC10D8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass17_2_TypeDefinitionIndex = 58918;

	class UIGalgamePageController___c__DisplayClass17_2 : public ::System::Object
	{
	public:
		::Class_2_9A82E4A106BA6573* voicePlayable; // 0x10
		::System::String* talkText; // 0x18
		::Class_2_3ED3AB773B8AD4A7* textNode; // 0x20
		::UnityEngine::UI::Text* text; // 0x28
		::DG::Tweening::TweenCallback* __9__15; // 0x30
		::MoleMole::UIGalgameTextRowWidgetController* itemController; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x40
		::MoleMole::UIGalgamePageController___c__DisplayClass17_1* CS___8__locals2; // 0x48
		::System::Action* __9__12; // 0x50
		::System::Single tweenDuration; // 0x58
		::System::Single waitPoptextTime; // 0x5C
		::System::Int32 tempIndex; // 0x60
		::System::Boolean hasOneShotSound; // 0x64
		::System::Boolean isFirstNode; // 0x65

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__6_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__7_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__12_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__15_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__8_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__9_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__10_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__11_OFFSET))(this);
		}
	};
}
