#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/UIMainCityClockWidgetController_ProgressAnimType.h"
#include "unitysdk/MoleMole/UIMainCityClockWidgetController_RefreshReq.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_68541BF67D60A62B;
class Class_2_79AE422BA06F6D26_91;
class Class_2_79AE422BA06F6D26_91_Class_2_16AC50F20374540A;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_CORRECTANIMELEMS_OFFSET UNITYSDK_OFFSET(0x92A71D0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_DOREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x92A6A40)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x92A72E0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETPROGRESSANIMCURVE_OFFSET UNITYSDK_OFFSET(0x92A84F0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETPROGRESSANIMLENGTH_OFFSET UNITYSDK_OFFSET(0x92A8470)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETSTAGEICON_OFFSET UNITYSDK_OFFSET(0x92A8A80)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GET_ISBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x92A5FC0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_LOADAVATARIMAGE_OFFSET UNITYSDK_OFFSET(0x92A6750)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONAFTERPARENTSHOW_OFFSET UNITYSDK_OFFSET(0x92A75F0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x92A7430)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x92A7F30)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x92A9AA0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x92A74D0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x92A77C0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x92A5FF0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x92A6810)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUNLOCK_OFFSET UNITYSDK_OFFSET(0x92A9A00)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x92A80D0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x92A8030)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHWEEKDAY_OFFSET UNITYSDK_OFFSET(0x92A85A0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETCLOCKSTORYEND_OFFSET UNITYSDK_OFFSET(0x92A7FA0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x92A7720)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETDATEKEY_OFFSET UNITYSDK_OFFSET(0x92A8C10)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETFADEOUTDATEKEY_OFFSET UNITYSDK_OFFSET(0x92A8B50)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SHOWSTAGEICON_OFFSET UNITYSDK_OFFSET(0x92A8980)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TICKPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x92A8CD0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TRYPOPTIMEWINDOW_OFFSET UNITYSDK_OFFSET(0x92A95F0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TRYREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x92A7C30)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x92A7AC0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x92A9BD0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__DOREFRESHTIME_G__GETTIMEPROGRESS_43_0_OFFSET UNITYSDK_OFFSET(0x92A8430)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_0_OFFSET UNITYSDK_OFFSET(0x92A9C90)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_1_OFFSET UNITYSDK_OFFSET(0x92A9CA0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_2_OFFSET UNITYSDK_OFFSET(0x92A9CB0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__REFRESHSTAGE_B__44_0_OFFSET UNITYSDK_OFFSET(0x92A9DC0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__TICKPROGRESSANIM_G__SETARROW_46_0_OFFSET UNITYSDK_OFFSET(0x92A9560)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONAFTERPARENTSHOW_OFFSET UNITYSDK_OFFSET(0x92A9E70)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x92A9ED0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x92A9F40)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x92A9FB0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x92AA030)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x92AA090)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityClockWidgetController_TypeDefinitionIndex = 68084;

	class UIMainCityClockWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single ICON_ANIM_DELAY; // 0x0
		// static const ::System::Single PROGRESS_SPEED; // 0x0
		// static const ::System::String* TEXT_AM; // 0x0
		// static const ::System::String* TEXT_PM; // 0x0
		// static const ::System::String* DecoFadeInAnim; // 0x0
		// static const ::System::String* DecoFadeOutAnim; // 0x0
		::Class_2_79AE422BA06F6D26_91* _view; // 0x2A0
		::System::Int32 _dayOfWeek; // 0x2A8
		::System::Int32 _lastDayOfWeek; // 0x2AC
		::System::ValueTuple_2<::System::Int32, ::System::Int32> _hoursMinutes; // 0x2B0
		::System::Int32 _lastStage; // 0x2B8
		::System::Int32 _currentStage; // 0x2BC
		::Struct_2_49ABC235CB23B56F _iconAnimTimer; // 0x2C0
		::Struct_2_49ABC235CB23B56F _refreshDateTimer; // 0x2D0
		::Struct_2_49ABC235CB23B56F _progressAnimTimer; // 0x2E0
		::System::Single _progressAnimCurveReverseTime; // 0x2F0
		::System::Single _progressAnimCurveFadeOutTime; // 0x2F4
		::System::Single _progressAnimStartTime; // 0x2F8
		::System::Single _timeProgressFrom; // 0x2FC
		::System::Single _timeProgressTo; // 0x300
		::MoleMole::UIMainCityClockWidgetController_ProgressAnimType _timeProgressAnimType; // 0x304
		::MoleMole::UIMainCityClockWidgetController_RefreshReq _refreshReq; // 0x308
		::System::Boolean _needCorrectAnim; // 0x314
		::System::Collections::Generic::List_1<::Class_2_9E3E3CDA608A4F58*>* _animElements; // 0x318
		::Class_1_68541BF67D60A62B* _animResetHelper; // 0x320
		::System::Threading::CancellationTokenSource* m_storyEndSource; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBtnInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GET_ISBTNINTERACTABLE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean GetBtnInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETBTNINTERACTABLE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnAfterParentShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONAFTERPARENTSHOW_OFFSET))(this);
		}

		::System::Void SetConsoleActive(::System::Boolean active, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET))(this, active, force);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid SetClockStoryEnd()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETCLOCKSTORYEND_OFFSET))(this);
		}

		::System::Void RefreshTime(::System::DayOfWeek dayOfWeek, ::System::Int32 hours, ::System::Int32 minutes)
		{
			return ((::System::Void(*)(::PVOID, ::System::DayOfWeek, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHTIME_OFFSET))(this, dayOfWeek, hours, minutes);
		}

		::System::Void TryRefreshTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TRYREFRESHTIME_OFFSET))(this);
		}

		::System::Void DoRefreshTime(::System::DayOfWeek dayOfWeek, ::System::Int32 hours, ::System::Int32 minutes)
		{
			return ((::System::Void(*)(::PVOID, ::System::DayOfWeek, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_DOREFRESHTIME_OFFSET))(this, dayOfWeek, hours, minutes);
		}

		::System::Boolean RefreshStage(::System::Int32 nextStage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHSTAGE_OFFSET))(this, nextStage);
		}

		::System::Void RefreshWeekDay(::System::Int32 lastDayOfWeek)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_REFRESHWEEKDAY_OFFSET))(this, lastDayOfWeek);
		}

		::System::Void TickProgressAnim(::System::Boolean finished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TICKPROGRESSANIM_OFFSET))(this, finished);
		}

		::UnityEngine::AnimationCurve* GetProgressAnimCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETPROGRESSANIMCURVE_OFFSET))(this);
		}

		::System::Void ShowStageIcon(::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_91_Class_2_16AC50F20374540A*>*>* icons, ::System::Int32 stage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_91_Class_2_16AC50F20374540A*>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SHOWSTAGEICON_OFFSET))(this, icons, stage);
		}

		::Class_2_79AE422BA06F6D26_91_Class_2_16AC50F20374540A* GetStageIcon(::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_91_Class_2_16AC50F20374540A*>*>* icons, ::System::Int32 stage)
		{
			return ((::Class_2_79AE422BA06F6D26_91_Class_2_16AC50F20374540A*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_91_Class_2_16AC50F20374540A*>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETSTAGEICON_OFFSET))(this, icons, stage);
		}

		::System::Single GetProgressAnimLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_GETPROGRESSANIMLENGTH_OFFSET))(this);
		}

		::System::Void CorrectAnimElems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_CORRECTANIMELEMS_OFFSET))(this);
		}

		::System::Void SetDateKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETDATEKEY_OFFSET))(this, key);
		}

		::System::Void SetFadeoutDateKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_SETFADEOUTDATEKEY_OFFSET))(this, key);
		}

		::System::Void TryPopTimeWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_TRYPOPTIMEWINDOW_OFFSET))(this);
		}

		::System::Void OnUnlock(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONUNLOCK_OFFSET))(this, args);
		}

		::System::Void OnLocalAvatarChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_ONLOCALAVATARCHANGE_OFFSET))(this, args);
		}

		::System::Void LoadAvatarImage(::System::Int32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER_LOADAVATARIMAGE_OFFSET))(this, avatarId);
		}

		::System::Void _OnUIInit_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_1_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__29_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__ONUIINIT_B__29_2_OFFSET))(this);
		}

		static ::System::Single _DoRefreshTime_g__GetTimeProgress_43_0(::System::Single inHours, ::System::Single inMinutes)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__DOREFRESHTIME_G__GETTIMEPROGRESS_43_0_OFFSET))(inHours, inMinutes);
		}

		::System::Void _RefreshStage_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__REFRESHSTAGE_B__44_0_OFFSET))(this);
		}

		::System::Void _TickProgressAnim_g__SetArrow_46_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__TICKPROGRESSANIM_G__SETARROW_46_0_OFFSET))(this, progress);
		}

		::System::Void __base_OnAfterParentShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONAFTERPARENTSHOW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
