#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_5DA2E7556103D5A3_280;
class Class_1_5DA2E7556103D5A3_288;
class Class_2_468A4FBF2E9F527C;
class Class_2_79F6D62CE30E3F8E_21;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalLineUp_LayerClipWidgetController; }
namespace MoleMole { class UIHadalZone_LineUpPageController_ZoneLineUpInfoContext; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAA11B90)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA11BA0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONSELECTAVATAR_OFFSET UNITYSDK_OFFSET(0xAA12C70)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA12FD0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA11C40)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA11CB0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__CLOSEPREV_RANKINGWIDGETS_OFFSET UNITYSDK_OFFSET(0xAA13530)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__CREATERANKINGWIDGET_OFFSET UNITYSDK_OFFSET(0xAA13750)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA13870)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__GO_OFFSET UNITYSDK_OFFSET(0xAA12E50)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__ONLAYERCLIPCLICK_OFFSET UNITYSDK_OFFSET(0xAA13060)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__ONSELECTAVATAR_B__9_0_OFFSET UNITYSDK_OFFSET(0xAA13AF0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__ONUIOPEN_B__8_1_OFFSET UNITYSDK_OFFSET(0xAA139B0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__REFRESHBTNS_OFFSET UNITYSDK_OFFSET(0xAA12190)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__REFRESHLAYER_OFFSET UNITYSDK_OFFSET(0xAA124D0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__REFRESHOTHERLAYERS_OFFSET UNITYSDK_OFFSET(0xAA123F0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__SCROLLTOINDEX_OFFSET UNITYSDK_OFFSET(0xAA12D30)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA13C10)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA13C80)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA13C90)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA13CA0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___REFRESHBTNS_B__11_0_OFFSET UNITYSDK_OFFSET(0xAA13C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineUpPageController_TypeDefinitionIndex = 47042;

	class UIHadalZone_LineUpPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_21* _view; // 0x2F8
		::MoleMole::UIHadalZone_LineUpPageController_ZoneLineUpInfoContext* _curCtx; // 0x300
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _prevRankingRowWidgetControllers; // 0x310
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _prevRoomWidgetControllers; // 0x318
		::MoleMole::UIHadalLineUp_LayerClipWidgetController* _lastClickWdiget; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIHadalLineUp_LayerClipWidgetController*>* _initedWidgetControllers; // 0x328
		::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_280*>* _zoneLayers; // 0x330
		::Class_1_5DA2E7556103D5A3_288* _lastLayerInfo; // 0x338
		::System::Int32 _rankTag; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnSelectAvatar(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONSELECTAVATAR_OFFSET))(this, eventArgs);
		}

		::System::Void _ScrollToIndex(::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__SCROLLTOINDEX_OFFSET))(this, layerIndex);
		}

		::System::Void _RefreshBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__REFRESHBTNS_OFFSET))(this);
		}

		::System::Void _Go()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__GO_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnLayerClipClick(::MoleMole::UIHadalLineUp_LayerClipWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalLineUp_LayerClipWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__ONLAYERCLIPCLICK_OFFSET))(this, widget);
		}

		::System::Void _RefreshOtherLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__REFRESHOTHERLAYERS_OFFSET))(this);
		}

		::System::Void _RefreshLayer(::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__REFRESHLAYER_OFFSET))(this, layerIndex);
		}

		::System::Void _ClosePrev_RankingWidgets(::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* widgetControllers, ::System::Action* finish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__CLOSEPREV_RANKINGWIDGETS_OFFSET))(this, widgetControllers, finish);
		}

		::System::Void _CreateRankingWidget(::MoleMole::Level::RatingType type, ::Class_1_5DA2E7556103D5A3_280* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__CREATERANKINGWIDGET_OFFSET))(this, type, zoneInfo);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIOpen_b__8_1(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__ONUIOPEN_B__8_1_OFFSET))(this, reference);
		}

		::System::Void _OnSelectAvatar_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__ONSELECTAVATAR_B__9_0_OFFSET))(this);
		}

		::System::Void __RefreshBtns_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___REFRESHBTNS_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
