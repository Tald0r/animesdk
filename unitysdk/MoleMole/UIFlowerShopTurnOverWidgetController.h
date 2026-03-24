#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_C3DB7F0FA001A5C2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerShopTurnOverWidgetController_ViewModel; }
namespace MoleMole { class UIIncomeNumWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0xC0ED830)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0xC0ED700)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xC0ED9B0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0EDB10)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC0EDBB0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0ED640)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC0EDA60)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_REFRESHINCOME_OFFSET UNITYSDK_OFFSET(0xC0EDEA0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_SETINCOME_OFFSET UNITYSDK_OFFSET(0xC0EDC90)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__8_0_OFFSET UNITYSDK_OFFSET(0xC0EE820)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0EE6D0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xC0EE920)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0EE980)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC0EE9F0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0EEA70)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC0EEAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopTurnOverWidgetController_TypeDefinitionIndex = 71028;

	class UIFlowerShopTurnOverWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C3DB7F0FA001A5C2* _view; // 0x2A0
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2A8
		::MoleMole::UIFlowerShopTurnOverWidgetController_ViewModel* _viewModel; // 0x2B0
		::System::Collections::Generic::List_1<::MoleMole::UIIncomeNumWidgetController*>* _numWidgets; // 0x2B8
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* _incomeNumAnims; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetIncome(::System::Int32 income, ::System::Boolean animation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_SETINCOME_OFFSET))(this, income, animation);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void RefreshInCome(::System::Boolean animation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_REFRESHINCOME_OFFSET))(this, animation);
		}

		::System::Void _BuildViewModelDataBinding_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__8_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
