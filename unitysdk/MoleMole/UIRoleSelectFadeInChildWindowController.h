#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_BFE1A5062E431B57_4;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ANIMATIONFINISH_OFFSET UNITYSDK_OFFSET(0x96F7C50)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x96F80A0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GETCANVASINFO_OFFSET UNITYSDK_OFFSET(0x96F7CF0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GETFADEININFO_OFFSET UNITYSDK_OFFSET(0x96F7BB0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x96F6CE0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_INITUIANIMATION_OFFSET UNITYSDK_OFFSET(0x96F70F0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x96F6D60)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x96F7280)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x96F7FC0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x96F8030)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x96F6CF0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x96F7F10)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x96F79A0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETAVATARID_OFFSET UNITYSDK_OFFSET(0x96F75A0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETCOMPLETEACT_OFFSET UNITYSDK_OFFSET(0x96F74C0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETELEMENTCOLOR_OFFSET UNITYSDK_OFFSET(0x96F7670)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETMIRRORX_OFFSET UNITYSDK_OFFSET(0x96F7A10)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETUISTOPACT_OFFSET UNITYSDK_OFFSET(0x96F7530)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x96F7320)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x96F86C0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x96F86D0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x96F8740)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x96F8750)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x96F8760)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x96F8770)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x96F87E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectFadeInChildWindowController_TypeDefinitionIndex = 51732;

	class UIRoleSelectFadeInChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single MORE_SIZE; // 0x0
		// static const ::System::Single POS_OFFSET; // 0x0
		// static const ::System::String* _animationName; // 0x0
		::UnityEngine::Vector2 _canvasSize; // 0x2F8
		::Class_2_BFE1A5062E431B57_4* _view; // 0x300
		::System::Single _targetXPos; // 0x308
		::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* _curves; // 0x310
		::System::Single _totalTime; // 0x318
		::System::Single _sliderTimer1; // 0x31C
		::System::Single _sliderTimer2; // 0x320
		::System::Single _sliderTimer3; // 0x324
		::System::Single _timer; // 0x328
		::System::Boolean _startAni; // 0x32C
		::System::Boolean _starSlider1; // 0x32D
		::System::Boolean _starSlider2; // 0x32E
		::System::Boolean _starSlider3; // 0x32F
		::System::Boolean _finishSlider1; // 0x330
		::System::Boolean _finishSlider2; // 0x331
		::System::Boolean _finishSlider3; // 0x332
		::UnityEngine::Vector2 _slider1InitPos; // 0x334
		::UnityEngine::Vector2 _slider2InitPos; // 0x33C
		::UnityEngine::Vector2 _slider3InitPos; // 0x344
		::UnityEngine::Vector2 _slider1TargetPos; // 0x34C
		::UnityEngine::Vector2 _slider2TargetPos; // 0x354
		::UnityEngine::Vector2 _slider3TargetPos; // 0x35C
		::System::Action* _AnimationCompleteAct; // 0x368
		::System::Action* _UIStopAct; // 0x370
		::UnityEngine::Rect _canvasRect; // 0x378
		::System::Collections::Generic::List_1<::System::Single>* _delayTimes; // 0x388
		::System::Boolean _isFinish; // 0x390
		::System::Single _finishTime; // 0x394
		::System::Boolean _actFinish; // 0x398
		::UnityEngine::Animation* _animation; // 0x3A0
		::System::Single _AnimationTime; // 0x3A8
		::Class_2_D89CCC627A66D0AD* _avatarItemData; // 0x3B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitUIAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_INITUIANIMATION_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void SetCompleteAct(::System::Action* CompleteAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETCOMPLETEACT_OFFSET))(this, CompleteAct);
		}

		::System::Void SetUIStopAct(::System::Action* UIStopAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETUISTOPACT_OFFSET))(this, UIStopAct);
		}

		::System::Void SetAvatarID(::Class_2_D89CCC627A66D0AD* avatarItemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETAVATARID_OFFSET))(this, avatarItemData);
		}

		::System::Void SetMirrorX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETMIRRORX_OFFSET))(this);
		}

		::System::Void SetElementColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETELEMENTCOLOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* GetFadeInInfo()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GETFADEININFO_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* AnimationFinish()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ANIMATIONFINISH_OFFSET))(this);
		}

		::System::Void GetCanvasInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GETCANVASINFO_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
