#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/MoleMole/UISummerEventPrepPageController_ActionType.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F780812A1FAD31A;
class Class_2_A944C35C433158AC;
class Class_2_C7387D40D4120A48_16;
class Class_2_DF4F3CC24695652C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GETFIXEDGYROROTATION_OFFSET UNITYSDK_OFFSET(0xA46CF40)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA467470)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET__SPACETYPE_OFFSET UNITYSDK_OFFSET(0xA46BDC0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITBIND_OFFSET UNITYSDK_OFFSET(0xA467AF0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITREDPOINT_OFFSET UNITYSDK_OFFSET(0xA468200)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA104380)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKLOCKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA104870)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA467480)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0xA46B6C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFULLSCREENBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA105300)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONHIDEBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA105100)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA103A20)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKLOCKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA103E30)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONOPENTIPSPANELBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA103860)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONQUESTCHANGE_OFFSET UNITYSDK_OFFSET(0xA46E560)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREFRESHPOPULARITY_OFFSET UNITYSDK_OFFSET(0xA46E5D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA105040)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA46B8C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA46B930)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA467520)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA468910)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA1049E0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKLOCKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA104ED0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_OPENMAP_OFFSET UNITYSDK_OFFSET(0xA103FA0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0xA4689C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PRECHECKINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0xA46B7A0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PROCESS_OFFSET UNITYSDK_OFFSET(0xA46DB90)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RECORDBUTTONCLICKACTION_OFFSET UNITYSDK_OFFSET(0xA104100)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA468C30)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RESETATTITUDE_OFFSET UNITYSDK_OFFSET(0xA46B4A0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA46BCD0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEDEBUG_OFFSET UNITYSDK_OFFSET(0xA46CEE0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEGYRO_OFFSET UNITYSDK_OFFSET(0xA46BF10)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA46BE60)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1054C0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA105370)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONHIDEBTNCLICK_B__54_0_OFFSET UNITYSDK_OFFSET(0xA1056D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONREWARDBTNCLICK_B__53_0_OFFSET UNITYSDK_OFFSET(0xA1054D0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA1057A0)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0xA105810)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA105820)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA105830)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA105840)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA105850)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_PRECHECKINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0xA105860)
#define MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA1058F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventPrepPageController_TypeDefinitionIndex = 78381;

	class UISummerEventPrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Boolean* StaticGet_DebugEnableGyro()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UISummerEventPrepPageController_TypeDefinitionIndex)->GetStaticField(0x11FD0);
		}
		::Class_2_C7387D40D4120A48_16* _view; // 0x308
		::Class_2_DF4F3CC24695652C* _model; // 0x310
		::Class_2_A944C35C433158AC* _timelineTask; // 0x318
		::System::Int32 _curMainTaskQuestId; // 0x320
		::System::Int32 _curAliceQuestId; // 0x324
		::System::Int32 _curYuzuhaQuestId; // 0x328
		::System::Boolean _isMainTaskLock; // 0x32C
		::System::Boolean _isAliceLock; // 0x32D
		::System::Boolean _isYuzuhaLock; // 0x32E
		::System::Boolean _isAquariumUnlock; // 0x32F
		::System::Boolean _isSurfUnlock; // 0x330
		::System::Boolean _isShotUnlock; // 0x331
		::System::Boolean _isHide; // 0x332
		::Class_1_5F780812A1FAD31A* GyroscopeInputHandler; // 0x338
		::UnityEngine::Quaternion _lastRotation; // 0x340
		::UnityEngine::Quaternion rotationFromGyro; // 0x350
		::UnityEngine::Plane _lastPlane; // 0x360
		::UnityEngine::Ray _lastRay; // 0x370
		::UnityEngine::Vector3 _lastTargetPoint; // 0x388
		::System::Collections::Generic::Dictionary_2<::UnityEngine::RectTransform*, ::UnityEngine::Quaternion>* _defaultRotations; // 0x398
		::System::Collections::Generic::Dictionary_2<::UnityEngine::RectTransform*, ::UnityEngine::Vector3>* _defaultPositions; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Boolean PreCheckInputBlock(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PRECHECKINPUTBLOCK_OFFSET))(this, inputAction);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::Foundation::SpaceType get__spaceType()
		{
			return ((::Foundation::SpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GET__SPACETYPE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateGyro()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEGYRO_OFFSET))(this);
		}

		::System::Void ResetAttitude()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RESETATTITUDE_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetFixedGyroRotation(::UnityEngine::Quaternion rotate)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_GETFIXEDGYROROTATION_OFFSET))(this, rotate);
		}

		::System::Void Process(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector3 axis)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PROCESS_OFFSET))(this, transform, axis);
		}

		::System::Void UpdateDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_UPDATEDEBUG_OFFSET))(this);
		}

		::System::Void InitBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITBIND_OFFSET))(this);
		}

		::System::Void InitRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_INITREDPOINT_OFFSET))(this);
		}

		::System::Void PlayTimeline(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_PLAYTIMELINE_OFFSET))(this, key);
		}

		::System::Void OnQuestChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONQUESTCHANGE_OFFSET))(this, args);
		}

		::System::Void OnRefreshPopularity(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREFRESHPOPULARITY_OFFSET))(this, args);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnOpenTipsPanelButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONOPENTIPSPANELBUTTONCLICK_OFFSET))(this);
		}

		::System::Void OnMainTaskBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMainTaskLockBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONMAINTASKLOCKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnAliceTaskBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnAliceTaskLockBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONALICETASKLOCKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnYuzuhaTaskBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnYuzuhaTaskLockBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONYUZUHATASKLOCKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void OnHideBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONHIDEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnFullScreenBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_ONFULLSCREENBTNCLICK_OFFSET))(this);
		}

		::System::Void OpenMap(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_OPENMAP_OFFSET))(this, questID);
		}

		::System::Void RecordButtonClickAction(::MoleMole::UISummerEventPrepPageController_ActionType actionType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerEventPrepPageController_ActionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER_RECORDBUTTONCLICKACTION_OFFSET))(this, actionType);
		}

		::System::Void _OnRewardBtnClick_b__53_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONREWARDBTNCLICK_B__53_0_OFFSET))(this);
		}

		::System::Void _OnHideBtnClick_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER__ONHIDEBTNCLICK_B__54_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_PreCheckInputBlock(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_PRECHECKINPUTBLOCK_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
