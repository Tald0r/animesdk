#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_79526D80B8F6897C;
class Class_2_1B1C05BC0A38A2D5_6;
class Class_2_208CC9941471731A_86;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralQuestTrackBtnWidgetController; }
namespace MoleMole { class UIInterKnotPlayerInfoWidgetController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_CANSTARTQUEST_OFFSET UNITYSDK_OFFSET(0xB273960)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_GETORCREATEGOBTNNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB273CC0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ISMAINCITYQUESTCONDITIONREACHED_OFFSET UNITYSDK_OFFSET(0xB2746B0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB271B30)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB271400)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB271BD0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB271100)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONWORLDLEVELUP_OFFSET UNITYSDK_OFFSET(0xB274100)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONYOROZUYALEVELUP_OFFSET UNITYSDK_OFFSET(0xB274170)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHFULLLEVELVIEW_OFFSET UNITYSDK_OFFSET(0xB271CB0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHGOBTNNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB2741E0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHINPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0xB273E00)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0xB2738F0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHPENDINGVIEW_OFFSET UNITYSDK_OFFSET(0xB271EF0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB2714D0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_TRYREADGOBTNNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB274500)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB274910)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xB274940)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER__REFRESHPENDINGVIEW_B__6_0_OFFSET UNITYSDK_OFFSET(0xB2749C0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB274B10)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB274B80)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB274BF0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB274C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRopeMakerWidgetController_TypeDefinitionIndex = 66894;

	class UIRopeMakerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1B1C05BC0A38A2D5_6* _view; // 0x2A0
		::MoleMole::UIInterKnotPlayerInfoWidgetController* _playerInfoWidget; // 0x2A8
		::MoleMole::UIGeneralQuestTrackBtnWidgetController* _trackBtnWidget; // 0x2B0
		::Class_2_208CC9941471731A_86* _worldLevelConfig; // 0x2B8
		::System::Boolean _needWaitForFadeInFinish; // 0x2C0
		::System::Boolean _delayPlaySwitchAnim; // 0x2C1
		::System::Boolean _delayPlayLevelReachedAnim; // 0x2C2
		::System::Boolean _delayPlayCollectDataReachedAnim; // 0x2C3
		::Class_1_79526D80B8F6897C* _goBtnNotification; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshPendingView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHPENDINGVIEW_OFFSET))(this);
		}

		::System::Void RefreshInProgressView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHINPROGRESSVIEW_OFFSET))(this);
		}

		::System::Void RefreshFullLevelView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHFULLLEVELVIEW_OFFSET))(this);
		}

		::System::Void OnWorldLevelUp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONWORLDLEVELUP_OFFSET))(this, args);
		}

		::System::Void OnYorozuyaLevelUp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONYOROZUYALEVELUP_OFFSET))(this, args);
		}

		::System::Void RefreshNotifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHNOTIFICATIONS_OFFSET))(this);
		}

		::Class_1_79526D80B8F6897C* GetOrCreateGoBtnNotification()
		{
			return ((::Class_1_79526D80B8F6897C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_GETORCREATEGOBTNNOTIFICATION_OFFSET))(this);
		}

		::System::Void RefreshGoBtnNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_REFRESHGOBTNNOTIFICATION_OFFSET))(this);
		}

		::System::Void TryReadGoBtnNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_TRYREADGOBTNNOTIFICATION_OFFSET))(this);
		}

		::System::Boolean IsMainCityQuestConditionReached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ISMAINCITYQUESTCONDITIONREACHED_OFFSET))(this);
		}

		::System::Boolean CanStartQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_CANSTARTQUEST_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__1_1(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this, reference);
		}

		::System::Void _RefreshPendingView_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER__REFRESHPENDINGVIEW_B__6_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
