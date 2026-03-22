#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5DA2E7556103D5A3_280;
class Class_1_5DA2E7556103D5A3_288;
class Class_2_1A0B1DA4C9A49AF2;
class Class_2_468A4FBF2E9F527C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_Common_UILineupContext; }
namespace MoleMole { class UIHadalZone_RoomV2_WidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A5EA60)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONSELECTAVATAR_OFFSET UNITYSDK_OFFSET(0x7A5F620)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A5EB00)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A5D5F0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A5D690)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDBTNS_OFFSET UNITYSDK_OFFSET(0x7A5DA90)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDGAMEPAD_OFFSET UNITYSDK_OFFSET(0x7A5E7A0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CLOSEPREV_RANKINGWIDGETS_OFFSET UNITYSDK_OFFSET(0x7A5EBE0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CREATERANKINGWIDGET_OFFSET UNITYSDK_OFFSET(0x7A5EE00)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A5F700)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKEXCHANGEBTN_OFFSET UNITYSDK_OFFSET(0x7A5EF10)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTNREAL_OFFSET UNITYSDK_OFFSET(0x7A5F200)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTN_OFFSET UNITYSDK_OFFSET(0x7A5F130)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__REFRESHREADYSTATUS_OFFSET UNITYSDK_OFFSET(0x7A5E940)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x7A5DCB0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A5FC00)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A5FC70)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A5FCF0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A5FD50)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_B__23_1_OFFSET UNITYSDK_OFFSET(0x7A5FB20)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_G___GETSELECTEDROOM_23_0_OFFSET UNITYSDK_OFFSET(0x7A5F930)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___ONCLICKEXCHANGEBTN_B__16_0_OFFSET UNITYSDK_OFFSET(0x7A5F7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineupV2_WidgetController_TypeDefinitionIndex = 64911;

	class UIHadalZone_LineupV2_WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* OK_GO_BATTLE_TEXT_KEY; // 0x0
		// static const ::System::String* OK_GO_TEAM_TEXT_KEY; // 0x0
		::Class_2_1A0B1DA4C9A49AF2* _view; // 0x2A0
		::MoleMole::UIHadalZone_Common_UILineupContext* _curCtx; // 0x2A8
		::System::Int32 _rankTag; // 0x2B0
		::System::Int32 _isSelectTag; // 0x2B4
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _prevRankingRowWidgetControllers; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _prevRoomWidgetControllers; // 0x2C0
		::Class_1_5DA2E7556103D5A3_288* _curLayerInfo; // 0x2C8
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _UpdateInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__UPDATEINFO_OFFSET))(this);
		}

		::System::Void _ClosePrev_RankingWidgets(::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* widgetControllers, ::System::Action* finish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CLOSEPREV_RANKINGWIDGETS_OFFSET))(this, widgetControllers, finish);
		}

		::System::Void _CreateRankingWidget(::MoleMole::Level::RatingType type, ::Class_1_5DA2E7556103D5A3_280* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CREATERANKINGWIDGET_OFFSET))(this, type, zoneInfo);
		}

		::System::Void _BindBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDBTNS_OFFSET))(this);
		}

		::System::Void _OnClickExchangeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKEXCHANGEBTN_OFFSET))(this);
		}

		::System::Void _OnClickGoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTN_OFFSET))(this);
		}

		::System::Void _OnClickGoBtnReal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTNREAL_OFFSET))(this);
		}

		::System::Void OnSelectAvatar(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONSELECTAVATAR_OFFSET))(this, args);
		}

		::System::Void _RefreshReadyStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__REFRESHREADYSTATUS_OFFSET))(this);
		}

		::System::Void _BindGamepad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDGAMEPAD_OFFSET))(this);
		}

		::System::Void __OnClickExchangeBtn_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___ONCLICKEXCHANGEBTN_B__16_0_OFFSET))(this);
		}

		::MoleMole::UIHadalZone_RoomV2_WidgetController* __BindGamepad_g___GetSelectedRoom_23_0()
		{
			return ((::MoleMole::UIHadalZone_RoomV2_WidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_G___GETSELECTEDROOM_23_0_OFFSET))(this);
		}

		::System::Void __BindGamepad_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_B__23_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
