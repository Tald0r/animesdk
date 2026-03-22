#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_8A3CFA0B02434172;
namespace MoleMole { class UIAbyssSweepContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralItemBtnWidgetController; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GET_SWEEPBTN_OFFSET UNITYSDK_OFFSET(0xA5044F0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA503AC0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_INITSWEEPBTN_OFFSET UNITYSDK_OFFSET(0xA503F70)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA5043C0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA504460)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA503AD0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA503E40)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA5040D0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA504500)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xA504510)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0xA504550)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA504570)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA5045E0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA5045F0)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA504600)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssSweepPopWindowController_TypeDefinitionIndex = 47363;

	class UIAbyssSweepPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_8A3CFA0B02434172* _view; // 0x2F8
		::MoleMole::UIAbyssSweepContext* _context; // 0x300
		::MoleMole::UIGeneralItemBtnWidgetController* _sweepBtn; // 0x308
		::UnityEngine::Events::UnityAction* goGetAction; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitSweepBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_INITSWEEPBTN_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::MoleMole::UIGeneralItemBtnWidgetController* get_SweepBtn()
		{
			return ((::MoleMole::UIGeneralItemBtnWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER_GET_SWEEPBTN_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER__ONUIINIT_B__3_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
