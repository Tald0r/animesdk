#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_5DA2E7556103D5A3_245;
class Class_2_468A4FBF2E9F527C;
class Class_2_E350A84CD081451D;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace MoleMole { class UIHadalZoneItemInfoV2WidgetController; }
namespace MoleMole { class UIHadalZone_Common_LayerItemRowContext; }
namespace MoleMole { class UIHadalZone_LayerItemRowV2WidgetController; }
namespace MoleMole { class UIHadalZone_LineupV2_WidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_CREATEIMPACTBATTLELAYER_OFFSET UNITYSDK_OFFSET(0xA952D70)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_CREATENORMALLAYER_OFFSET UNITYSDK_OFFSET(0xA9529D0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_GET_ONENTERLAYERROOMCALLBACK_OFFSET UNITYSDK_OFFSET(0xA94FFA0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_GET_ONSWITCHZONE_OFFSET UNITYSDK_OFFSET(0xA94FF80)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA9515C0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xA9551C0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xA955000)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA952070)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA9514F0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA954580)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONPARENTWINDOWFADEINDONE_OFFSET UNITYSDK_OFFSET(0xA953D40)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONREWARDNOTIFICATIONUPDATE_OFFSET UNITYSDK_OFFSET(0xA953E80)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA9512A0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA951660)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA94FFC0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA950280)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_SETLAYERWIDGET_OFFSET UNITYSDK_OFFSET(0xA952AA0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_SET_ONENTERLAYERROOMCALLBACK_OFFSET UNITYSDK_OFFSET(0xA94FFB0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_SET_ONSWITCHZONE_OFFSET UNITYSDK_OFFSET(0xA94FF90)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_UPDATEFRAMETEXTURE_OFFSET UNITYSDK_OFFSET(0xA953DB0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__BINDGAMEPAD_OFFSET UNITYSDK_OFFSET(0xA950FD0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__BINDZONEINFOBTN_OFFSET UNITYSDK_OFFSET(0xA951F00)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__CHECKPREVDYNAMICLAYER_OFFSET UNITYSDK_OFFSET(0xA953670)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__CLOSELAYERSPREV_OFFSET UNITYSDK_OFFSET(0xA951310)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA955540)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__FINDLAYERINDEXTOLISTINDEX_OFFSET UNITYSDK_OFFSET(0xA952E40)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__GAMEPADITEMSUBMIT_OFFSET UNITYSDK_OFFSET(0xA954C70)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__GAMEPADSELECTNAVLISTITEM_OFFSET UNITYSDK_OFFSET(0xA954760)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__MARKALLLAYERROWSTATU_OFFSET UNITYSDK_OFFSET(0xA954340)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__ONCLICK_LAYERITEM_OFFSET UNITYSDK_OFFSET(0xA954170)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__ONCLICK_ZONEINFOITEM_OFFSET UNITYSDK_OFFSET(0xA952730)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__ONUIOPEN_B__14_0_OFFSET UNITYSDK_OFFSET(0xA9556B0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__ONUIOPEN_B__14_2_OFFSET UNITYSDK_OFFSET(0xA955880)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SETLAYERSSCROLLCREATEFUNC_OFFSET UNITYSDK_OFFSET(0xA9507A0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SETLAYERWIDGET_B__41_0_OFFSET UNITYSDK_OFFSET(0xA955F90)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SETLAYERWIDGET_B__41_1_OFFSET UNITYSDK_OFFSET(0xA955FA0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SETLAYERWIDGET_B__41_2_OFFSET UNITYSDK_OFFSET(0xA9560A0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SHOWZONEINFO_OFFSET UNITYSDK_OFFSET(0xA952320)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__TRYSELECTZONEITEM_OFFSET UNITYSDK_OFFSET(0xA951840)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATEBADGE_OFFSET UNITYSDK_OFFSET(0xA953CB0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATECONSOLELAYERBYSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA952570)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATEFRAMETEXTURE_G__SHOULDPLAYREWARDFRAMETEXTURE_47_0_OFFSET UNITYSDK_OFFSET(0xA953EF0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATEZONEINFO_OFFSET UNITYSDK_OFFSET(0xA952FE0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATEZONES_OFFSET UNITYSDK_OFFSET(0xA950960)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATE_ZONELAYERS_OFFSET UNITYSDK_OFFSET(0xA951A80)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA9560E0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xA956150)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xA9561C0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA956230)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA9562F0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA956350)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA956380)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA956390)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA956410)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA956470)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BINDGAMEPAD_B__18_1_OFFSET UNITYSDK_OFFSET(0xA955890)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BINDZONEINFOBTN_B__31_0_OFFSET UNITYSDK_OFFSET(0xA955C20)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___SETLAYERSSCROLLCREATEFUNC_B__38_0_OFFSET UNITYSDK_OFFSET(0xA955E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerV2WidgetController_TypeDefinitionIndex = 54091;

	class UIHadalZone_LayerV2WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E350A84CD081451D* _view; // 0x2A0
		::MoleMole::UIGeneralRewardListBtnWidgetController* _btnCtrl; // 0x2A8
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x2B0
		::System::Action_1<::System::Int32>* _OnSwitchZone_k__BackingField; // 0x2B8
		::System::Action_1<::Class_1_5DA2E7556103D5A3_245*>* _OnEnterLayerRoomCallback_k__BackingField; // 0x2C0
		::System::Int32 _lastTargetShowZoneID; // 0x2C8
		::System::Int32 _pageIndex; // 0x2CC
		::System::Int32 _prePageFixedItemCount; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIHadalZoneItemInfoV2WidgetController*>* _zoneItemCtrlList; // 0x2D8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* _runtimeLayerCtrls; // 0x2E0
		::MoleMole::MonoGamepadNavigatableList* _layerNaviList; // 0x2E8
		::System::Boolean _isParentFadeFinished; // 0x2F0
		::System::Int32 CUR_MAX_SHOW_ZONE; // 0x2F4
		::System::Boolean _isSet; // 0x2F8
		::MoleMole::UIHadalZone_Common_LayerItemRowContext* layerItemRowContext; // 0x300
		::MoleMole::UIHadalZone_Common_LayerItemRowContext* specialLayerItemRowContext; // 0x308
		::MoleMole::UIHadalZone_LineupV2_WidgetController* _lineupCtrl; // 0x310
		::System::Int32 _gamepadListIndex; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Action_1<::System::Int32>* get_OnSwitchZone()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_GET_ONSWITCHZONE_OFFSET))(this);
		}

		::System::Void set_OnSwitchZone(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_SET_ONSWITCHZONE_OFFSET))(this, value);
		}

		::System::Action_1<::Class_1_5DA2E7556103D5A3_245*>* get_OnEnterLayerRoomCallback()
		{
			return ((::System::Action_1<::Class_1_5DA2E7556103D5A3_245*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_GET_ONENTERLAYERROOMCALLBACK_OFFSET))(this);
		}

		::System::Void set_OnEnterLayerRoomCallback(::System::Action_1<::Class_1_5DA2E7556103D5A3_245*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_5DA2E7556103D5A3_245*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_SET_ONENTERLAYERROOMCALLBACK_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void _CloseLayersPrev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__CLOSELAYERSPREV_OFFSET))(this);
		}

		::System::Void _BindGamepad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__BINDGAMEPAD_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _UpdateZones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATEZONES_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void _TrySelectZoneItem(::System::Int32 selectZoneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__TRYSELECTZONEITEM_OFFSET))(this, selectZoneIndex);
		}

		::System::Void _BindZoneInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__BINDZONEINFOBTN_OFFSET))(this);
		}

		::System::Void _ShowZoneInfo(::System::Int32 popWndID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SHOWZONEINFO_OFFSET))(this, popWndID);
		}

		::System::Void _UpdateConsoleLayerBySelectIndex(::System::Int32 listIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATECONSOLELAYERBYSELECTINDEX_OFFSET))(this, listIndex);
		}

		::System::Void _OnClick_ZoneInfoItem(::MoleMole::UIHadalZoneItemInfoV2WidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalZoneItemInfoV2WidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__ONCLICK_ZONEINFOITEM_OFFSET))(this, ctrl);
		}

		::System::Void _SetLayersScrollCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SETLAYERSSCROLLCREATEFUNC_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateNormalLayer(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_CREATENORMALLAYER_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateImpactBattleLayer(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_CREATEIMPACTBATTLELAYER_OFFSET))(this, arg);
		}

		::System::Void SetLayerWidget(::MoleMole::UIHadalZone_LayerItemRowV2WidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_SETLAYERWIDGET_OFFSET))(this, widget);
		}

		::System::Void _Update_ZoneLayers(::System::Int32 targetZoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATE_ZONELAYERS_OFFSET))(this, targetZoneID);
		}

		::System::Int32 _FindLayerIndexToListIndex(::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_245*>* dataList, ::System::Int32 layerIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_245*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__FINDLAYERINDEXTOLISTINDEX_OFFSET))(this, dataList, layerIndex);
		}

		::System::Void OnParentWindowFadeInDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONPARENTWINDOWFADEINDONE_OFFSET))(this);
		}

		::System::Void _UpdateBadge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATEBADGE_OFFSET))(this);
		}

		::System::Void OnRewardNotificationUpdate(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONREWARDNOTIFICATIONUPDATE_OFFSET))(this, count);
		}

		::System::Void UpdateFrameTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_UPDATEFRAMETEXTURE_OFFSET))(this);
		}

		::System::Void _CheckPrevDynamicLayer(::System::Int32 zoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__CHECKPREVDYNAMICLAYER_OFFSET))(this, zoneID);
		}

		::System::Void _UpdateZoneInfo(::System::Int32 zoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATEZONEINFO_OFFSET))(this, zoneID);
		}

		::System::Void _OnClick_LayerItem(::MoleMole::UIHadalZone_LayerItemRowV2WidgetController* itemRowItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__ONCLICK_LAYERITEM_OFFSET))(this, itemRowItem);
		}

		::System::Void _MarkAllLayerRowStatu(::System::Boolean vSelected, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController* skipRow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__MARKALLLAYERROWSTATU_OFFSET))(this, vSelected, skipRow);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void _GamepadSelectNavListItem(::MoleMole::InputLogicEventType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__GAMEPADSELECTNAVLISTITEM_OFFSET))(this, type);
		}

		::System::Void _GamepadItemSubmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__GAMEPADITEMSUBMIT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIOpen_b__14_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__ONUIOPEN_B__14_0_OFFSET))(this, reference);
		}

		::System::Boolean _OnUIOpen_b__14_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__ONUIOPEN_B__14_2_OFFSET))(this);
		}

		::System::Void __BindGamepad_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BINDGAMEPAD_B__18_1_OFFSET))(this);
		}

		::System::Void __BindZoneInfoBtn_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BINDZONEINFOBTN_B__31_0_OFFSET))(this);
		}

		::System::Int32 __SetLayersScrollCreateFunc_b__38_0(::System::Int32 idx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___SETLAYERSSCROLLCREATEFUNC_B__38_0_OFFSET))(this, idx);
		}

		::System::Boolean _SetLayerWidget_b__41_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SETLAYERWIDGET_B__41_0_OFFSET))(this);
		}

		::System::Void _SetLayerWidget_b__41_1(::System::Boolean isActive, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SETLAYERWIDGET_B__41_1_OFFSET))(this, isActive, ctrl);
		}

		::System::Void _SetLayerWidget_b__41_2(::System::Boolean isUnlock, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__SETLAYERWIDGET_B__41_2_OFFSET))(this, isUnlock, ctrl);
		}

		::System::Boolean _UpdateFrameTexture_g__ShouldPlayRewardFrameTexture_47_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER__UPDATEFRAMETEXTURE_G__SHOULDPLAYREWARDFRAMETEXTURE_47_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
