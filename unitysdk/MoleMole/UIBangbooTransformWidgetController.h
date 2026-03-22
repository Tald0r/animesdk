#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_75FB4A09078427E5_4;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBB03E50)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBB03EF0)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBB03AC0)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_OPENEDITORPANEL_OFFSET UNITYSDK_OFFSET(0xBB03FD0)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBB04140)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBB04170)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBB041E0)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBB04260)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooTransformWidgetController_TypeDefinitionIndex = 63960;

	class UIBangbooTransformWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_75FB4A09078427E5_4* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenEditorPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_OPENEDITORPANEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
