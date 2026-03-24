#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_16396D88BA38E0AB_1;
class Class_2_60DDD9C206686F44;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_BINDGAMEPADBUTTON_OFFSET UNITYSDK_OFFSET(0xD5792F0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_DOTOGGLETRACK_OFFSET UNITYSDK_OFFSET(0xD57A240)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD579170)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD579210)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD578EE0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD5790C0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD5794F0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD57A620)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__DOTOGGLETRACK_B__8_0_OFFSET UNITYSDK_OFFSET(0xD57A740)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0xD57A6E0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_B__7_2_OFFSET UNITYSDK_OFFSET(0xD57A660)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_G__SETGRAPHICALPHA_7_1_OFFSET UNITYSDK_OFFSET(0xD57A180)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD57A760)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD57A7D0)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD57A850)
#define MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD57A8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralQuestTrackBtnWidgetController_TypeDefinitionIndex = 58824;

	class UIGeneralQuestTrackBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_16396D88BA38E0AB_1* _view; // 0x2A0
		::Foundation::Coroutine::CoroutineHandle _trackBtnAnimHandle; // 0x2A8
		::System::Int32 _questID; // 0x2AC
		::Class_2_60DDD9C206686F44* _gamepadTrackBtn; // 0x2B0
		::Class_2_60DDD9C206686F44* _gamepadUntrackBtn; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindGamepadButton(::Class_2_60DDD9C206686F44* trackBtn, ::Class_2_60DDD9C206686F44* untrackBtn)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_60DDD9C206686F44*, ::Class_2_60DDD9C206686F44*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_BINDGAMEPADBUTTON_OFFSET))(this, trackBtn, untrackBtn);
		}

		::System::Void RefreshView(::System::Int32 questID, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, questID, playAnim);
		}

		::System::Void DoToggleTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER_DOTOGGLETRACK_OFFSET))(this);
		}

		::System::Void _RefreshView_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_B__7_2_OFFSET))(this);
		}

		::System::Void _RefreshView_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_B__7_0_OFFSET))(this);
		}

		static ::System::Void _RefreshView_g__SetGraphicAlpha_7_1(::UnityEngine::UI::Graphic* img, ::System::Single a)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__REFRESHVIEW_G__SETGRAPHICALPHA_7_1_OFFSET))(img, a);
		}

		::System::Void _DoToggleTrack_b__8_0(::System::Boolean ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER__DOTOGGLETRACK_B__8_0_OFFSET))(this, ret);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALQUESTTRACKBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
