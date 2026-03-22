#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C72EFEEE926A8E9E_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralSmallTipsContext; }

#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xBFB0DF0)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFB09F0)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFB0A90)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFB0950)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFB0CC0)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB1050)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER__INITVIEW_B__5_0_OFFSET UNITYSDK_OFFSET(0xBFB1080)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER__INITVIEW_B__5_1_OFFSET UNITYSDK_OFFSET(0xBFB1120)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFB1130)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFB11A0)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFB1220)
#define MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFB1280)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSmallTipsWidgetController_TypeDefinitionIndex = 77702;

	class UIGeneralSmallTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C72EFEEE926A8E9E_4* _view; // 0x2A0
		::MoleMole::UIGeneralSmallTipsContext* _context; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void _InitView_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER__INITVIEW_B__5_0_OFFSET))(this);
		}

		::System::Void _InitView_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER__INITVIEW_B__5_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
