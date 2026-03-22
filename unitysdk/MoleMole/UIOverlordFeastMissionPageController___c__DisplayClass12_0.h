#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_317;
class Class_3_022369EEDD787131;
namespace MoleMole { class UIOverlordFeastMissionPageController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E94250)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x9E94260)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x9E945B0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x9E949E0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_G__CLOSEANDSTARTGAME_2_OFFSET UNITYSDK_OFFSET(0x9E943F0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_G__PLAYGETSTARANIM_1_OFFSET UNITYSDK_OFFSET(0x9E94810)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastMissionPageController___c__DisplayClass12_0_TypeDefinitionIndex = 68143;

	class UIOverlordFeastMissionPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastMissionPageController* __4__this; // 0x10
		::System::Action* __9__4; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		::Class_3_022369EEDD787131* game; // 0x28
		::Class_2_208CC9941471731A_317* config; // 0x30
		::System::Int32 idx; // 0x38
		::System::Int32 gameID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetGameEntryView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_B__0_OFFSET))(this);
		}

		::System::Void _SetGameEntryView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_B__3_OFFSET))(this);
		}

		::System::Void _SetGameEntryView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_B__4_OFFSET))(this);
		}

		::System::Void _SetGameEntryView_g__PlayGetStarAnim_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_G__PLAYGETSTARANIM_1_OFFSET))(this);
		}

		::System::Void _SetGameEntryView_g__CloseAndStartGame_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___C__DISPLAYCLASS12_0__SETGAMEENTRYVIEW_G__CLOSEANDSTARTGAME_2_OFFSET))(this);
		}
	};
}
