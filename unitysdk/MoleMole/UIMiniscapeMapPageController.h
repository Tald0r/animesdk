#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_17FCF354542601B4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMiniScapeMapPage_MapIconDetailWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_TopWidgetController; }
namespace MoleMole { class UIMiniscapeMapPageController_Model; }
namespace MoleMole { class UIMiniscapeMapPageController_ViewModel; }

#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x8F4E3D0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BINDDATA_OFFSET UNITYSDK_OFFSET(0x8F4E1D0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x8F4EF50)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDFAKEDATA_OFFSET UNITYSDK_OFFSET(0x8F4EA80)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x8F4E430)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0x8F4EAE0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8F4E060)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x8F4F070)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8F4E070)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8F4EFE0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8F4E110)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8F4E670)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__BUILDVIEWMODELDATABINDING_B__13_0_OFFSET UNITYSDK_OFFSET(0x8F4F290)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__BUILDVIEWMODELDATABINDING_B__13_1_OFFSET UNITYSDK_OFFSET(0x8F4F2B0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F4F150)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x8F4F2D0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8F4F330)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8F4F3A0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8F4F3B0)
#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8F4F3C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMapPageController_TypeDefinitionIndex = 60434;

	class UIMiniscapeMapPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_17FCF354542601B4* _view; // 0x2F8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x300
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x308
		::MoleMole::UIMiniscapeMapPageController_Model* _model; // 0x310
		::MoleMole::UIMiniscapeMapPageController_ViewModel* _viewModel; // 0x318
		::MoleMole::UIMiniScapeMapPage_MapWidgetController* _mapWidget; // 0x320
		::MoleMole::UIMiniScapeMapPage_MapIconDetailWidgetController* _mapIconDetailWidget; // 0x328
		::MoleMole::UIMiniScapeMapPage_TopWidgetController* _topWidget; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BINDBUTTON_OFFSET))(this);
		}

		::System::Void BindData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BINDDATA_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void BuildFakeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_BUILDFAKEDATA_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__BUILDVIEWMODELDATABINDING_B__13_0_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER__BUILDVIEWMODELDATABINDING_B__13_1_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
