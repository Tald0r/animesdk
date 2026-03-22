#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8520F4E95ECDA1C3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC3FEFE0)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3FEFF0)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3FF060)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC3FF440)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xC3FF370)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC3FF160)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC3FF230)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3FF570)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3FF580)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC3FF5F0)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xC3FF600)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC3FF610)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC3FF620)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontPreparePageController_TypeDefinitionIndex = 45031;

	class UIVoidFrontPreparePageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_8520F4E95ECDA1C3* get__viewModel()
		{
			return ((::Class_2_8520F4E95ECDA1C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
