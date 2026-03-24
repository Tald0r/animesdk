#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_BDBDCB60ACCD082E;
class Class_2_426D34B41459A2E5;
namespace MoleMole { class MonoActivityAnimSetting; }
namespace MoleMole { class UIActivityDemoTrialBGContext; }
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_EXTENSIONDATAANIM_OFFSET UNITYSDK_OFFSET(0xDED62C0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0xDED5EB0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCLICKDEMOPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0xDED6670)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDED5BE0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xDED5D30)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xDED5C80)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDED5DD0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDED5710)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDED5930)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_PLAYBGANIMATION_OFFSET UNITYSDK_OFFSET(0xDED5F30)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDED6950)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDED6980)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xDED69F0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xDED6A50)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDED6AC0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDED6B40)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDED6BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDemoTrialBGEffectWidgetController_TypeDefinitionIndex = 51268;

	class UIActivityDemoTrialBGEffectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_426D34B41459A2E5* _view; // 0x2A0
		::MoleMole::UIActivityDemoTrialBGContext* refContext; // 0x2A8
		::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController* roleNameplate; // 0x2B0
		::MoleMole::MonoActivityAnimSetting* animSetting; // 0x2B8
		::Class_1_BDBDCB60ACCD082E* animSequencePlayer; // 0x2C0
		::System::Int32 trialRoleID; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle animHandle; // 0x2CC

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

		::System::Void PlayBGAnimation(::System::String* extensionName, ::System::Action* enterCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_PLAYBGANIMATION_OFFSET))(this, extensionName, enterCallback);
		}

		::System::Void ExtensionDataAnim(::System::String* extensionName, ::System::Action* enterCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_EXTENSIONDATAANIM_OFFSET))(this, extensionName, enterCallback);
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
