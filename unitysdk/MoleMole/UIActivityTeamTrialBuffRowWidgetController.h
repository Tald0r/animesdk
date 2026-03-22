#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_374D688FD254861E;
namespace MoleMole { class UIActivityTeamTrialBuffRowWidgetController_RowData; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_GETDATA_OFFSET UNITYSDK_OFFSET(0xD3C7910)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xD3C7860)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD3C6A70)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD3C6D50)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD3C6C70)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_REFRESHGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0xD3C7380)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETBTNINTERACT_OFFSET UNITYSDK_OFFSET(0xD3C75E0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETCUSTOMSELECT_OFFSET UNITYSDK_OFFSET(0xD3C74B0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETENABLE_OFFSET UNITYSDK_OFFSET(0xD3C71F0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETSELECTSHOW_OFFSET UNITYSDK_OFFSET(0xD3C70D0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD3C7980)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xD3C7990)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD3C79A0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD3C7A10)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD3C7A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialBuffRowWidgetController_TypeDefinitionIndex = 37581;

	class UIActivityTeamTrialBuffRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_374D688FD254861E* _view; // 0x2D0
		::MoleMole::UIActivityTeamTrialBuffRowWidgetController_RowData* _data; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetSelectShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETSELECTSHOW_OFFSET))(this, isShow);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void SetCustomSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETCUSTOMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETENABLE_OFFSET))(this, enable);
		}

		::System::Void SetBtnInteract(::System::Boolean interact, ::System::String* flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETBTNINTERACT_OFFSET))(this, interact, flag);
		}

		::System::Void RefreshGamePadSelectable(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_REFRESHGAMEPADSELECTABLE_OFFSET))(this, questID);
		}

		::MoleMole::UIActivityTeamTrialBuffRowWidgetController_RowData* GetData()
		{
			return ((::MoleMole::UIActivityTeamTrialBuffRowWidgetController_RowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_GETDATA_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
