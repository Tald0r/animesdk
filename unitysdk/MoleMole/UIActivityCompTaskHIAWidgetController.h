#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_208CC9941471731A_543;
class Class_2_79AE422BA06F6D26;
namespace MoleMole { class UIActivityCompRowTaskListWidgetController; }
namespace MoleMole { class UIActivityCompTaskHIAContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONACTIVITYCHANGED_OFFSET UNITYSDK_OFFSET(0xC253A60)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC2535A0)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONOPENTASKOVA_OFFSET UNITYSDK_OFFSET(0xC253280)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC253640)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC253900)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC252E10)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC2530F0)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_REFRESHINTEGRATEDTEXT_OFFSET UNITYSDK_OFFSET(0xC254060)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_REFRESHPERIODPROGRESS_OFFSET UNITYSDK_OFFSET(0xC253710)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xC253AD0)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_SETNEXTUNLOCKPERIOD_OFFSET UNITYSDK_OFFSET(0xC253C70)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC254530)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC254560)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC2545D0)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC254640)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC2546C0)
#define MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC254720)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompTaskHIAWidgetController_TypeDefinitionIndex = 72381;

	class UIActivityCompTaskHIAWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26* _view; // 0x2A0
		::MoleMole::UIActivityCompTaskHIAContext* compContext; // 0x2A8
		::Class_2_208CC9941471731A_543* activityRuleTemplate; // 0x2B0
		::System::Collections::Generic::List_1<::System::Int32>* integratedList; // 0x2B8
		::Il2CppArray<::MoleMole::UIActivityCompRowTaskListWidgetController*>* listItems; // 0x2C0
		::Class_1_D375C91CCE5D3999* relateActivityData; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnOpenTaskOva()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONOPENTASKOVA_OFFSET))(this);
		}

		::System::Void OnActivityChanged(::Class_1_D375C91CCE5D3999* activityBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_ONACTIVITYCHANGED_OFFSET))(this, activityBaseData);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void RefreshPeriodProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_REFRESHPERIODPROGRESS_OFFSET))(this);
		}

		::System::Void SetNextUnlockPeriod(::System::Int32 integratedIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_SETNEXTUNLOCKPERIOD_OFFSET))(this, integratedIndex);
		}

		::System::Void RefreshIntegratedText(::System::Int32 integratedIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER_REFRESHINTEGRATEDTEXT_OFFSET))(this, integratedIndex);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
