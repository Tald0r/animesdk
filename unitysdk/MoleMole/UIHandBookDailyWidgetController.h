#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_8C2EE9BE6ADE8BB7;
class Class_2_208CC9941471731A_187;
class Class_2_79AE422BA06F6D26_138;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC00AFA0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xC00B120)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC00A7F0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC00B040)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0099E0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC00A0A0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0xC00A420)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET UNITYSDK_OFFSET(0xC00AA20)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC00B190)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xC00B240)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0xC00B260)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_2_OFFSET UNITYSDK_OFFSET(0xC00B280)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_3_OFFSET UNITYSDK_OFFSET(0xC00B2F0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC00B360)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC00B3D0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC00B440)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC00B4C0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC00B520)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookDailyWidgetController_TypeDefinitionIndex = 68435;

	class UIHandBookDailyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_208CC9941471731A_187* _entry; // 0x2A0
		::Class_2_79AE422BA06F6D26_138* _view; // 0x2A8
		::System::Collections::Generic::List_1<::Class_1_8C2EE9BE6ADE8BB7*>* _bossItems; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, _);
		}

		::System::Void RefreshRewardBuffView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__ONUIINIT_B__3_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
