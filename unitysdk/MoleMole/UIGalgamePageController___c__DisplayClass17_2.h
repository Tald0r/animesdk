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

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD5642B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__10_OFFSET UNITYSDK_OFFSET(0xD565210)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__11_OFFSET UNITYSDK_OFFSET(0xD565640)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__12_OFFSET UNITYSDK_OFFSET(0xD564A40)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__15_OFFSET UNITYSDK_OFFSET(0xD564D30)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__6_OFFSET UNITYSDK_OFFSET(0xD5642C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__7_OFFSET UNITYSDK_OFFSET(0xD5645B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__8_OFFSET UNITYSDK_OFFSET(0xD564E10)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_2__PLAYSWITCHSCENEGROUPNODE_INNER_B__9_OFFSET UNITYSDK_OFFSET(0xD5650C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass17_2_TypeDefinitionIndex = 54657;

	class UIGalgamePageController___c__DisplayClass17_2 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* text; // 0x10
		::Class_2_9A82E4A106BA6573* voicePlayable; // 0x18
		::DG::Tweening::TweenCallback* __9__15; // 0x20
		::System::String* talkText; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x30
		::System::Action* __9__12; // 0x38
		::MoleMole::UIGalgameTextRowWidgetController* itemController; // 0x40
		::MoleMole::UIGalgamePageController___c__DisplayClass17_1* CS___8__locals2; // 0x48
		::Class_2_3ED3AB773B8AD4A7* textNode; // 0x50
		::System::Single waitPoptextTime; // 0x58
		::System::Single tweenDuration; // 0x5C
		::System::Int32 tempIndex; // 0x60
		::System::Boolean isFirstNode; // 0x64
		::System::Boolean hasOneShotSound; // 0x65

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
