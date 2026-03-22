#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_5DA2E7556103D5A3_280;
class Class_2_468A4FBF2E9F527C;
class Class_2_7B757BE5CE945CFD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_Common_LayerItemRowContext; }
namespace MoleMole { class UIHadalZone_LayerConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_CURRENTLAYERINFOINDEX_OFFSET UNITYSDK_OFFSET(0xBFC4590)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_CURRENTZONELAYERINFO_OFFSET UNITYSDK_OFFSET(0xBFC4580)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_UNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xBFC5F20)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_MARKSELECTSTATUS_OFFSET UNITYSDK_OFFSET(0xBFC4E20)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFC4710)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xBFC4BC0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xBFC5D00)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xBFC5FB0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBFC47B0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFC4960)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFC45C0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFC4660)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONACTIVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBFC5C90)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xBFC4DB0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETPARENTWINDOWFADEINDONEFUNC_OFFSET UNITYSDK_OFFSET(0xBFC7420)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__CLOSEALLSTATEOBJECTS_OFFSET UNITYSDK_OFFSET(0xBFC68D0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__COLLECTSELECTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xBFC5140)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC7700)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__GETDIGITSPRITE_OFFSET UNITYSDK_OFFSET(0xBFC5B70)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__ISINMODEA_OFFSET UNITYSDK_OFFSET(0xBFC4D40)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__TRYPLAYUNLOCKLAYERANIM_OFFSET UNITYSDK_OFFSET(0xBFC6A50)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__TRYSHOWTRACKICON_OFFSET UNITYSDK_OFFSET(0xBFC7110)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__UNLOCLAYERCOROUTINE_OFFSET UNITYSDK_OFFSET(0xBFC7490)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__UPDATESTATELAYERINFO_OFFSET UNITYSDK_OFFSET(0xBFC53F0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFC7760)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xBFC77D0)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xBFC7830)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xBFC7890)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBFC7910)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFC7980)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFC7A00)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFC7A60)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___TRYSHOWTRACKICON_G___CHECKTRACK_43_0_OFFSET UNITYSDK_OFFSET(0xBFC7530)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerItemRowV2WidgetController_TypeDefinitionIndex = 66680;

	class UIHadalZone_LayerItemRowV2WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7B757BE5CE945CFD* _view; // 0x2D0
		::Class_1_5DA2E7556103D5A3_280* _zoneInfo; // 0x2D8
		::MoleMole::UIHadalZone_Common_LayerItemRowContext* _curCtx; // 0x2E0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _selectedGameObjects; // 0x2E8
		::System::Boolean _isLocked; // 0x2F0
		::System::Boolean _isStartState; // 0x2F1
		::System::Func_1<::System::Boolean>* _isParentFadeInDoneFunc; // 0x2F8
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x300
		::MoleMole::UIHadalZone_LayerConfig* _layerIteConfig; // 0x308
		::System::Action_1<::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* _onClickItemAction; // 0x310
		::MoleMole::UIHadalZone_LayerConfig* _uiLayerConfig; // 0x318
		::System::Action_2<::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* _OnItemActiveCallback; // 0x320
		::System::String* UNLOCK_ANIM; // 0x328
		::System::String* UNLOCK_ANIM_SPECIAL_LAYER; // 0x330
		::System::String* FADEIN_ANIM; // 0x338
		::Foundation::Coroutine::CoroutineHandle _corNextLayerUnlockHandle; // 0x340
		::System::Boolean _isTryPlayUnlock; // 0x344
		::UnityEngine::Coroutine* _playUnlockAnimCor; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_1_5DA2E7556103D5A3_280* get_CurrentZoneLayerInfo()
		{
			return ((::Class_1_5DA2E7556103D5A3_280*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_CURRENTZONELAYERINFO_OFFSET))(this);
		}

		::System::Int32 get_CurrentLayerInfoIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_CURRENTLAYERINFOINDEX_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean _IsInModeA(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__ISINMODEA_OFFSET))(this, index);
		}

		::System::Void SetOnClickCallback(::System::Action_1<::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONCLICKCALLBACK_OFFSET))(this, cb);
		}

		::System::Void MarkSelectStatus(::System::Boolean vSelected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_MARKSELECTSTATUS_OFFSET))(this, vSelected);
		}

		::System::Void _CollectSelectGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__COLLECTSELECTGAMEOBJECT_OFFSET))(this);
		}

		::System::Void _UpdateStateLayerInfo(::Class_1_5DA2E7556103D5A3_280* infoTemplate, ::UnityEngine::GameObject* targetObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_280*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__UPDATESTATELAYERINFO_OFFSET))(this, infoTemplate, targetObject);
		}

		::UnityEngine::Sprite* _GetDigitSprite(::System::Int32 digit)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__GETDIGITSPRITE_OFFSET))(this, digit);
		}

		::System::Void SetOnActiveCallback(::System::Action_2<::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>* activeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::MoleMole::UIHadalZone_LayerItemRowV2WidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETONACTIVECALLBACK_OFFSET))(this, activeCallback);
		}

		::System::Void OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void _CloseAllStateObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__CLOSEALLSTATEOBJECTS_OFFSET))(this);
		}

		::System::Void SetParentWindowFadeInDoneFunc(::System::Func_1<::System::Boolean>* getter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_SETPARENTWINDOWFADEINDONEFUNC_OFFSET))(this, getter);
		}

		::System::String* get_UnlockAnim()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER_GET_UNLOCKANIM_OFFSET))(this);
		}

		::System::Void _TryPlayUnlockLayerAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__TRYPLAYUNLOCKLAYERANIM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _UnlocLayerCoroutine()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__UNLOCLAYERCOROUTINE_OFFSET))(this);
		}

		::System::Void _TryShowTrackIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER__TRYSHOWTRACKICON_OFFSET))(this);
		}

		::System::Boolean __TryShowTrackIcon_g___CheckTrack_43_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___TRYSHOWTRACKICON_G___CHECKTRACK_43_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
