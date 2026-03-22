#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_723;
class Class_2_D4013B1655644290_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2677E0)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB267880)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xB267D90)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB267E40)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB267550)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB267730)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB267F20)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB267F30)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB267FA0)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB268020)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2680A0)
#define MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB268100)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickSetButtonWidgetChildWindowController_TypeDefinitionIndex = 56667;

	class UIQuickSetButtonWidgetChildWindowController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_D4013B1655644290_1* _view; // 0x2D0
		::System::Action_2<::System::Int32, ::Class_2_208CC9941471731A_723*>* clickHandle; // 0x2D8
		::Class_2_208CC9941471731A_723* unlockCfg; // 0x2E0
		::System::Int32 index; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnSkinBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSETBUTTONWIDGETCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
