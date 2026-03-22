#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/MoleMole/UIDisplayCasePageController_Mode.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_136;
class Class_1_E7140F4786C00178;
class Class_1_FAB330A19FB8EDA0;
class Class_2_168CE6BD23375D6E;
class Class_2_16ED3E56DBB3A120;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDisplayCase3DModelController; }
namespace MoleMole { class UIDisplayCaseContext; }
namespace MoleMole { class UIDisplayCaseEditWidgetController; }
namespace MoleMole { class UIDisplayCasePreviewWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_AFTERCASELOAD_OFFSET UNITYSDK_OFFSET(0x8074A00)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x80736C0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMCHECKEDGEFUNC_OFFSET UNITYSDK_OFFSET(0x80753D0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMCLICKSELECTABLE_OFFSET UNITYSDK_OFFSET(0x8075570)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMCOLLECTALLITEMFUNC_OFFSET UNITYSDK_OFFSET(0x8074D90)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMGETITEMPOSFUNC_OFFSET UNITYSDK_OFFSET(0x8075250)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMSETITEMSELECTSTATEFUNC_OFFSET UNITYSDK_OFFSET(0x8075100)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_DOBACK_OFFSET UNITYSDK_OFFSET(0x80738F0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_FORCEREFRESHMODE_OFFSET UNITYSDK_OFFSET(0x8072490)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x80718A0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GETCURGROUPGENERALCOUNT_OFFSET UNITYSDK_OFFSET(0x80732B0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GETCURGROUPSUBTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x80734A0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GETWORLDDELTA_OFFSET UNITYSDK_OFFSET(0x8073D90)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_CURMODE_OFFSET UNITYSDK_OFFSET(0x806E9F0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_ISANYCONTROLLING_OFFSET UNITYSDK_OFFSET(0x8071AE0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_ISANYSETTLING_OFFSET UNITYSDK_OFFSET(0x8071990)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_PIVOTPOS_OFFSET UNITYSDK_OFFSET(0x8071920)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x8071960)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_HANDLESPECIALVM_OFFSET UNITYSDK_OFFSET(0x80729F0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_HIDEBTNS_OFFSET UNITYSDK_OFFSET(0x8071D10)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x8074C40)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_INITEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x806F460)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x806EF60)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_INITVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x806F820)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x8073D10)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x806EC10)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x80744C0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x80746D0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8070890)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0x8072600)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x8072C60)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8071760)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONPOINTDOWN_OFFSET UNITYSDK_OFFSET(0x8073B00)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONPOINTUP_OFFSET UNITYSDK_OFFSET(0x8073B70)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x80748A0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONTWOPOINTDRAG_OFFSET UNITYSDK_OFFSET(0x8074750)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x806FB20)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x806ECB0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x80703B0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REFRESHCASE_OFFSET UNITYSDK_OFFSET(0x8071E00)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REFRESHFRIENDVIEW_OFFSET UNITYSDK_OFFSET(0x8071FD0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REFRESHMODE_OFFSET UNITYSDK_OFFSET(0x806EA90)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8070730)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REMOVEEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x806FFF0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_RESETCAMPOS_1_OFFSET UNITYSDK_OFFSET(0x8072580)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_RESETCAMPOS_OFFSET UNITYSDK_OFFSET(0x8072500)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REVERTALL_OFFSET UNITYSDK_OFFSET(0x8073240)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_SAVEALL_OFFSET UNITYSDK_OFFSET(0x8073030)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_SETBTNHIDE_OFFSET UNITYSDK_OFFSET(0x8071B70)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_SET_CURMODE_OFFSET UNITYSDK_OFFSET(0x806EA00)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TOGGLEHIDEBTN_OFFSET UNITYSDK_OFFSET(0x80711D0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TOGGLEVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x8071390)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TRYMOVECAMERAANDITEM_OFFSET UNITYSDK_OFFSET(0x8071250)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TRYSELECTVM_1_OFFSET UNITYSDK_OFFSET(0x8072E60)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TRYSELECTVM_2_OFFSET UNITYSDK_OFFSET(0x80726E0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TRYSELECTVM_OFFSET UNITYSDK_OFFSET(0x8072D50)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_UICLOSE_OFFSET UNITYSDK_OFFSET(0x806FA40)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8075640)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITCAMERA_B__66_0_OFFSET UNITYSDK_OFFSET(0x80756A0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_0_OFFSET UNITYSDK_OFFSET(0x80756E0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_1_OFFSET UNITYSDK_OFFSET(0x8075760)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_2_OFFSET UNITYSDK_OFFSET(0x8075790)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_3_OFFSET UNITYSDK_OFFSET(0x80757A0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_4_OFFSET UNITYSDK_OFFSET(0x80757B0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__TOGGLEVIRTUALCURSOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x8075650)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x80757D0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8075840)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8075870)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x80758D0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x80758E0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x80758F0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_UICLOSE_OFFSET UNITYSDK_OFFSET(0x8075900)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController_TypeDefinitionIndex = 64832;

	class UIDisplayCasePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* HideAnim; // 0x0
		// static const ::System::String* ShowAnim; // 0x0
		// static const ::System::String* HideTopAnim; // 0x0
		// static const ::System::String* ShowTopAnim; // 0x0
		::MoleMole::UIDisplayCasePageController_Mode _curMode; // 0x308
		::Class_2_16ED3E56DBB3A120* _view; // 0x310
		::Class_2_168CE6BD23375D6E* _model; // 0x318
		::MoleMole::UIDisplayCaseContext* _context; // 0x320
		::MoleMole::UIDisplayCase3DModelController* _3DModel; // 0x328
		::MoleMole::UIDisplayCaseEditWidgetController* _edit; // 0x330
		::MoleMole::UIDisplayCasePreviewWidgetController* _preview; // 0x338
		::System::Collections::Generic::List_1<::Class_1_E7140F4786C00178*>* _itemViewModels; // 0x340
		::System::Boolean _isVMModified; // 0x348
		::System::Boolean isUIHided; // 0x349

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIDisplayCasePageController_Mode get_CurMode()
		{
			return ((::MoleMole::UIDisplayCasePageController_Mode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_CURMODE_OFFSET))(this);
		}

		::System::Void set_CurMode(::MoleMole::UIDisplayCasePageController_Mode value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDisplayCasePageController_Mode))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_SET_CURMODE_OFFSET))(this, value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void UIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_UICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GETCAMERA_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PivotPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_PIVOTPOS_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Pivot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_PIVOT_OFFSET))(this);
		}

		::System::Boolean get_IsAnySettling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_ISANYSETTLING_OFFSET))(this);
		}

		::System::Boolean get_IsAnyControlling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GET_ISANYCONTROLLING_OFFSET))(this);
		}

		::System::Void ToggleHideBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TOGGLEHIDEBTN_OFFSET))(this);
		}

		::System::Void SetBtnHide(::System::Boolean isUIHided, ::System::Action* animCallabck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_SETBTNHIDE_OFFSET))(this, isUIHided, animCallabck);
		}

		::System::Boolean ToggleVirtualCursor(::System::Boolean isShow, ::System::Boolean isForce)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TOGGLEVIRTUALCURSOR_OFFSET))(this, isShow, isForce);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ForceRefreshMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_FORCEREFRESHMODE_OFFSET))(this);
		}

		::System::Void ResetCamPos(::System::Boolean resetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_RESETCAMPOS_OFFSET))(this, resetPos);
		}

		::System::Void ResetCamPos_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_RESETCAMPOS_1_OFFSET))(this);
		}

		::System::Void OnItemAdded(::Class_1_FAB330A19FB8EDA0* spawned, ::System::Boolean selectSpawned)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONITEMADDED_OFFSET))(this, spawned, selectSpawned);
		}

		::System::Void HandleSpecialVm(::Class_1_E7140F4786C00178* vm)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_HANDLESPECIALVM_OFFSET))(this, vm);
		}

		::System::Void OnItemRemoved(::Class_1_E7140F4786C00178* vm)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONITEMREMOVED_OFFSET))(this, vm);
		}

		::System::Boolean TrySelectVM(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TRYSELECTVM_OFFSET))(this, itemId);
		}

		::System::Boolean TrySelectVM_1(::UnityEngine::Vector3 screenPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TRYSELECTVM_1_OFFSET))(this, screenPoint);
		}

		::System::Void SaveAll(::System::Action* successCb, ::System::Action* errorCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_SAVEALL_OFFSET))(this, successCb, errorCb);
		}

		::System::Void RevertAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REVERTALL_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetCurGroupGeneralCount()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GETCURGROUPGENERALCOUNT_OFFSET))(this);
		}

		::System::Int32 GetCurGroupSubTypeCount(::MoleMole::DisplayCase::EDisplayItemSubType sub)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::DisplayCase::EDisplayItemSubType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GETCURGROUPSUBTYPECOUNT_OFFSET))(this, sub);
		}

		::System::Void Clear(::MoleMole::UIDisplayCasePageController_Mode prev, ::System::Boolean isForce, ::System::Action* onFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDisplayCasePageController_Mode, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CLEAR_OFFSET))(this, prev, isForce, onFadeOut);
		}

		::System::Void RefreshMode(::MoleMole::UIDisplayCasePageController_Mode prev, ::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDisplayCasePageController_Mode, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REFRESHMODE_OFFSET))(this, prev, isForce);
		}

		::System::Void DoBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_DOBACK_OFFSET))(this);
		}

		::System::Void InitVirtualCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_INITVIRTUALCURSOR_OFFSET))(this);
		}

		::System::Void InitEventTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_INITEVENTTRIGGER_OFFSET))(this);
		}

		::System::Void RemoveEventTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REMOVEEVENTTRIGGER_OFFSET))(this);
		}

		::System::Void OnPointDown(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONPOINTDOWN_OFFSET))(this, eventdata);
		}

		::System::Void OnPointUp(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONPOINTUP_OFFSET))(this, eventdata);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventdata, ::UnityEngine::Vector3 worldpoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONBEGINDRAG_OFFSET))(this, eventdata, worldpoint);
		}

		::UnityEngine::Vector3 GetWorldDelta(::UnityEngine::Vector2 screenDelta)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_GETWORLDDELTA_OFFSET))(this, screenDelta);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventdata, ::UnityEngine::Vector3 _)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONDRAG_OFFSET))(this, eventdata, _);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 wordlPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONENDDRAG_OFFSET))(this, eventData, wordlPoint);
		}

		::System::Void OnTwoPointDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Single zoomValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONTWOPOINTDRAG_OFFSET))(this, eventData, zoomValue);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_ONSCROLL_OFFSET))(this, eventdata);
		}

		::System::Void RefreshCase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REFRESHCASE_OFFSET))(this);
		}

		::System::Void AfterCaseLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_AFTERCASELOAD_OFFSET))(this);
		}

		::System::Void InitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_INITCAMERA_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshFriendView(::System::Boolean isShowId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_REFRESHFRIENDVIEW_OFFSET))(this, isShowId);
		}

		::System::Void HideBtns(::System::Boolean isHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_HIDEBTNS_OFFSET))(this, isHide);
		}

		::System::Void CustomCollectAllItemFunc(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* targetList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMCOLLECTALLITEMFUNC_OFFSET))(this, targetList);
		}

		::System::Void CustomSetItemSelectStateFunc(::Class_0_16E4307DCC419505_136* target, ::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_136*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMSETITEMSELECTSTATEFUNC_OFFSET))(this, target, isSelect);
		}

		::System::Void CustomGetItemPosFunc(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F& target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMGETITEMPOSFUNC_OFFSET))(this, target);
		}

		::UnityEngine::Vector2 CustomCheckEdgeFunc(::UnityEngine::Vector2 currentPos, ::UnityEngine::Vector2 delta, ::System::Single left, ::System::Single right, ::System::Single up, ::System::Single down, ::UnityEngine::Vector2 axisValueMutDelta)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMCHECKEDGEFUNC_OFFSET))(this, currentPos, delta, left, right, up, down, axisValueMutDelta);
		}

		::System::Boolean CustomClickSelectable(::Class_0_16E4307DCC419505_136* selectable)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_136*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_CUSTOMCLICKSELECTABLE_OFFSET))(this, selectable);
		}

		::System::Void TryMoveCameraAndItem(::System::Single deltaHorizontal, ::System::Single deltaVertical, ::System::Int32 moveFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TRYMOVECAMERAANDITEM_OFFSET))(this, deltaHorizontal, deltaVertical, moveFlag);
		}

		::System::Boolean TrySelectVM_2(::Class_1_E7140F4786C00178* vm)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER_TRYSELECTVM_2_OFFSET))(this, vm);
		}

		::System::Void _ToggleVirtualCursor_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__TOGGLEVIRTUALCURSOR_B__36_0_OFFSET))(this);
		}

		::System::Void _InitCamera_b__66_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITCAMERA_B__66_0_OFFSET))(this);
		}

		::System::Void _InitView_b__67_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_0_OFFSET))(this);
		}

		::System::Void _InitView_b__67_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_1_OFFSET))(this);
		}

		::System::Void _InitView_b__67_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_2_OFFSET))(this);
		}

		::System::Void _InitView_b__67_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_3_OFFSET))(this);
		}

		::System::Void _InitView_b__67_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER__INITVIEW_B__67_4_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_UIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___BASE_UICLOSE_OFFSET))(this);
		}
	};
}
