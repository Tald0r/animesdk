#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7ABF2118692E7A85_6;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }

#define MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x68D2440)
#define MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x68D24E0)
#define MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x68D25C0)
#define MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x68D26D0)
#define MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x68D2700)
#define MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x68D2770)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyQteEffWidgetController_TypeDefinitionIndex = 48553;

	class UIMonsterFantasyQteEffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7ABF2118692E7A85_6* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayAnim(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER_PLAYANIM_OFFSET))(this, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEEFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
