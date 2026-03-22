#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_DC4020E41FD6C2B0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMusicBattleInLevelPerfectEffWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ANIMCOROUTINE_OFFSET UNITYSDK_OFFSET(0xAB75D10)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAB75910)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAB759B0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAB757B0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYHITBTNLINK_OFFSET UNITYSDK_OFFSET(0xAB75A90)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYPERFECTANIM_OFFSET UNITYSDK_OFFSET(0xAB75DB0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB76080)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__ONUIINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0xAB76150)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAB76250)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAB762C0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAB76340)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelInteractWidgetController_TypeDefinitionIndex = 64985;

	class UIMusicBattleInLevelInteractWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* HitBtnLinkAnim; // 0x0
		::Class_2_DC4020E41FD6C2B0* _view; // 0x2A0
		::System::Single _animLength; // 0x2A8
		::System::Single _animEndTime; // 0x2AC
		::Foundation::Coroutine::CoroutineHandle _animCoroutine; // 0x2B0
		::System::Collections::Generic::List_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>* _cachedWidgets; // 0x2B8
		::System::Action_1<::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*>* _returnToCache; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayHitBtnLink(::MoleMole::Config::MusicBattleMarkerNodeType color, ::System::Boolean isPerfect)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MusicBattleMarkerNodeType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYHITBTNLINK_OFFSET))(this, color, isPerfect);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* AnimCoroutine()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_ANIMCOROUTINE_OFFSET))(this);
		}

		::System::Void PlayPerfectAnim(::System::Boolean isPerfect, ::MoleMole::Config::MusicBattleMarkerNodeType color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::MusicBattleMarkerNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER_PLAYPERFECTANIM_OFFSET))(this, isPerfect, color);
		}

		::System::Void _OnUIInit_b__7_0(::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController* w)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMusicBattleInLevelPerfectEffWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER__ONUIINIT_B__7_0_OFFSET))(this, w);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
