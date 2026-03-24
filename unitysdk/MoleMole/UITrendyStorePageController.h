#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/MoleMole/UITrendyStorePageController_ETabIndex.h"

class Class_2_065F6532BB8853AC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITrendyStrore3DModelController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x990F480)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x990FD50)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x990F490)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x990FCA0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x990FA70)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x990F530)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x990FB00)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET UNITYSDK_OFFSET(0x99104F0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENTRENDYSTOREWIDGET_OFFSET UNITYSDK_OFFSET(0x990FE00)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENWEAPONPREVIEWWIDGET_OFFSET UNITYSDK_OFFSET(0x9910780)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_SHOWBACKBTNGAMEPADTIP_OFFSET UNITYSDK_OFFSET(0x990FC10)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9910A20)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENBLACKSMITHWIDGET_B__14_0_OFFSET UNITYSDK_OFFSET(0x9910B60)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENTRENDYSTOREWIDGET_B__13_0_OFFSET UNITYSDK_OFFSET(0x9910A30)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENWEAPONPREVIEWWIDGET_B__15_0_OFFSET UNITYSDK_OFFSET(0x9910CB0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONCLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x9910DE0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9910E40)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONOPENFILTER_OFFSET UNITYSDK_OFFSET(0x9910EB0)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9910F10)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9910F20)
#define MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9910F30)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStorePageController_TypeDefinitionIndex = 50856;

	class UITrendyStorePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_065F6532BB8853AC* _view; // 0x308
		::MoleMole::UITrendyStrore3DModelController* _trendyStrore3DModelController; // 0x310
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x318
		::MoleMole::UIWindowController* _curWidget; // 0x320
		::System::Boolean _isSwitchingWidget; // 0x328
		::MoleMole::UITrendyStorePageController_ETabIndex _tabIndex; // 0x32C
		::System::Int32 _selectWeaponPro; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ShowBackBtnGamepadTip(::System::Boolean open)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_SHOWBACKBTNGAMEPADTIP_OFFSET))(this, open);
		}

		::System::Void OnOpenFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONOPENFILTER_OFFSET))(this);
		}

		::System::Void OnCloseFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_ONCLOSEFILTER_OFFSET))(this);
		}

		::System::Void OpenTrendyStoreWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENTRENDYSTOREWIDGET_OFFSET))(this);
		}

		::System::Void OpenBlackSmithWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENBLACKSMITHWIDGET_OFFSET))(this);
		}

		::System::Void OpenWeaponPreviewWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER_OPENWEAPONPREVIEWWIDGET_OFFSET))(this);
		}

		::System::Void _OpenTrendyStoreWidget_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENTRENDYSTOREWIDGET_B__13_0_OFFSET))(this);
		}

		::System::Void _OpenBlackSmithWidget_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENBLACKSMITHWIDGET_B__14_0_OFFSET))(this);
		}

		::System::Void _OpenWeaponPreviewWidget_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER__OPENWEAPONPREVIEWWIDGET_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCloseFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONCLOSEFILTER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnOpenFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONOPENFILTER_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
