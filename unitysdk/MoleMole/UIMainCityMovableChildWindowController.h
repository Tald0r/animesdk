#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_BAE21DD4C85AF7B9.h"
#include "unitysdk/Enum_3_E36C894DCA3F304A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_6E6CF000E7362025;
class Class_3_BD3CD432BA91F5E1;
class MonoUITableScrollV2;
namespace MoleMole { class MovableChildWindowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace MoleMole { class UIMovableWidgetJoyStickChildWindowController; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_CLEARMOVESPEED_OFFSET UNITYSDK_OFFSET(0x7D4B170)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_GETPOS_OFFSET UNITYSDK_OFFSET(0x7D4BCC0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x7D494C0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_INITCONTEXT_OFFSET UNITYSDK_OFFSET(0x7D49CC0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_MOVEOBJ_OFFSET UNITYSDK_OFFSET(0x7D4B860)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7D4AD40)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x7D4B340)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONMOVEOBJ_OFFSET UNITYSDK_OFFSET(0x7D4B570)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7D49C50)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7D4ADE0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7D494D0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7D4A780)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_SETCAMBYKEY_OFFSET UNITYSDK_OFFSET(0x7D49FA0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_SETDATABYVO_OFFSET UNITYSDK_OFFSET(0x7D4A0F0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_SETUPTAB_OFFSET UNITYSDK_OFFSET(0x7D4A8B0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_SWITCHOBJ_OFFSET UNITYSDK_OFFSET(0x7D4BDC0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_TRYSENDEVENTTOOPENVO_OFFSET UNITYSDK_OFFSET(0x7D4B290)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_TRYSENDEVENT_OFFSET UNITYSDK_OFFSET(0x7D4BC20)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7D4BEA0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7D4BEB0)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x7D4BF20)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7D4BF50)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7D4BF60)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7D4BF70)
#define MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7D4BF80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMovableChildWindowController_TypeDefinitionIndex = 59981;

	class UIMainCityMovableChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single SIMPLEPRECISION; // 0x0
		::Class_2_6E6CF000E7362025* _view; // 0x2F8
		::MoleMole::UIMovableWidgetJoyStickChildWindowController* _joystickCtrl; // 0x300
		::MoleMole::MovableChildWindowContext* _context; // 0x308
		::System::Int32 camIndex; // 0x310
		::Foundation::ViewObject::ViewObjectHandle curVO; // 0x318
		::MoleMole::EntityHandle curOpEntityHandle; // 0x328
		::MonoUITableScrollV2* _scrollRectEx; // 0x338
		::System::Single curSpeed; // 0x340
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Up; // 0x348
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Down; // 0x350
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Left; // 0x358
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Right; // 0x360
		::Enum_3_E36C894DCA3F304A curObjDir; // 0x368
		::System::Single initThicknessVal; // 0x36C
		::System::Boolean lastMoveDir; // 0x370
		::System::Boolean isMoving; // 0x371

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_INITCONTEXT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetupTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_SETUPTAB_OFFSET))(this);
		}

		::System::Void SetDataByVo(::Foundation::ViewObject::ViewObjectHandle voHandle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_SETDATABYVO_OFFSET))(this, voHandle);
		}

		::System::Void OnMoveObj(::UnityEngine::Vector2 axisValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_ONMOVEOBJ_OFFSET))(this, axisValue);
		}

		::System::Void ClearMoveSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_CLEARMOVESPEED_OFFSET))(this);
		}

		::System::Void MoveObj(::Class_3_BD3CD432BA91F5E1* comp, ::System::Boolean isAddProgress, ::System::Single axisDis)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BD3CD432BA91F5E1*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_MOVEOBJ_OFFSET))(this, comp, isAddProgress, axisDis);
		}

		::UnityEngine::Vector3 GetPos(::Class_3_BD3CD432BA91F5E1* comp, ::System::Single progress)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_BD3CD432BA91F5E1*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_GETPOS_OFFSET))(this, comp, progress);
		}

		::System::Void SwitchObj(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_SWITCHOBJ_OFFSET))(this, index);
		}

		::System::Void SetCamByKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_SETCAMBYKEY_OFFSET))(this, key);
		}

		::System::Void TrySendEvent(::Enum_3_BAE21DD4C85AF7B9 graphEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_BAE21DD4C85AF7B9))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_TRYSENDEVENT_OFFSET))(this, graphEvent);
		}

		::System::Void TrySendEventToOpenVo(::Enum_3_BAE21DD4C85AF7B9 graphEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_BAE21DD4C85AF7B9))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER_TRYSENDEVENTTOOPENVO_OFFSET))(this, graphEvent);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMOVABLECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
