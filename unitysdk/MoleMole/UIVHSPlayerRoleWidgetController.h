#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVHSPlayerRoleWidgetController_PlayerType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_214D9C2B38669660;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET UNITYSDK_OFFSET(0x8813AB0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NAMETEXTMAP_OFFSET UNITYSDK_OFFSET(0x8813F20)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NPCRESOURCE_OFFSET UNITYSDK_OFFSET(0x8813FC0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x8814060)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8813930)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x88139D0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8813850)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_SET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x8814070)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8814100)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8814130)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x88141A0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8814220)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSPlayerRoleWidgetController_TypeDefinitionIndex = 47992;

	class UIVHSPlayerRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* SisterNPCResource; // 0x0
		// static const ::System::String* BrotherNPCResource; // 0x0
		// static const ::System::String* SisterNameTextmap; // 0x0
		// static const ::System::String* BrotherNameTextmap; // 0x0
		::Class_2_214D9C2B38669660* _view; // 0x2A0
		::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType _playerType; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AfterDataChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET))(this);
		}

		::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType get_playerType()
		{
			return ((::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_PLAYERTYPE_OFFSET))(this);
		}

		::System::Void set_playerType(::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_SET_PLAYERTYPE_OFFSET))(this, value);
		}

		::System::String* get_nameTextmap()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NAMETEXTMAP_OFFSET))(this);
		}

		::System::String* get_npcResource()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NPCRESOURCE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
