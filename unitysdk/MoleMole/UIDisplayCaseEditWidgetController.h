#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_623FA07AC87B7A23.h"
#include "unitysdk/MoleMole/UIDisplayCaseEditWidgetController_EErrorType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E7140F4786C00178;
class Class_2_168CE6BD23375D6E;
class Class_2_208CC9941471731A_853;
class Class_2_79AE422BA06F6D26_169;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDisplayCaseContext; }
namespace MoleMole { class UIDisplayCaseItemControlContext; }
namespace MoleMole { class UIDisplayCaseItemControlWidgetController; }
namespace MoleMole { class UIDisplayCasePageController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_BACKTOPREVIEW_OFFSET UNITYSDK_OFFSET(0xBB21AA0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_CHECKOVERFLOW_OFFSET UNITYSDK_OFFSET(0xBB21E20)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GETCURERROR_OFFSET UNITYSDK_OFFSET(0xBB21150)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GETERRORKEY_OFFSET UNITYSDK_OFFSET(0xBB21270)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GET_CURTAB_OFFSET UNITYSDK_OFFSET(0xBB20890)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GET_CURVM_OFFSET UNITYSDK_OFFSET(0xBB208C0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GET_DPADROOT_OFFSET UNITYSDK_OFFSET(0xBB1F650)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GET_ISCONTROLLING_OFFSET UNITYSDK_OFFSET(0xBB20690)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xBB23490)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONBAGGED_OFFSET UNITYSDK_OFFSET(0xBB21860)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBB20100)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONITEMCONTROLCLOSE_OFFSET UNITYSDK_OFFSET(0xBB20E30)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xBB20540)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONLISTTRYSPAWNITEM_OFFSET UNITYSDK_OFFSET(0xBB24DB0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONPIVOTCHANGE_OFFSET UNITYSDK_OFFSET(0xBB213E0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xBB25270)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBB201A0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBB20430)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBB1F680)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBB20050)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REFRESHERRORTIP_OFFSET UNITYSDK_OFFSET(0xBB214B0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REFRESHTABS_OFFSET UNITYSDK_OFFSET(0xBB23FF0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REFRESHTOP_OFFSET UNITYSDK_OFFSET(0xBB22350)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xBB20370)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REVERTBACK_OFFSET UNITYSDK_OFFSET(0xBB21700)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_SELECTTARGET_OFFSET UNITYSDK_OFFSET(0xBB20950)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_TRYDESELECT_OFFSET UNITYSDK_OFFSET(0xBB20C80)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_TRYSAVE_OFFSET UNITYSDK_OFFSET(0xBB24B00)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__BACKTOPREVIEW_B__31_1_OFFSET UNITYSDK_OFFSET(0xBB256B0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__BACKTOPREVIEW_B__31_2_OFFSET UNITYSDK_OFFSET(0xBB25720)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__BACKTOPREVIEW_G__BACK_31_0_OFFSET UNITYSDK_OFFSET(0xBB21D80)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBB252F0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_0_OFFSET UNITYSDK_OFFSET(0xBB25490)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_1_OFFSET UNITYSDK_OFFSET(0xBB254A0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_3_OFFSET UNITYSDK_OFFSET(0xBB254B0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_4_OFFSET UNITYSDK_OFFSET(0xBB254C0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_5_OFFSET UNITYSDK_OFFSET(0xBB25570)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__SELECTTARGET_B__27_0_OFFSET UNITYSDK_OFFSET(0xBB25610)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBB25830)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xBB258A0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBB25900)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBB25970)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBB259F0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBB25A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseEditWidgetController_TypeDefinitionIndex = 54851;

	class UIDisplayCaseEditWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* BOT_FADEIN; // 0x0
		// static const ::System::String* BOT_FADEOUT; // 0x0
		::MoleMole::UIDisplayCaseContext* _context; // 0x2A0
		::Class_2_79AE422BA06F6D26_169* _view; // 0x2A8
		::MoleMole::UIDisplayCasePageController* pa; // 0x2B0
		::MoleMole::UIDisplayCaseItemControlWidgetController* _ctrl; // 0x2B8
		::Class_2_168CE6BD23375D6E* _model; // 0x2C0
		::MoleMole::UIDisplayCaseItemControlContext* cache; // 0x2C8
		::Class_2_208CC9941471731A_853* cacheGroupCfg; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* itemStat; // 0x2D8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* subItemStat; // 0x2E0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* orderTypeDic; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_DpadRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GET_DPADROOT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean get_IsControlling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GET_ISCONTROLLING_OFFSET))(this);
		}

		::Enum_3_623FA07AC87B7A23 get_CurTab()
		{
			return ((::Enum_3_623FA07AC87B7A23(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GET_CURTAB_OFFSET))(this);
		}

		::Class_1_E7140F4786C00178* get_CurVM()
		{
			return ((::Class_1_E7140F4786C00178*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GET_CURVM_OFFSET))(this);
		}

		::System::Void SelectTarget(::Class_1_E7140F4786C00178* vm)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_SELECTTARGET_OFFSET))(this, vm);
		}

		::System::Void TryDeselect(::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_TRYDESELECT_OFFSET))(this, isForce);
		}

		::System::Void OnPivotChange(::UnityEngine::Vector3 pivotDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONPIVOTCHANGE_OFFSET))(this, pivotDelta);
		}

		::System::Void RevertBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REVERTBACK_OFFSET))(this);
		}

		::System::Void BackToPreview(::System::Boolean isDirty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_BACKTOPREVIEW_OFFSET))(this, isDirty);
		}

		::System::Boolean CheckOverflow(::System::Int32 itemId, ::System::String*& errorEnumKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_CHECKOVERFLOW_OFFSET))(this, itemId, errorEnumKey);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REFRESHTOP_OFFSET))(this);
		}

		::System::Void InitScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_INITSCROLLVIEW_OFFSET))(this);
		}

		::System::Void RefreshTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REFRESHTABS_OFFSET))(this);
		}

		::MoleMole::UIDisplayCaseEditWidgetController_EErrorType GetCurError()
		{
			return ((::MoleMole::UIDisplayCaseEditWidgetController_EErrorType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GETCURERROR_OFFSET))(this);
		}

		::System::Void RefreshErrorTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_REFRESHERRORTIP_OFFSET))(this);
		}

		::System::String* GetErrorKey(::MoleMole::UIDisplayCaseEditWidgetController_EErrorType error)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIDisplayCaseEditWidgetController_EErrorType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_GETERRORKEY_OFFSET))(this, error);
		}

		::System::Void TrySave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_TRYSAVE_OFFSET))(this);
		}

		::System::Void OnItemControlClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONITEMCONTROLCLOSE_OFFSET))(this);
		}

		::System::Void OnBagged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONBAGGED_OFFSET))(this);
		}

		::System::Boolean OnListTrySpawnItem(::System::Int32 itemId, ::UnityEngine::Vector3 pointerPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONLISTTRYSPAWNITEM_OFFSET))(this, itemId, pointerPos);
		}

		::System::Void OnSelectItem(::System::Int32 itemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER_ONSELECTITEM_OFFSET))(this, itemId);
		}

		::System::Void _OnUIInit_b__15_0(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_0_OFFSET))(this, _);
		}

		::System::Void _OnUIInit_b__15_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_1_OFFSET))(this, _);
		}

		::System::Void _OnUIInit_b__15_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__15_4(::UnityEngine::EventSystems::PointerEventData* e, ::UnityEngine::Vector3 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_4_OFFSET))(this, e, v);
		}

		::System::Void _OnUIInit_b__15_5(::UnityEngine::EventSystems::PointerEventData* e, ::UnityEngine::Vector3 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__ONUIINIT_B__15_5_OFFSET))(this, e, v);
		}

		::System::Void _SelectTarget_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__SELECTTARGET_B__27_0_OFFSET))(this);
		}

		::System::Void _BackToPreview_b__31_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__BACKTOPREVIEW_B__31_1_OFFSET))(this);
		}

		::System::Void _BackToPreview_b__31_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__BACKTOPREVIEW_B__31_2_OFFSET))(this);
		}

		::System::Void _BackToPreview_g__Back_31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER__BACKTOPREVIEW_G__BACK_31_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
