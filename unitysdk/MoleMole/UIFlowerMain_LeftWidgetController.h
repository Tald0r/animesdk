#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_3F217C90780E6324;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerMainTargetImgWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController; }
namespace MoleMole { class UIFlowerMain_LeftWidgetController_Context; }
namespace MoleMole { class UIFlowerMain_LeftWidgetController_ViewModel; }

#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0xBEFF8F0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0xBEFFF00)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0xBEFF950)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0xBEFFB10)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xBF00180)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF000E0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBEFF9E0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF00260)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBEFF7D0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__BUILDDATABINDING_B__7_0_OFFSET UNITYSDK_OFFSET(0xBF00410)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF00340)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xBF007F0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF00850)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBF008C0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF00930)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF009B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_LeftWidgetController_TypeDefinitionIndex = 53188;

	class UIFlowerMain_LeftWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3F217C90780E6324* _view; // 0x2A0
		::MoleMole::UIFlowerMain_LeftWidgetController_Context* _context; // 0x2A8
		::MoleMole::UIFlowerMain_LeftWidgetController_ViewModel* _viewModel; // 0x2B0
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2B8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x2C0
		::MoleMole::UIFlowerMainTargetRoleWidgetController* _mainTargetRoleWidget; // 0x2C8
		::MoleMole::UIFlowerMainTargetImgWidgetController* _mainTargetImgWidget; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BINDBUTTON_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__BUILDDATABINDING_B__7_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
