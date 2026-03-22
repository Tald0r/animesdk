#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_019E0BFBA684A742_4;
class Class_2_61AC41B6DCFBC671;
class Class_2_F5737224A0253470;
class Class_3_650F49643915C963;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A74B60)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A74C00)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A739F0)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A73CB0)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x7A73D70)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A74CE0)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A74D90)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A74E00)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A74E80)
#define MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A74EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoReportWidgetController_TypeDefinitionIndex = 69141;

	class UIHollowInfoReportWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_61AC41B6DCFBC671* _questModel; // 0x2A0
		::Class_2_F5737224A0253470* _hollowModel; // 0x2A8
		::System::Collections::Generic::List_1<::Class_3_650F49643915C963*>* reports; // 0x2B0
		::Class_2_019E0BFBA684A742_4* _view; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
