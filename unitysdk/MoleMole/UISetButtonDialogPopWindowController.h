#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_670;
class Class_2_208CC9941471731A_723;
class Class_2_39E2D7E8A370D068;
class Class_2_68D38DAD1613A778_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuickSetButtonWidgetChildWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_CREATESETBTNGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x7512220)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_DELETESETBTN_OFFSET UNITYSDK_OFFSET(0x7512740)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x75118C0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONCLOSEBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x75121B0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7512BC0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONQUICKFUNCCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x75123F0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7511A40)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7512C60)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x75118D0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7511AB0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUPDATESETBTN_OFFSET UNITYSDK_OFFSET(0x7512850)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_TRYGAMEPADSELECT_OFFSET UNITYSDK_OFFSET(0x7511F40)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7512CF0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7512DD0)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7512E40)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7512E50)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7512E60)
#define MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7512E70)

namespace MoleMole
{
	inline static constexpr unsigned int UISetButtonDialogPopWindowController_TypeDefinitionIndex = 65124;

	class UISetButtonDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_68D38DAD1613A778_7* _view; // 0x2F8
		::System::Int32 quickIndex; // 0x300
		::Class_2_208CC9941471731A_670* quickAcessCfg; // 0x308
		::Class_2_39E2D7E8A370D068* lockModel; // 0x310
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_723*>* showUnlockList; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIQuickSetButtonWidgetChildWindowController*>* objcetItmeList; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCloseBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONCLOSEBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void TryGamepadSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_TRYGAMEPADSELECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateSetBtnGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_CREATESETBTNGAMEOBJECT_OFFSET))(this);
		}

		::System::Void OnQuickFuncClickHandle(::System::Int32 arg1, ::Class_2_208CC9941471731A_723* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_208CC9941471731A_723*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONQUICKFUNCCLICKHANDLE_OFFSET))(this, arg1, arg2);
		}

		::System::Void DeleteSetBtn(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_DELETESETBTN_OFFSET))(this, go);
		}

		::System::Void OnUpdateSetBtn(::UnityEngine::GameObject* go, ::System::Int32 dataIndex, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUPDATESETBTN_OFFSET))(this, go, dataIndex, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETBUTTONDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
