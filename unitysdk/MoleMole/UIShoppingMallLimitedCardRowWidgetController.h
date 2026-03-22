#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_4AE9DE3D2ED9A9E2;
class Class_1_5D810B953231387E;
class Class_2_79AE422BA06F6D26_182;
namespace MoleMole { class ShoppingMallLimitedCardRowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIShoppingMallLimitedCardItemWidgetController; }

#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB27B6D0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xB27B850)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB27B500)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB27B770)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB27B1C0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB27B450)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB27B8E0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB27B910)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xB27B980)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB27B9B0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB27BA20)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB27BAA0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB27BB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallLimitedCardRowWidgetController_TypeDefinitionIndex = 54747;

	class UIShoppingMallLimitedCardRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_182* _view; // 0x2A0
		::MoleMole::ShoppingMallLimitedCardRowContext* _context; // 0x2A8
		::MoleMole::UIShoppingMallLimitedCardItemWidgetController* _item1Controller; // 0x2B0
		::MoleMole::UIShoppingMallLimitedCardItemWidgetController* _item2Controller; // 0x2B8
		::Class_1_4AE9DE3D2ED9A9E2* _loginFundRewardData; // 0x2C0
		::Class_1_5D810B953231387E* _logic; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
