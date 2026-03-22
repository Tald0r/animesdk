#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7AA01DA713CC33A9_3;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC14CD30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC14CDD0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC14CC00)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_PLAYEFFANIM_OFFSET UNITYSDK_OFFSET(0xC14CEB0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC14D310)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC14D340)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC14D3B0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC14D430)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelPerfectEffWidgetController_TypeDefinitionIndex = 59802;

	class UIMusicBattleInLevelPerfectEffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* EffAnim; // 0x0
		::Class_2_7AA01DA713CC33A9_3* _view; // 0x2A0
		::System::Single _animLength; // 0x2A8
		::Foundation::Coroutine::CoroutineHandle _effAnim; // 0x2AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayEffAnim(::System::Boolean isPerfect, ::MoleMole::Config::MusicBattleMarkerNodeType color, ::System::Action_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>* onCompleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::MusicBattleMarkerNodeType, ::System::Action_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER_PLAYEFFANIM_OFFSET))(this, isPerfect, color, onCompleted);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPERFECTEFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
