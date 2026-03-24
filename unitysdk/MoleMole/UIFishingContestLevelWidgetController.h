#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_05CA472826BC0FB8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9104890)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9104930)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9104740)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x91047E0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x9105B80)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYLEVELUPANIMATION_1_OFFSET UNITYSDK_OFFSET(0x9105DA0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYLEVELUPANIMATION_OFFSET UNITYSDK_OFFSET(0x9105CB0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_SHOWLEVELPROGRESS_OFFSET UNITYSDK_OFFSET(0x9104A10)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_SHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x9104F20)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9105F80)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9105FC0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9106030)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x91060B0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9106110)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestLevelWidgetController_TypeDefinitionIndex = 45767;

	class UIFishingContestLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 _levelMax = 0xF; // 0x0
		::System::Int32 levelNumberLow; // 0x2A0
		::System::Int32 _levelNumberMiddle; // 0x2A4
		::Class_2_05CA472826BC0FB8* _view; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Void ShowLevelProgress(::UnityEngine::UI::Extension::UILocalizationText* currentGoldText, ::UnityEngine::UI::Extension::UILocalizationText* currentCostText, ::UnityEngine::GameObject* space, ::UnityEngine::RectTransform* progressRoot, ::UnityEngine::RectTransform* progress)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_SHOWLEVELPROGRESS_OFFSET))(currentGoldText, currentCostText, space, progressRoot, progress);
		}

		::System::Void ShowLevel(::System::Int32 currentLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_SHOWLEVEL_OFFSET))(this, currentLevel);
		}

		::System::Void PlayAnimation(::System::Int32 currentLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYANIMATION_OFFSET))(this, currentLevel);
		}

		::System::Void PlayLevelUpAnimation(::System::Int32 currentLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYLEVELUPANIMATION_OFFSET))(this, currentLevel);
		}

		::System::Void PlayLevelUpAnimation_1(::System::Int32 currentLevel, ::System::String* animationName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYLEVELUPANIMATION_1_OFFSET))(this, currentLevel, animationName);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
