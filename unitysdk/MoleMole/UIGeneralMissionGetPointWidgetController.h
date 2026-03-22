#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3F751654DB473886_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD574110)
#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD5741B0)
#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD573FC0)
#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD574060)
#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0xD573EF0)
#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD574290)
#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD5742C0)
#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD574330)
#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD5743B0)
#define MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD574410)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMissionGetPointWidgetController_TypeDefinitionIndex = 63587;

	class UIGeneralMissionGetPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3F751654DB473886_2* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_SETSELECT_OFFSET))(this, state);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONGETPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
