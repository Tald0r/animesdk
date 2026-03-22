#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_12BDE7300F0E061C;
class Class_2_DEDA0A8B1248646D;
class Class_3_C3F0E3B5AB5977AE_40;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0xCA416F0)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA414A0)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA41540)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA40C40)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCA40CE0)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xCA40E10)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0xCA41770)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA417E0)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER__REFRESHVIEW_G__GETPROPERTYICONPATH_9_1_OFFSET UNITYSDK_OFFSET(0xCA41620)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA41810)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA41880)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA41900)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCA41960)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypePropertyRowWidgetController_TypeDefinitionIndex = 75174;

	class UIRecommendTypePropertyRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DEDA0A8B1248646D* _view; // 0x2A0
		::MoleMole::UIRoleEquipRecommendPopContext_1<::Class_2_12BDE7300F0E061C*>* _context; // 0x2A8
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetController; // 0x2B0
		::System::Boolean needSelect; // 0x2B8
		::System::Action* _itemClickAct; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_3_C3F0E3B5AB5977AE_40* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_40*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void ClearSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_CLEARSELECT_OFFSET))(this);
		}

		::System::Void SetItemClickedAct(::System::Action* itemClickAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickAct);
		}

		static ::System::String* _RefreshView_g__GetPropertyIconPath_9_1(::System::Int32 propertyId)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER__REFRESHVIEW_G__GETPROPERTYICONPATH_9_1_OFFSET))(propertyId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
