#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITweenSlotWidgetController.h"

class Class_1_52502E7134136A83;
class Class_2_208CC9941471731A_654;
class Class_2_9C69219F5D5D0CF0;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }

#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_CLEARCHAT_OFFSET UNITYSDK_OFFSET(0xA429AF0)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_CLOSECHAT_OFFSET UNITYSDK_OFFSET(0xA429CB0)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_CONTINUESHOW_OFFSET UNITYSDK_OFFSET(0xA429C00)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_FADEOUT_OFFSET UNITYSDK_OFFSET(0xA42A010)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_FIRSTSHOW_OFFSET UNITYSDK_OFFSET(0xA4299D0)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_HIDECHAT_OFFSET UNITYSDK_OFFSET(0xA42A090)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0xA42A1B0)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA42A380)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA42A420)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA429640)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_PAUSETEXT_OFFSET UNITYSDK_OFFSET(0xA42A220)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_RESUMETEXT_OFFSET UNITYSDK_OFFSET(0xA42A2D0)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA42A4B0)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA42A4E0)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA42A550)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA42A560)

namespace MoleMole
{
	inline static constexpr unsigned int UIOngoingTipsWidgetController_TypeDefinitionIndex = 59264;

	class UIOngoingTipsWidgetController : public ::MoleMole::UITweenSlotWidgetController
	{
	public:
		::Class_2_9C69219F5D5D0CF0* _view; // 0x2A8
		::Class_1_52502E7134136A83* ongoingTipsHandler; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void FirstShow(::Class_2_208CC9941471731A_654* config, ::System::Action* playSound, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_654*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_FIRSTSHOW_OFFSET))(this, config, playSound, callback);
		}

		::System::Void ContinueShow(::Class_2_208CC9941471731A_654* config, ::System::Action* playSound, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_654*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_CONTINUESHOW_OFFSET))(this, config, playSound, callback);
		}

		::System::Void CloseChat(::System::Action* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_CLOSECHAT_OFFSET))(this, onEnd);
		}

		::System::Void HideChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_HIDECHAT_OFFSET))(this);
		}

		::System::Void Fadeout(::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_FADEOUT_OFFSET))(this, onComplete);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_INTERRUPT_OFFSET))(this);
		}

		::System::Void PauseText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_PAUSETEXT_OFFSET))(this);
		}

		::System::Void ResumeText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_RESUMETEXT_OFFSET))(this);
		}

		::System::Void ClearChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_CLEARCHAT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
