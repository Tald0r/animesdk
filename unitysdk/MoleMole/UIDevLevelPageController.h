#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_69CBB7FF0BE6A673_28;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDevLevelPageController_Context; }
namespace MoleMole { class UIDevLevelPageController_ViewModel; }

#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x95DD7A0)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x95DDAF0)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x95DD860)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0x95DD800)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x95DD4F0)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x95DD5A0)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95DD500)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95DDBB0)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95DD680)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x95DD8F0)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_SHOWSUBWIDGET_OFFSET UNITYSDK_OFFSET(0x95DDA90)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95DDC40)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x95DDCF0)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95DDD50)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95DDDC0)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95DDDD0)
#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x95DDDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDevLevelPageController_TypeDefinitionIndex = 62339;

	class UIDevLevelPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_28* _view; // 0x2F8
		::MoleMole::UIDevLevelPageController_Context* _context; // 0x300
		::MoleMole::UIDevLevelPageController_ViewModel* _viewModel; // 0x308
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x310
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void CreateSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_CREATESUBWIDGET_OFFSET))(this);
		}

		::System::Void ShowSubWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_SHOWSUBWIDGET_OFFSET))(this);
		}

		::System::Void BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_BINDBUTTON_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
