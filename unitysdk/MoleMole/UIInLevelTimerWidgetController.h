#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_2140EBF640BC9674.h"

class Class_2_063C846A0B9F182E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_GET_PLAYANIMWITHPARENT_OFFSET UNITYSDK_OFFSET(0x98A4C30)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_HANDLEEXTRAUIOPERATION_OFFSET UNITYSDK_OFFSET(0x98A5B10)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x98A4DC0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x98A4E60)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x98A4C40)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x98A4CE0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x98A5AA0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x98A5A00)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0x98A5720)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x98A51A0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x98A4F40)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x98A5C00)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x98A5C40)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x98A5CB0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x98A5D30)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x98A5D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTimerWidgetController_TypeDefinitionIndex = 45673;

	class UIInLevelTimerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_063C846A0B9F182E* _view; // 0x2A0
		::System::Boolean pause; // 0x2A8
		::System::Boolean _isLastPaused; // 0x2A9
		::System::Single countDownSeconds; // 0x2AC
		::System::Int32 _lastWorldTimeScaleFlag; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_PlayAnimWithParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_GET_PLAYANIMWITHPARENT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATEAUDIO_OFFSET))(this);
		}

		::System::Void SetFillAmount(::System::Single remainingNormalized)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETFILLAMOUNT_OFFSET))(this, remainingNormalized);
		}

		::System::Void SetTime(::System::Int32 totalS)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETTIME_OFFSET))(this, totalS);
		}

		::System::Void Pause(::System::Boolean pauseState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_PAUSE_OFFSET))(this, pauseState);
		}

		::System::Void HandleExtraUIOperation(::Struct_2_2140EBF640BC9674 data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2140EBF640BC9674))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_HANDLEEXTRAUIOPERATION_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
