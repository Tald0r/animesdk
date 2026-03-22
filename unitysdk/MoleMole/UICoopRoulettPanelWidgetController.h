#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_51190E196B72044D;
class Class_2_C04F87C132BA9A06;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopRoulettMobileBtnWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_GETCURRENTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xBF58020)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xBF57F70)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF581B0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF58250)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF57AE0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF58100)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xBF57E80)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xBF58330)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0xBF58090)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_SETCURRENTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xBF57E10)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_UPDATESELECTALPHA_OFFSET UNITYSDK_OFFSET(0xBF58420)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF58510)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF585C0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF58630)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF586B0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF58710)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopRoulettPanelWidgetController_TypeDefinitionIndex = 70365;

	class UICoopRoulettPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_51190E196B72044D* _view; // 0x2A0
		::Class_2_C04F87C132BA9A06* _coopModel; // 0x2A8
		::System::Collections::Generic::List_1<::MoleMole::UICoopRoulettMobileBtnWidgetController*>* _mobileBtnCtrlList; // 0x2B0
		::System::Int32 _currentSelectIndex; // 0x2B8
		::System::Action_1<::System::Int32>* _onBtnClickAction; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetCurrentSelectIndex(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_SETCURRENTSELECTINDEX_OFFSET))(this, obj);
		}

		::System::Void OnBtnClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONBTNCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Int32 GetCurrentSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_GETCURRENTSELECTINDEX_OFFSET))(this);
		}

		::System::Void SetClickAction(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_SETCLICKACTION_OFFSET))(this, action);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET))(this);
		}

		::System::Void UpdateSelectAlpha(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_UPDATESELECTALPHA_OFFSET))(this, isFocus);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
