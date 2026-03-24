#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIMainCityNavigationPageContext_NavOriginType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7C6444A85F5ABEBB;
class Class_2_534AF681CC2BD5FD_64;
class Class_2_79F6D62CE30E3F8E_157;
class Class_2_A8F5ABF31E066ED4;
class Class_3_C5245CCA4822DD39_23;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralPopUpArrowWidgetController; }
namespace MoleMole { class UIMainCityNavigationAreaRowWidgetController; }
namespace MoleMole { class UIMainCityNavigationTeleportRowWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ADDSCROLLVIEWAREA_OFFSET UNITYSDK_OFFSET(0x8974F20)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETAREAQUESTINFO_OFFSET UNITYSDK_OFFSET(0x8976BF0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETCENTERITEMDATAINDEX_OFFSET UNITYSDK_OFFSET(0x8974120)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETKICHISECTIONINFO_OFFSET UNITYSDK_OFFSET(0x8976A90)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETQUESTPARTNERID_OFFSET UNITYSDK_OFFSET(0x8977470)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETSELECTITEM_OFFSET UNITYSDK_OFFSET(0x89764C0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETSELECTSECTIONID_OFFSET UNITYSDK_OFFSET(0x89758B0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x89760F0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_TRACKHINTTELEPORTINDEX_OFFSET UNITYSDK_OFFSET(0x8975EB0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8972DA0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ISSIDEQUESTINAREA_OFFSET UNITYSDK_OFFSET(0x89771C0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8973D50)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONAREAITEMSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x89730B0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x8977620)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8972DB0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONDETAILBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x89777F0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x89765B0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x8976820)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8972E50)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONMAINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x8977690)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x8973F80)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8975ED0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8975030)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8973230)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x89750C0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_PLAYNEXTUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x8976100)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_REFRESHAREAINFOPANEL_OFFSET UNITYSDK_OFFSET(0x8975E50)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_REFRESHRUNTIMEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8973120)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_SELECTAREA_OFFSET UNITYSDK_OFFSET(0x89742E0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_SET_TRACKHINTTELEPORTINDEX_OFFSET UNITYSDK_OFFSET(0x8975EC0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_STOPUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x89763E0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8977960)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8977A50)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x8977AC0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x8977B30)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8977BA0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8977C00)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8977C10)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8977C20)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8977C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageController_TypeDefinitionIndex = 64292;

	class UIMainCityNavigationPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* NyakichUnLockAni; // 0x0
		::Class_2_79F6D62CE30E3F8E_157* _view; // 0x2F8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _roleEmpty; // 0x300
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _roleInfo; // 0x308
		::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* _roleIcon; // 0x310
		::System::Single minScale; // 0x318
		::MoleMole::UIMainCityNavigationPageContext_NavOriginType navType; // 0x31C
		::System::Collections::Generic::List_1<::System::Int32>* areaList; // 0x320
		::MoleMole::UIGeneralPopUpArrowWidgetController* _leftPopupArrowWidget; // 0x328
		::MoleMole::UIGeneralPopUpArrowWidgetController* _rightPopupArrowWidget; // 0x330
		::System::Collections::Generic::List_1<::Class_1_7C6444A85F5ABEBB*>* _teleportList; // 0x338
		::System::Int32 _TrackHintTeleportIndex_k__BackingField; // 0x340
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _unlockIndexList; // 0x348
		::MoleMole::UIMainCityNavigationTeleportRowWidgetController* _selectedTeleportCtrl; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIMainCityNavigationAreaRowWidgetController*>* _mapList; // 0x358
		::System::Int32 _unlockAreaIndex; // 0x360
		::System::Int32 _curSelectAreaIndex; // 0x364

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnScroll(::MonoUITableScrollV2_MoveContext moveContext, ::System::Single obj)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONSCROLL_OFFSET))(this, moveContext, obj);
		}

		::System::Int32 GetCenterItemDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETCENTERITEMDATAINDEX_OFFSET))(this);
		}

		::MoleMole::UIMainCityNavigationAreaRowWidgetController* AddScrollViewArea(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::UIMainCityNavigationAreaRowWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ADDSCROLLVIEWAREA_OFFSET))(this, arg);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Int32 get_TrackHintTeleportIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_TRACKHINTTELEPORTINDEX_OFFSET))(this);
		}

		::System::Void set_TrackHintTeleportIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_SET_TRACKHINTTELEPORTINDEX_OFFSET))(this, value);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void RefreshRuntimeInputAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_REFRESHRUNTIMEINPUTACTION_OFFSET))(this);
		}

		::System::Boolean PlayNextUnlockAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_PLAYNEXTUNLOCKANIMATION_OFFSET))(this);
		}

		::System::Void StopUnlockAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_STOPUNLOCKANIMATION_OFFSET))(this);
		}

		::System::Void OnAreaItemSelectHandle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONAREAITEMSELECTHANDLE_OFFSET))(this, index);
		}

		::MoleMole::UIMainCityNavigationAreaRowWidgetController* GetSelectItem()
		{
			return ((::MoleMole::UIMainCityNavigationAreaRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETSELECTITEM_OFFSET))(this);
		}

		::System::Void SelectArea(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_SELECTAREA_OFFSET))(this, index);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Int32 GetSelectSectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETSELECTSECTIONID_OFFSET))(this);
		}

		::System::Void RefreshAreaInfoPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_REFRESHAREAINFOPANEL_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Int32> GetKichiSectionInfo(::System::Int32 nyaKichiStoreID)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETKICHISECTIONINFO_OFFSET))(nyaKichiStoreID);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*> GetAreaQuestInfo(::Class_2_534AF681CC2BD5FD_64* areaTemplate)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::Class_2_534AF681CC2BD5FD_64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETAREAQUESTINFO_OFFSET))(areaTemplate);
		}

		static ::System::Boolean IsSideQuestInArea(::System::Int32 questID, ::Class_2_534AF681CC2BD5FD_64* areaTemplate)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Class_2_534AF681CC2BD5FD_64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ISSIDEQUESTINAREA_OFFSET))(questID, areaTemplate);
		}

		static ::System::Int32 GetQuestPartnerID(::Class_3_C5245CCA4822DD39_23* partnerInfo, ::Class_2_534AF681CC2BD5FD_64* areaTemplate)
		{
			return ((::System::Int32(*)(::Class_3_C5245CCA4822DD39_23*, ::Class_2_534AF681CC2BD5FD_64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_GETQUESTPARTNERID_OFFSET))(partnerInfo, areaTemplate);
		}

		::System::Void OnBackBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONBACKBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnMainBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONMAINBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnDetailBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER_ONDETAILBTNCLICKED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
