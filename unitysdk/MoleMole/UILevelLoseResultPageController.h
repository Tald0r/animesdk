#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_94D5884806027679_5;
namespace MoleMole { class MonoLevelResultInfo; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class Action; }

#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ACTLEVELRESULTCAMERA_OFFSET UNITYSDK_OFFSET(0x8A66810)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8A66690)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_HASENDBATTLE_OFFSET UNITYSDK_OFFSET(0x8A67AD0)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_INITLOSEVIEW_OFFSET UNITYSDK_OFFSET(0x8A67530)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x8A66D20)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A67300)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8A666A0)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A67470)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A66D90)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_PLAYEXIT_OFFSET UNITYSDK_OFFSET(0x8A67CA0)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_REFRESHLOSEVIEW_OFFSET UNITYSDK_OFFSET(0x8A67F90)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_SETMOVE_OFFSET UNITYSDK_OFFSET(0x8A67000)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x8A673A0)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8A68810)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER__INITLOSEVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x8A68820)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER__INITLOSEVIEW_B__14_1_OFFSET UNITYSDK_OFFSET(0x8A68840)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A688B0)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8A68920)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A68930)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A68940)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x8A68950)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelLoseResultPageController_TypeDefinitionIndex = 74807;

	class UILevelLoseResultPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_94D5884806027679_5* _view; // 0x2F8
		::MoleMole::UILevelResultPageContext* _curResultContext; // 0x300
		::MoleMole::MonoLevelResultInfo* _levelResultInfo; // 0x308
		::Foundation::Coroutine::CoroutineHandle _animHandle; // 0x310
		::System::Boolean _isShowed; // 0x314

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ActLevelResultCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_ACTLEVELRESULTCAMERA_OFFSET))(this);
		}

		::System::Void SetMove(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_SETMOVE_OFFSET))(this, enable);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Boolean HasEndBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_HASENDBATTLE_OFFSET))(this);
		}

		::System::Void PlayExit(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_PLAYEXIT_OFFSET))(this, callback);
		}

		::System::Void InitLoseView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_INITLOSEVIEW_OFFSET))(this);
		}

		::System::Void RefreshLoseView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER_REFRESHLOSEVIEW_OFFSET))(this);
		}

		::System::Void _InitLoseView_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER__INITLOSEVIEW_B__14_0_OFFSET))(this);
		}

		::System::Void _InitLoseView_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER__INITLOSEVIEW_B__14_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
