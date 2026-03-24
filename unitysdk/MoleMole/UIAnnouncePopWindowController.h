#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_8127D35606966C67_23;
namespace MoleMole { class UIAnnounceContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xB96F280)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GETCOUNTDOWNTEXT_OFFSET UNITYSDK_OFFSET(0xB96F880)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0xB96E1C0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_ISSHOWINGANNOUNCE_OFFSET UNITYSDK_OFFSET(0xB96E1D0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET UNITYSDK_OFFSET(0xB96E1B0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xB96E1A0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB96F150)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONSHOWFINISH_OFFSET UNITYSDK_OFFSET(0xB96F7C0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB96F0E0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB96F1F0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB96E320)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB96E390)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xB96EBE0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETSCROLLTEXT_OFFSET UNITYSDK_OFFSET(0xB96E690)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xB96E250)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SHOWUIANNOUNCECONTEXT_OFFSET UNITYSDK_OFFSET(0xB96E4C0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_TICKCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xB96F4C0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_TICKSCROLLTEXT_OFFSET UNITYSDK_OFFSET(0xB96F600)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB96F9E0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER__ONSHOWFINISH_B__26_0_OFFSET UNITYSDK_OFFSET(0xB96FA40)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB96FBC0)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xB96FC30)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB96FC40)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB96FC50)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB96FC60)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xB96FCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAnnouncePopWindowController_TypeDefinitionIndex = 51914;

	class UIAnnouncePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::UInt16 CountDownShowSeconds = 0xA; // 0x0
		::Class_2_8127D35606966C67_23* _view; // 0x2F8
		::MoleMole::UIAnnounceContext* context; // 0x300
		::System::Int64 closeTimeStamp; // 0x308
		::System::Single scrollSpeed; // 0x310
		::System::Boolean playfinishAnim; // 0x314
		::UnityEngine::Vector2 rightPos; // 0x318
		::UnityEngine::Vector2 leftPos; // 0x320
		::System::String* countDownText; // 0x328
		::System::UInt32 countDownCloseTime; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_Permanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Boolean get_isShowingAnnounce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GET_ISSHOWINGANNOUNCE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ShowUIAnnounceContext(::MoleMole::UIAnnounceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAnnounceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SHOWUIANNOUNCECONTEXT_OFFSET))(this, context);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnShowFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_ONSHOWFINISH_OFFSET))(this);
		}

		::System::Void TickCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_TICKCOUNTDOWN_OFFSET))(this);
		}

		::System::Void TickScrollText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_TICKSCROLLTEXT_OFFSET))(this);
		}

		::System::Void SetScrollText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETSCROLLTEXT_OFFSET))(this, text);
		}

		::System::String* GetCountDownText(::System::TimeSpan ts)
		{
			return ((::System::String*(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_GETCOUNTDOWNTEXT_OFFSET))(this, ts);
		}

		::System::Void SetCountDown(::System::String* text, ::System::Int64 endTime, ::System::UInt32 remainTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER_SETCOUNTDOWN_OFFSET))(this, text, endTime, remainTime);
		}

		::System::Void _OnShowFinish_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER__ONSHOWFINISH_B__26_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
