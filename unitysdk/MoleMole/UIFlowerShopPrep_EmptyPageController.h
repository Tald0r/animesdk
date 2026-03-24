#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_69CBB7FF0BE6A673_30;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerShopPrepPageController; }
namespace MoleMole { class UIFlowerShopPrep_EmptyPageController_Context; }
namespace MoleMole { class UIFortuneFlowerShop3DModelController; }
namespace System { class Action; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x9BD1420)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ISQUESTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9BD24B0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9BD1430)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONOPENMAINCITYSTOREPAGE_OFFSET UNITYSDK_OFFSET(0x9BD1A90)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9BD1790)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONSTOREEXIT_OFFSET UNITYSDK_OFFSET(0x9BD2720)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9BD1A00)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9BD14D0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9BD15E0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_OPENMAINPAGE_OFFSET UNITYSDK_OFFSET(0x9BD2AB0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD2BA0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__ONSTOREEXIT_G__USENORMALEXITTRIGGER_10_0_OFFSET UNITYSDK_OFFSET(0x9BD28A0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x9BD2BB0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9BD2BC0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONOPENMAINCITYSTOREPAGE_OFFSET UNITYSDK_OFFSET(0x9BD2C30)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9BD2CB0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONSTOREEXIT_OFFSET UNITYSDK_OFFSET(0x9BD2D20)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9BD2D30)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9BD2D40)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9BD2D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopPrep_EmptyPageController_TypeDefinitionIndex = 54675;

	class UIFlowerShopPrep_EmptyPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_30* _view; // 0x308
		::MoleMole::UIFlowerShopPrep_EmptyPageController_Context* _context; // 0x310
		::MoleMole::UIFortuneFlowerShop3DModelController* _flowerShop3DModelController; // 0x318
		::MoleMole::UIFlowerShopPrepPageController* _prepPageController; // 0x320
		::System::Boolean _setExitTriggerInteract; // 0x328
		::System::Boolean _overrideNpc; // 0x329

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnOpenMainCityStorePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONOPENMAINCITYSTOREPAGE_OFFSET))(this);
		}

		::System::Void OnStoreExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONSTOREEXIT_OFFSET))(this);
		}

		::System::Void OpenMainPage(::System::Action* pageCloseAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_OPENMAINPAGE_OFFSET))(this, pageCloseAction);
		}

		::System::Boolean IsQuestInProgress(::System::Int32 quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ISQUESTINPROGRESS_OFFSET))(this, quest);
		}

		::System::Void _OnUIInit_b__5_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET))(this, args);
		}

		::System::Boolean _OnStoreExit_g__UseNormalExitTrigger_10_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__ONSTOREEXIT_G__USENORMALEXITTRIGGER_10_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnOpenMainCityStorePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONOPENMAINCITYSTOREPAGE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnStoreExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONSTOREEXIT_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
