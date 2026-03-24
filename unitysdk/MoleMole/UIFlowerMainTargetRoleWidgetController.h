#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_BFB2914C322C9564;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController_Context; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController_ViewModel; }
namespace MoleMole { class UIFlowerMainTargetRole_TagNumWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRole_TargetWidgetController; }

#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0xADE0CA0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0xADE1330)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0xADE0E00)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0xADE0D00)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xADE1510)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xADE1470)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xADE0E90)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xADE15F0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xADE0B80)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_SHOWSUBWIDGET_OFFSET UNITYSDK_OFFSET(0xADE0FC0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xADE16D0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xADE17A0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xADE1800)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xADE1870)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xADE18E0)
#define MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xADE1960)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTargetRoleWidgetController_TypeDefinitionIndex = 79578;

	class UIFlowerMainTargetRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BFB2914C322C9564* _view; // 0x2A0
		::MoleMole::UIFlowerMainTargetRoleWidgetController_Context* _context; // 0x2A8
		::MoleMole::UIFlowerMainTargetRoleWidgetController_ViewModel* _viewModel; // 0x2B0
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2B8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x2C0
		::MoleMole::UIFlowerMainTargetRole_TargetWidgetController* _targetWidget; // 0x2C8
		::MoleMole::UIFlowerMainTargetRole_TagNumWidgetController* _tagNumWidget; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void ShowSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_SHOWSUBWIDGET_OFFSET))(this);
		}

		::System::Void BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER_BINDBUTTON_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
