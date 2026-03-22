#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFishClickButtonWidgetController_EButtonState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"

class Class_2_60638234271CCDB8_27;
class Class_2_60638234271CCDB8_6_Class_2_186983E0E9065FF5;
class Class_2_60DDD9C206686F44;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_CHANGEPROGRESSTOMAT_OFFSET UNITYSDK_OFFSET(0x8BF7C00)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_CHANGETOSTATE_OFFSET UNITYSDK_OFFSET(0x8BF7CB0)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_CLICKQTEFF_OFFSET UNITYSDK_OFFSET(0x8BF8A10)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x8BF70B0)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_GET_BUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x8BF6C90)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BF72F0)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONDOWNCALL_OFFSET UNITYSDK_OFFSET(0x8BF7130)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BF7390)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8BF6CA0)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONUPCALL_OFFSET UNITYSDK_OFFSET(0x8BF7210)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8BF7F30)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_SETLONGEFFECTONPRESS_OFFSET UNITYSDK_OFFSET(0x8BF8AA0)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_UPDATEBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0x8BF8970)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_UPDATEQTECIRCLE_OFFSET UNITYSDK_OFFSET(0x8BF86D0)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8BF7690)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER__CHANGETOSTATE_B__23_0_OFFSET UNITYSDK_OFFSET(0x8BF8D50)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF8D20)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BF8D60)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BF8DD0)
#define MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8BF8E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishClickButtonWidgetController_TypeDefinitionIndex = 40114;

	class UIFishClickButtonWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* GreyMat; // 0x0
		// static const ::System::String* ReadyMat; // 0x0
		// static const ::System::String* RightIcon; // 0x0
		// static const ::System::String* LeftIcon; // 0x0
		// static const ::System::String* FishIcon; // 0x0
		::System::String* _currentMatName; // 0x2A0
		::Class_2_60638234271CCDB8_27* _view; // 0x2A8
		::MoleMole::UIFishClickButtonWidgetController_EButtonState _buttonState; // 0x2B0
		::Class_2_60638234271CCDB8_6_Class_2_186983E0E9065FF5* SkillButtonView; // 0x2B8
		::System::Single originDuration; // 0x2C0
		::UnityEngine::ParticleSystem_MinMaxCurve originLifeTime; // 0x2C8
		::System::Action* OnDown; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIFishClickButtonWidgetController_EButtonState get_ButtonState()
		{
			return ((::MoleMole::UIFishClickButtonWidgetController_EButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_GET_BUTTONSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnDownCall(::UnityEngine::EventSystems::PointerEventData* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONDOWNCALL_OFFSET))(this, arg0);
		}

		::System::Void OnUpCall(::UnityEngine::EventSystems::PointerEventData* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONUPCALL_OFFSET))(this, arg0);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ChangeProgressToMat(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_CHANGEPROGRESSTOMAT_OFFSET))(this, key);
		}

		::Class_2_60DDD9C206686F44* GetButton()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void ChangeToState(::MoleMole::UIFishClickButtonWidgetController_EButtonState buttonState, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFishClickButtonWidgetController_EButtonState, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_CHANGETOSTATE_OFFSET))(this, buttonState, force);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void UpdateQTECircle(::System::Single progress, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_UPDATEQTECIRCLE_OFFSET))(this, progress, active);
		}

		::System::Void ClickQTEff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_CLICKQTEFF_OFFSET))(this);
		}

		::System::Void UpdateBattleProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_UPDATEBATTLEPROGRESS_OFFSET))(this, progress);
		}

		::System::Void SetLongEffectOnPress(::System::Boolean press)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER_SETLONGEFFECTONPRESS_OFFSET))(this, press);
		}

		::System::Void _ChangeToState_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER__CHANGETOSTATE_B__23_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCLICKBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
