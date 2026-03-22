#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_33;
class Class_3_39E7492E16896206_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0xEE5DBA0)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEE5C740)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xEE5C8C0)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEE5C7E0)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEE5C4B0)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEE5C690)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xEE5C960)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0xEE5DCC0)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0xEE5DC30)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEE5DD30)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEE5DD60)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEE5DDD0)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEE5DE50)
#define MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEE5DEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistAvatarPlanWidgetController_TypeDefinitionIndex = 39507;

	class UIWishlistAvatarPlanWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_33* _view; // 0x2A0
		::System::Action* _itemClickAct; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_ONSELECT_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 avatarId, ::Class_3_39E7492E16896206_3* avatarWishlistPlan)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_39E7492E16896206_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, avatarId, avatarWishlistPlan);
		}

		::System::Void ClearSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_CLEARSELECT_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean bSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_SETSELECT_OFFSET))(this, bSelect);
		}

		::System::Void SetItemClickedAct(::System::Action* itemClickAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickAct);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTAVATARPLANWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
