#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79F6D62CE30E3F8E_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x95E1EA0)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_ONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x95E2520)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95E2600)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x95E26A0)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95E1F90)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_REFRESHMAX_OFFSET UNITYSDK_OFFSET(0x95E28D0)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_REFRESHNUM_OFFSET UNITYSDK_OFFSET(0x95E3010)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x95E1EB0)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95E3160)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__ONSHOW_B__8_0_OFFSET UNITYSDK_OFFSET(0x95E32A0)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x95E3170)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__ONUIINIT_B__5_1_OFFSET UNITYSDK_OFFSET(0x95E3180)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__ONUIINIT_B__5_2_OFFSET UNITYSDK_OFFSET(0x95E3220)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95E32B0)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x95E3320)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95E3330)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x95E3340)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleEliteSweepTipController_TypeDefinitionIndex = 50292;

	class UIDoubleEliteSweepTipController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Action_1<::System::Int32>* OnClick; // 0x2F8
		::Class_2_79F6D62CE30E3F8E_3* _view; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_ONCLICKCALLBACK_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_REFRESHMAX_OFFSET))(this);
		}

		::System::Void RefreshNum(::System::Int32 newSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER_REFRESHNUM_OFFSET))(this, newSelect);
		}

		::System::Void _OnUIInit_b__5_0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__ONUIINIT_B__5_0_OFFSET))(this, value);
		}

		::System::Void _OnUIInit_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__ONUIINIT_B__5_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__ONUIINIT_B__5_2_OFFSET))(this);
		}

		::System::Void _OnShow_b__8_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER__ONSHOW_B__8_0_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
