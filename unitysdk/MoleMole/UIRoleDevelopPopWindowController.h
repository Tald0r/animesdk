#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_B944D5F0FFA609A4.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79F6D62CE30E3F8E_45;
class MonoUILoopBGText;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }

#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xA442AA0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA442A90)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_INITCONSUMEITEMID_OFFSET UNITYSDK_OFFSET(0xA444AA0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA443110)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET UNITYSDK_OFFSET(0xA444FE0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET UNITYSDK_OFFSET(0xA444F20)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4434D0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONINFOCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xA444D40)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA445200)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA445400)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA445470)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA442AB0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA443570)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA443960)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETBTNACTION_OFFSET UNITYSDK_OFFSET(0xA444CC0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETBUTTONINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xA4450F0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETROLEDEVELOPCONTENT_OFFSET UNITYSDK_OFFSET(0xA4436A0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETTITLE_OFFSET UNITYSDK_OFFSET(0xA444650)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA445500)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__REFRESHVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0xA445590)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__REFRESHVIEW_B__19_1_OFFSET UNITYSDK_OFFSET(0xA4455B0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4455D0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA445640)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA445670)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA445680)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA445690)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA4456A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleDevelopPopWindowController_TypeDefinitionIndex = 59474;

	class UIRoleDevelopPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Enum_3_B944D5F0FFA609A4 _curDialogType; // 0x2F8
		::System::Collections::Generic::Dictionary_2<::Enum_3_B944D5F0FFA609A4, ::MoleMole::UIBaseController*>* _subChildControllers; // 0x300
		::MoleMole::UIControllerContextBase* _showContext; // 0x308
		::System::Collections::Generic::List_1<::UnityEngine::UI::Button*>* _generalBtns; // 0x310
		::System::Action* _generalBtn0Act; // 0x318
		::System::Action* _generalBtn1Act; // 0x320
		::Class_2_79F6D62CE30E3F8E_45* _view; // 0x328
		::System::Collections::Generic::List_1<::MonoUILoopBGText*>* _loopTxtList; // 0x330
		::System::Int32 _consumeItemID; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetRoleDevelopContent(::Enum_3_B944D5F0FFA609A4 roleDevelopType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B944D5F0FFA609A4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETROLEDEVELOPCONTENT_OFFSET))(this, roleDevelopType);
		}

		::System::Void InitConsumeItemID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_INITCONSUMEITEMID_OFFSET))(this);
		}

		::System::Void SetBtnAction(::System::Action* btn1act, ::System::Action* btn2act)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETBTNACTION_OFFSET))(this, btn1act, btn2act);
		}

		::System::Void SetTitle(::Enum_3_B944D5F0FFA609A4 subType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B944D5F0FFA609A4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETTITLE_OFFSET))(this, subType);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnInfoClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONINFOCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnClickConsumeIconBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET))(this);
		}

		::System::Void OnClickConsoleCheckConsumeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET))(this);
		}

		::System::Void SetButtonInteractable(::System::Boolean interactable0, ::System::Boolean interactable1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETBUTTONINTERACTABLE_OFFSET))(this, interactable0, interactable1);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _RefreshView_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__REFRESHVIEW_B__19_0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__REFRESHVIEW_B__19_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
