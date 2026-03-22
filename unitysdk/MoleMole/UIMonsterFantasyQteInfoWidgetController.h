#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_8127D35606966C67_23;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC0C2C0)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC0C360)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_REFRESHTEXTKEY_OFFSET UNITYSDK_OFFSET(0xAC0C440)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC0C4D0)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC0C500)
#define MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC0C570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyQteInfoWidgetController_TypeDefinitionIndex = 60061;

	class UIMonsterFantasyQteInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8127D35606966C67_23* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshTextKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER_REFRESHTEXTKEY_OFFSET))(this, key);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYQTEINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
