#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_DE782794730406DC_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_GET_CHECKCANHANDLEEXTRASYSTEM_OFFSET UNITYSDK_OFFSET(0xA68B210)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_GET_TABPOPUPWINDOWCREATOR_OFFSET UNITYSDK_OFFSET(0xA68AEA0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_INITINFOBUTTON_OFFSET UNITYSDK_OFFSET(0xA68AF70)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONCLICKBTN_OFFSET UNITYSDK_OFFSET(0xA68B990)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA68B230)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONEXTRASYSTEMHANDLED_OFFSET UNITYSDK_OFFSET(0xA68B450)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA68B3A0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA68B640)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA68AEC0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA68B160)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xA68BA50)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SET_CHECKCANHANDLEEXTRASYSTEM_OFFSET UNITYSDK_OFFSET(0xA68B220)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SET_TABPOPUPWINDOWCREATOR_OFFSET UNITYSDK_OFFSET(0xA68AEB0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA68B720)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER__CHECKHIDEMAPBUTTON_OFFSET UNITYSDK_OFFSET(0xA68B790)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA68BAE0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA68BBF0)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA68BC60)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA68BC90)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA68BD10)
#define MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA68BD70)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InfoBtnWidgetController_TypeDefinitionIndex = 55248;

	class UIAbyssS2InfoBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DE782794730406DC_4* _view; // 0x2A0
		::System::Nullable_1<::System::Boolean> _infoInteractable; // 0x2A8
		::System::Nullable_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag> cacheTag; // 0x2AC
		::System::Boolean _openInfoButton; // 0x2B4
		::System::Action* _TabPopupWindowCreator_k__BackingField; // 0x2B8
		::System::Func_1<::System::Boolean>* _CheckCanHandleExtraSystem_k__BackingField; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Action* get_TabPopupWindowCreator()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_GET_TABPOPUPWINDOWCREATOR_OFFSET))(this);
		}

		::System::Void set_TabPopupWindowCreator(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SET_TABPOPUPWINDOWCREATOR_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Func_1<::System::Boolean>* get_CheckCanHandleExtraSystem()
		{
			return ((::System::Func_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_GET_CHECKCANHANDLEEXTRASYSTEM_OFFSET))(this);
		}

		::System::Void set_CheckCanHandleExtraSystem(::System::Func_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SET_CHECKCANHANDLEEXTRASYSTEM_OFFSET))(this, value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void InitInfoButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_INITINFOBUTTON_OFFSET))(this);
		}

		::System::Void _CheckHideMapButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER__CHECKHIDEMAPBUTTON_OFFSET))(this);
		}

		::System::Void OnClickBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONCLICKBTN_OFFSET))(this);
		}

		::System::Boolean OnExtraSystemHandled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_ONEXTRASYSTEMHANDLED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, b);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INFOBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
