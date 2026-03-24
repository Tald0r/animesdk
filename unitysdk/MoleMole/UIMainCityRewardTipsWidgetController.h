#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_75FB4A09078427E5_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x74714A0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x7471670)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7471800)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7471400)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x74715C0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYFRAMETEXTURE_OFFSET UNITYSDK_OFFSET(0x7471DA0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEIN_OFFSET UNITYSDK_OFFSET(0x7471F20)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEOUT_OFFSET UNITYSDK_OFFSET(0x7472310)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHCHANGE_OFFSET UNITYSDK_OFFSET(0x7471E40)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x7471A00)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7472660)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7472690)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x7472700)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7472710)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7472790)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x74727F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRewardTipsWidgetController_TypeDefinitionIndex = 51642;

	class UIMainCityRewardTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_1_0D6706375CDAAE8C* _itemData; // 0x2A0
		::Class_2_75FB4A09078427E5_3* _view; // 0x2A8
		::Foundation::Coroutine::CoroutineHandle fadeOutHandle; // 0x2B0
		::Foundation::Coroutine::CoroutineHandle fadeInHandle; // 0x2B4
		::UnityEngine::RectTransform* rectTransform; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_1_0D6706375CDAAE8C* itemdata)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemdata);
		}

		::System::Void RefreshChange(::Class_1_0D6706375CDAAE8C* itemdata)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHCHANGE_OFFSET))(this, itemdata);
		}

		::System::Void PlayRewardFadeIn(::System::Single delay, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEIN_OFFSET))(this, delay, animSpeed);
		}

		::System::Void PlayRewardFadeOut(::System::Action* fadeOutCallback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEOUT_OFFSET))(this, fadeOutCallback, animSpeed);
		}

		::System::Void PlayFrameTexture(::System::String* textureKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYFRAMETEXTURE_OFFSET))(this, textureKey);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
