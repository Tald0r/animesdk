#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_77ADBA378EFC2D41.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_FEC40CC23204DEDF;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UICinemaInvitePageController; }
namespace MoleMole { class UICinemaRewardLevelRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_EXITPREPPAGE_OFFSET UNITYSDK_OFFSET(0xD0F8C40)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_INITFIRSTSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0xD0F7F60)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_INITRIGHTREWARDROW_OFFSET UNITYSDK_OFFSET(0xD0F6E10)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCLICKROLEITEM_OFFSET UNITYSDK_OFFSET(0xD0F8380)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCLICKROLESELECT_OFFSET UNITYSDK_OFFSET(0xD0F8970)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD0F8650)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xD0F87D0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD0F86F0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD0F7B10)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD0F7BC0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_REFRESHDESC_OFFSET UNITYSDK_OFFSET(0xD0F75F0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_REFRESHTARGETDATELEVEL_OFFSET UNITYSDK_OFFSET(0xD0F6FA0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_RESETCLICKMASK_OFFSET UNITYSDK_OFFSET(0xD0F8E20)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0F8E90)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD0F8F40)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xD0F8FB0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD0F9070)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD0F90F0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD0F9150)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaInviteRoleWidgetController_TypeDefinitionIndex = 44558;

	class UICinemaInviteRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UICinemaRewardLevelRowWidgetController*>* levelRowList; // 0x2A0
		::Il2CppArray<::Enum_3_77ADBA378EFC2D41>* pointLevels; // 0x2A8
		::Class_2_FEC40CC23204DEDF* _view; // 0x2B0
		::MoleMole::UICinemaInvitePageController* parentPageController; // 0x2B8
		::System::Boolean clickRoleMask; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitRightRewardRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_INITRIGHTREWARDROW_OFFSET))(this);
		}

		::System::Void RefreshTargetDateLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_REFRESHTARGETDATELEVEL_OFFSET))(this);
		}

		::System::Void RefreshDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_REFRESHDESC_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Int32 InitFirstSelectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_INITFIRSTSELECTLEVEL_OFFSET))(this);
		}

		::System::Void OnClickRoleItem(::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCLICKROLEITEM_OFFSET))(this, selectIndex);
		}

		::System::Void OnClickRoleSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCLICKROLESELECT_OFFSET))(this);
		}

		::System::Void ExitPrepPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_EXITPREPPAGE_OFFSET))(this);
		}

		::System::Void ResetClickMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_RESETCLICKMASK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
