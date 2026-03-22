#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_444818AABEB7D542;
class Class_3_F92F6A6188E34427;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC0A3E50)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC0A3E60)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET UNITYSDK_OFFSET(0xC0A5A20)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC0A3ED0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC0A41A0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC0A3FD0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_REFRESHPVEPROGRESS_OFFSET UNITYSDK_OFFSET(0xC0A4C50)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xC0A5810)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SHOWINVITE_OFFSET UNITYSDK_OFFSET(0xC0A5900)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_TRYJOINABPVP_OFFSET UNITYSDK_OFFSET(0xC0A5AF0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A6180)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__ISALLOWSHOWINVITE_B__13_0_OFFSET UNITYSDK_OFFSET(0xC0A6190)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC0A61A0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC0A6210)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC0A6280)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xC0A6290)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController_TypeDefinitionIndex = 62044;

	class UIAutoBattlePrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Boolean _isShowingInvite; // 0x308
		::MoleMole::UIGeneralNewHintWidgetController* _newHint; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_444818AABEB7D542* get__viewModel()
		{
			return ((::Class_2_444818AABEB7D542*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshPVEProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_REFRESHPVEPROGRESS_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void ShowInvite(::Class_3_F92F6A6188E34427* nextInvite, ::System::Action* onAcceptShowAction, ::System::Action* recursiveShowInvite)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F92F6A6188E34427*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SHOWINVITE_OFFSET))(this, nextInvite, onAcceptShowAction, recursiveShowInvite);
		}

		::System::Boolean IsAllowShowInvite(::System::Action*& onAcceptShowAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET))(this, onAcceptShowAction);
		}

		::System::Boolean TryJoinABPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_TRYJOINABPVP_OFFSET))(this);
		}

		::System::Void _IsAllowShowInvite_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__ISALLOWSHOWINVITE_B__13_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
