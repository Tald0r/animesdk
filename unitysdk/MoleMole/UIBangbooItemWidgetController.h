#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_04C0D840520454A3;
class Class_2_E4599E405340A799;
class Class_2_F51BBF303F6FB2C0;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ENABLEHINT_OFFSET UNITYSDK_OFFSET(0xAC37810)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONBUDDYFAVORITE_OFFSET UNITYSDK_OFFSET(0xAC390F0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC37880)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xAC38FB0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAC37F30)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC37920)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC370F0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUPDATEBUDDY_OFFSET UNITYSDK_OFFSET(0xAC39080)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0xAC387D0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETFAVORITESTATE_OFFSET UNITYSDK_OFFSET(0xAC38F10)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETRARITY_OFFSET UNITYSDK_OFFSET(0xAC38E60)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0xAC38B20)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xAC38230)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC392B0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xAC392C0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xAC39680)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC398E0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xAC39950)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAC399C0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC39A40)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC39AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooItemWidgetController_TypeDefinitionIndex = 71901;

	class UIBangbooItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_04C0D840520454A3* _view; // 0x2D0
		::Class_2_F51BBF303F6FB2C0* _data; // 0x2D8
		::System::Int32 MaxStarCount; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void SetStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETSTAR_OFFSET))(this);
		}

		::System::Void SetRarity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETRARITY_OFFSET))(this);
		}

		::System::Void SetFavoriteState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETFAVORITESTATE_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUpdateBuddy(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUPDATEBUDDY_OFFSET))(this, args);
		}

		::System::Void OnBuddyFavorite(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONBUDDYFAVORITE_OFFSET))(this, arg);
		}

		::System::Void RegisterNotify(::Class_2_E4599E405340A799* itemdata)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E4599E405340A799*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET))(this, itemdata);
		}

		::System::Void EnableHint(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ENABLEHINT_OFFSET))(this, enable);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
