#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48D56DACBE4271BC;
class Class_1_F0E4E2848B1D52CE;
class Class_2_3B0F8CEEFA465A87;
class Class_2_60DDD9C206686F44;
class Class_2_80EF4D0173B06453;
class Class_2_C7387D40D4120A48_9;
class Class_2_C7387D40D4120A48_9_Class_2_EBD92CE648041B43;
class Class_2_E71E286B10A21FB0;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIABInLevelShopWidgetController; }
namespace MoleMole { class UIABInLevelTipsWidgetController; }
namespace MoleMole { class UIABPlayerItemMoveScript; }
namespace MoleMole { class UIABStandbySlotItemWidgetController; }
namespace MoleMole { class UIBangBooAutoBattleInLevelPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0xBF06A10)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_CANCELSELECT_OFFSET UNITYSDK_OFFSET(0xBF07E10)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_DRAGSTANDBYSLOT_OFFSET UNITYSDK_OFFSET(0xBF083A0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GETPLAYERITEMMOVESCRIPT_OFFSET UNITYSDK_OFFSET(0xBF05600)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GETSLIDERVALUE_OFFSET UNITYSDK_OFFSET(0xBF09CF0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_BACKBTN_OFFSET UNITYSDK_OFFSET(0xBF05A10)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xBF059F0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_DRAGPIECE_OFFSET UNITYSDK_OFFSET(0xBF059D0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_ISSHOWDAMAGE_OFFSET UNITYSDK_OFFSET(0xBF0ABA0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_LOCALGROUP_OFFSET UNITYSDK_OFFSET(0xBF05A40)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_RIGHTINFOROOT_OFFSET UNITYSDK_OFFSET(0xBF09E20)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_SHOPWIDGET_OFFSET UNITYSDK_OFFSET(0xBF04610)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_SHOWSTARTBTN_OFFSET UNITYSDK_OFFSET(0xBF06630)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_HOVERONSTANDBYCTRL_OFFSET UNITYSDK_OFFSET(0xBF08570)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ISINSELLAREA_OFFSET UNITYSDK_OFFSET(0xBF079C0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBF0B340)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONBANGBOOREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xBF08860)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONCHILDGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xBF0A5A0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF05760)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONLEVELBTNCLICK_OFFSET UNITYSDK_OFFSET(0xBF09670)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSERVERSORT_OFFSET UNITYSDK_OFFSET(0xBF052C0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET UNITYSDK_OFFSET(0xBF08D80)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSTARTBTNCLICK_OFFSET UNITYSDK_OFFSET(0xBF089A0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF05840)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF04620)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF04F80)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_OPENCURPLAYERINFO_OFFSET UNITYSDK_OFFSET(0xBF0A8E0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_REFRESHRIGHTAREA_OFFSET UNITYSDK_OFFSET(0xBF09E40)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_REFRESHSTATPANEL_OFFSET UNITYSDK_OFFSET(0xBF0ACD0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SAVEFINALBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xBF090A0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETLEVELBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xBF06380)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETSELLPRICE_OFFSET UNITYSDK_OFFSET(0xBF07B10)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETSLIDER_OFFSET UNITYSDK_OFFSET(0xBF09B80)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SET_DRAGPIECE_OFFSET UNITYSDK_OFFSET(0xBF059E0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TICKSTAT_OFFSET UNITYSDK_OFFSET(0xBF0AF10)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEBOTTOM_OFFSET UNITYSDK_OFFSET(0xBF05A70)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEPLAYERFOCUS_OFFSET UNITYSDK_OFFSET(0xBF0A850)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0xBF07C60)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESELLAREA_OFFSET UNITYSDK_OFFSET(0xBF07680)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESHOP_1_OFFSET UNITYSDK_OFFSET(0xBF09790)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESHOP_OFFSET UNITYSDK_OFFSET(0xBF07F00)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TWEENSLIDER_OFFSET UNITYSDK_OFFSET(0xBF099C0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF0B840)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONBANGBOOREACHLIMIT_B__52_0_OFFSET UNITYSDK_OFFSET(0xBF0BC10)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONSTARTBTNCLICK_B__56_0_OFFSET UNITYSDK_OFFSET(0xBF0BD40)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONUIOPEN_B__27_0_OFFSET UNITYSDK_OFFSET(0xBF0B990)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__OPENCURPLAYERINFO_B__69_0_OFFSET UNITYSDK_OFFSET(0xBF0BD60)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__TOGGLESELLAREA_B__44_0_OFFSET UNITYSDK_OFFSET(0xBF0BBA0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__TWEENSLIDER_B__60_0_OFFSET UNITYSDK_OFFSET(0xBF0BD50)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF0BDE0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF0BE50)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF0BED0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF0BF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIABStandbyPhaseWidgetController_TypeDefinitionIndex = 74879;

	class UIABStandbyPhaseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C7387D40D4120A48_9* _view; // 0x2A0
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x2A8
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2B0
		::MoleMole::UIABInLevelShopWidgetController* _shopWidgetController; // 0x2B8
		::MoleMole::UIABInLevelTipsWidgetController* _errorTips; // 0x2C0
		::MoleMole::UIBangBooAutoBattleInLevelPageController* _parent; // 0x2C8
		::Class_2_C7387D40D4120A48_9_Class_2_EBD92CE648041B43* _lvlBtn; // 0x2D0
		::System::Boolean _isInNewbie1; // 0x2D8
		::System::Int32 _lvlUpPrice; // 0x2DC
		::Foundation::Coroutine::CoroutineHandle _lvlUpHandle; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle _expUpHandle; // 0x2E4
		::Foundation::Coroutine::CoroutineHandle _playerRootHandle; // 0x2E8
		::Foundation::Coroutine::CoroutineHandle _statPanelHandle; // 0x2EC
		::Foundation::Coroutine::CoroutineHandle _sellHandle; // 0x2F0
		::Foundation::Coroutine::CoroutineHandle _startBtnHandle; // 0x2F4
		::Foundation::Coroutine::CoroutineHandle _goldHandle; // 0x2F8
		::DG::Tweening::Tween* _expProgressTween; // 0x300
		::System::Double prevGold; // 0x308
		::System::Double prevExp; // 0x310
		::System::String* PROGRESS_FILL; // 0x318
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* playerRootPositions; // 0x320
		::System::Collections::Generic::List_1<::System::UInt32>* PlayerSortList; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIABPlayerItemMoveScript*>* _playerItemMoveScripts; // 0x330
		::MoleMole::MonoGamepadCustomList* _playerList; // 0x338
		::MoleMole::UIABStandbySlotItemWidgetController* _DragPiece_k__BackingField; // 0x340
		::MoleMole::UIABStandbySlotItemWidgetController* _curHovering; // 0x348
		::System::UInt32 _lastPlayerEntityId; // 0x350
		::Class_2_80EF4D0173B06453* _damageStatViewModel; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UIABPlayerItemMoveScript*>* cache; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIABInLevelShopWidgetController* get_ShopWidget()
		{
			return ((::MoleMole::UIABInLevelShopWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_SHOPWIDGET_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnServerSort(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSERVERSORT_OFFSET))(this, obj);
		}

		::MoleMole::UIABPlayerItemMoveScript* GetPlayerItemMoveScript(::System::UInt32 id)
		{
			return ((::MoleMole::UIABPlayerItemMoveScript*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GETPLAYERITEMMOVESCRIPT_OFFSET))(this, id);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::UIABStandbySlotItemWidgetController* get_DragPiece()
		{
			return ((::MoleMole::UIABStandbySlotItemWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_DRAGPIECE_OFFSET))(this);
		}

		::System::Void set_DragPiece(::MoleMole::UIABStandbySlotItemWidgetController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABStandbySlotItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SET_DRAGPIECE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Bottom()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_BOTTOM_OFFSET))(this);
		}

		::Class_2_60DDD9C206686F44* get_BackBtn()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_BACKBTN_OFFSET))(this);
		}

		::System::UInt32 get_LocalGroup()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_LOCALGROUP_OFFSET))(this);
		}

		::System::Void ToggleBottom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEBOTTOM_OFFSET))(this);
		}

		::System::Void BindView(::Class_1_F0E4E2848B1D52CE* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0E4E2848B1D52CE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, viewModel);
		}

		::System::Void ToggleSellArea(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESELLAREA_OFFSET))(this, isShow);
		}

		::System::Boolean IsInSellArea(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ISINSELLAREA_OFFSET))(this, eventData);
		}

		::System::Void SetSellPrice(::System::Int32 price)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETSELLPRICE_OFFSET))(this, price);
		}

		::System::Void TogglePlayerInfo(::System::Boolean isShow, ::Class_2_E71E286B10A21FB0* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_E71E286B10A21FB0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEPLAYERINFO_OFFSET))(this, isShow, data);
		}

		::System::Void CancelSelect(::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_CANCELSELECT_OFFSET))(this, isForce);
		}

		::System::Void ToggleShop(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESHOP_OFFSET))(this, active);
		}

		::System::Void DragStandbySlot(::System::Boolean isDrag, ::Class_2_3B0F8CEEFA465A87* slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_3B0F8CEEFA465A87*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_DRAGSTANDBYSLOT_OFFSET))(this, isDrag, slot);
		}

		::System::Void HoverOnStandbyCtrl(::System::Boolean isHover, ::MoleMole::UIABStandbySlotItemWidgetController* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIABStandbySlotItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_HOVERONSTANDBYCTRL_OFFSET))(this, isHover, target);
		}

		::System::Void OnBangbooReachLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONBANGBOOREACHLIMIT_OFFSET))(this);
		}

		::System::Boolean get_ShowStartBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_SHOWSTARTBTN_OFFSET))(this);
		}

		::System::Void OnStartBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSTARTBTNCLICK_OFFSET))(this);
		}

		::System::Void OnStageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET))(this);
		}

		::System::Void OnLevelBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONLEVELBTNCLICK_OFFSET))(this);
		}

		::System::Void ToggleShop_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLESHOP_1_OFFSET))(this);
		}

		::DG::Tweening::Tween* TweenSlider(::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tween*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TWEENSLIDER_OFFSET))(this, endValue, duration);
		}

		::System::Void SetSlider(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETSLIDER_OFFSET))(this, ratio);
		}

		::System::Single GetSliderValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GETSLIDERVALUE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_RightInfoRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_RIGHTINFOROOT_OFFSET))(this);
		}

		::System::Void RefreshRightArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_REFRESHRIGHTAREA_OFFSET))(this);
		}

		::System::Void OnChildGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_ONCHILDGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void TogglePlayerFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TOGGLEPLAYERFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void OpenCurPlayerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_OPENCURPLAYERINFO_OFFSET))(this);
		}

		::System::Boolean get_IsShowDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_GET_ISSHOWDAMAGE_OFFSET))(this);
		}

		::System::Void RefreshStatPanel(::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_REFRESHSTATPANEL_OFFSET))(this, key);
		}

		::System::Void TickStat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_TICKSTAT_OFFSET))(this);
		}

		::System::Void SaveFinalBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SAVEFINALBATTLERESULT_OFFSET))(this);
		}

		::System::Void SetLevelBtnInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_SETLEVELBTNINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__27_0(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONUIOPEN_B__27_0_OFFSET))(this, e);
		}

		::System::Void _ToggleSellArea_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__TOGGLESELLAREA_B__44_0_OFFSET))(this);
		}

		::System::Void _OnBangbooReachLimit_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONBANGBOOREACHLIMIT_B__52_0_OFFSET))(this);
		}

		::System::Void _OnStartBtnClick_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__ONSTARTBTNCLICK_B__56_0_OFFSET))(this);
		}

		::System::Void _TweenSlider_b__60_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__TWEENSLIDER_B__60_0_OFFSET))(this);
		}

		::System::Boolean _OpenCurPlayerInfo_b__69_0(::MoleMole::ScrollViewItemWidgetController* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER__OPENCURPLAYERINFO_B__69_0_OFFSET))(this, x);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
