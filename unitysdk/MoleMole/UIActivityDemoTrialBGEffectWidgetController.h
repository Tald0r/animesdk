#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_426D34B41459A2E5;
namespace MoleMole { class UIActivityDemoTrialBGContext; }
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0xD3B97E0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCLICKDEMOPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0xD3B9C00)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD3B9510)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD3B9660)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD3B95B0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD3B9700)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD3B91C0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD3B9260)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_PLAYENTERANIMATION_OFFSET UNITYSDK_OFFSET(0xD3B9860)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B9EF0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD3B9F20)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD3B9F90)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD3B9FF0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD3BA060)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD3BA0E0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD3BA140)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDemoTrialBGEffectWidgetController_TypeDefinitionIndex = 75466;

	class UIActivityDemoTrialBGEffectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* EffectBGEnterInName; // 0x0
		// static const ::System::String* EffectBGExchangeInName; // 0x0
		// static const ::System::String* EffectBGFadeOutName; // 0x0
		::Class_2_426D34B41459A2E5* _view; // 0x2A0
		::MoleMole::UIActivityDemoTrialBGContext* refContext; // 0x2A8
		::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController* roleNameplate; // 0x2B0
		::System::Int32 trialRoleID; // 0x2B8
		::Foundation::Coroutine::CoroutineHandle animHandle; // 0x2BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean IsPlayingAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET))(this);
		}

		::System::Void PlayEnterAnimation(::System::String* extensionName, ::System::Action* enterCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_PLAYENTERANIMATION_OFFSET))(this, extensionName, enterCallback);
		}

		::System::Void OnClickDemoPreviewAvatar(::System::Int32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCLICKDEMOPREVIEWAVATAR_OFFSET))(this, roleID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
