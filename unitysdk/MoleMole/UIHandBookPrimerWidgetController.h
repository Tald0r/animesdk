#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHandBookPopWindowController_EHandBookTab.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_187;
class Class_2_2930B6D633C2701E_1;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHandBookPrimerWidgetController_TabItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_CREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0xAA164A0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0xAA15AF0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA16320)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAA16240)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA163C0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA156E0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA15900)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_SHOWTABCONTEXT_OFFSET UNITYSDK_OFFSET(0xAA160C0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA16660)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA166A0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAA16710)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA16780)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA16800)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA16860)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPrimerWidgetController_TypeDefinitionIndex = 40335;

	class UIHandBookPrimerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 HB_Proxy_NEWBIE_ID = 0x91; // 0x0
		// static const ::System::Int32 HB_Proxy_NEWBIE_CONSOLE_ID = 0x479; // 0x0
		// static const ::System::Int32 HB_Proxy_NEWBIE_PC_ID = 0x861; // 0x0
		// static const ::System::Int32 HB_TEMPLE_NEWBIE_ID = 0xE0; // 0x0
		// static const ::System::Int32 HB_TEMPLE_NEWBIE_CONSOLE_ID = 0x4C8; // 0x0
		// static const ::System::Int32 HB_TEMPLE_NEWBIE_PC_ID = 0x8B0; // 0x0
		::Class_2_2930B6D633C2701E_1* _view; // 0x2A0
		::System::Collections::Generic::List_1<::MoleMole::UIHandBookPrimerWidgetController_TabItem*>* _tabItems; // 0x2A8
		::System::Int32 _activatedTab; // 0x2B0
		::System::Boolean isInit; // 0x2B4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowTabContext(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_SHOWTABCONTEXT_OFFSET))(this, idx);
		}

		::MoleMole::UIBaseController* CreateController(::Class_2_208CC9941471731A_187* template_)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::Class_2_208CC9941471731A_187*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_CREATECONTROLLER_OFFSET))(this, template_);
		}

		::System::Int32 InitTab(::MoleMole::UIHandBookPopWindowController_EHandBookTab type)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHandBookPopWindowController_EHandBookTab))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_INITTAB_OFFSET))(this, type);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
