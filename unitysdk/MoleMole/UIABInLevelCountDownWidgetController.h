#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_1_F0E4E2848B1D52CE;
class Class_2_5F53453ACF8181EA;
class Class_2_E71E286B10A21FB0;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x8AA20C0)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_CLEARCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x8AA27E0)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8AA1F40)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET UNITYSDK_OFFSET(0x8AA2460)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8AA1FE0)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8AA1E00)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_SETFILL_OFFSET UNITYSDK_OFFSET(0x8AA29B0)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x8AA2750)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8AA2B20)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8AA2E40)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8AA2E70)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8AA2EE0)
#define MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8AA2F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelCountDownWidgetController_TypeDefinitionIndex = 72154;

	class UIABInLevelCountDownWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* COUNTDOWN_ANIM_NAME; // 0x0
		// static const ::System::String* TOP_EMPTY_IN; // 0x0
		// static const ::System::String* TOP_EMPTY_OUT; // 0x0
		// static const ::System::String* POPUP_EMPTY_IN; // 0x0
		// static const ::System::String* POPUP_EMPTY_OUT; // 0x0
		::Class_2_5F53453ACF8181EA* _view; // 0x2A0
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2A8
		::Class_2_E71E286B10A21FB0* _data; // 0x2B0
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x2B8
		::System::Single _countDownTime; // 0x2C0
		::System::Single _totalSec; // 0x2C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::Class_1_F0E4E2848B1D52CE* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0E4E2848B1D52CE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, viewModel);
		}

		::System::Void OnStageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET))(this);
		}

		::System::Void StartCountDown(::System::Int32 totalSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_STARTCOUNTDOWN_OFFSET))(this, totalSec);
		}

		::System::Void ClearCountDown(::System::Boolean needAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_CLEARCOUNTDOWN_OFFSET))(this, needAnim);
		}

		::System::Void SetFill(::System::Single fill, ::System::Int32 colorIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_SETFILL_OFFSET))(this, fill, colorIdx);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCOUNTDOWNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
