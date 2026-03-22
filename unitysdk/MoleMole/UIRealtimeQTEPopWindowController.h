#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_2.h"
#include "unitysdk/Enum_3_F4705266FB2007C7.h"
#include "unitysdk/MoleMole/RealtimeQTETaskUIPositionType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_D47998EF092D4845;
class Class_2_69CBB7FF0BE6A673_36;
class Class_2_D244C6518E0DA169;
namespace MoleMole { class RealtimeQTESubSystem; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRealtimeQTEButtonBaseController; }
namespace MoleMole { class UIRealtimeQTEProgressBarChildWindowController; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_DOCHECKCLOSESTATE_OFFSET UNITYSDK_OFFSET(0xBE8D340)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GETREALTIMEQTEWIDGETROOT_OFFSET UNITYSDK_OFFSET(0xBE8DB70)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_ISENABLEFADEINPUTBLOCKING_OFFSET UNITYSDK_OFFSET(0xBE8CC40)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0xBE8CC60)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0xBE8CC50)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xBE8CC30)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xBE8CEE0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBE8D280)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBE8D140)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONREALTIMEQTEDESTROY_OFFSET UNITYSDK_OFFSET(0xBE8D820)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONREALTIMEQTEEND_OFFSET UNITYSDK_OFFSET(0xBE8D3C0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBE8D1E0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBE8CCE0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBE8CD50)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_TRYCLOSEREALTIMEQTE_OFFSET UNITYSDK_OFFSET(0xBE8D4B0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_TRYCREATEBUTTONQTE_OFFSET UNITYSDK_OFFSET(0xBE8D910)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBE8DC40)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__TRYCLOSEREALTIMEQTE_B__16_0_OFFSET UNITYSDK_OFFSET(0xBE8DC50)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__TRYCLOSEREALTIMEQTE_B__16_1_OFFSET UNITYSDK_OFFSET(0xBE8DC60)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0xBE8DC70)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBE8DC80)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBE8DCF0)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBE8DD00)
#define MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBE8DD10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRealtimeQTEPopWindowController_TypeDefinitionIndex = 67840;

	class UIRealtimeQTEPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_36* _view; // 0x2F8
		::System::String* _taskCustomTag; // 0x300
		::Class_1_D47998EF092D4845* _task; // 0x308
		::MoleMole::Config::RealtimeQTETaskEntryBase* _taskEntryBase; // 0x310
		::MoleMole::RealtimeQTESubSystem* _realtimeQTESubSystem; // 0x318
		::System::Boolean _ignoreInput; // 0x320
		::System::Boolean _ignoreInputByQTE; // 0x321
		::System::Boolean _isInCloseState; // 0x322
		::MoleMole::UIRealtimeQTEProgressBarChildWindowController* _progressBarController; // 0x328
		::MoleMole::UIRealtimeQTEButtonBaseController* _buttonController; // 0x330
		::System::Int32 _closeCounter; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsEnableFadeInputBlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_ISENABLEFADEINPUTBLOCKING_OFFSET))(this);
		}

		::Enum_3_F4705266FB2007C7 get_UICursorHideState()
		{
			return ((::Enum_3_F4705266FB2007C7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnRealtimeQTEEnd(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONREALTIMEQTEEND_OFFSET))(this, args);
		}

		::System::Void OnRealtimeQTEDestroy(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_ONREALTIMEQTEDESTROY_OFFSET))(this, args);
		}

		::System::Void TryCloseRealtimeQTE(::Enum_3_D2BBBB758B896E04_2 finishType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D2BBBB758B896E04_2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_TRYCLOSEREALTIMEQTE_OFFSET))(this, finishType);
		}

		::System::Void DoCheckCloseState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_DOCHECKCLOSESTATE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void TryCreateButtonQTE(::Class_2_D244C6518E0DA169* buttonQTETaskBase)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_TRYCREATEBUTTONQTE_OFFSET))(this, buttonQTETaskBase);
		}

		::UnityEngine::RectTransform* GetRealtimeQTEWidgetRoot(::MoleMole::RealtimeQTETaskUIPositionType taskUIPositionType)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::MoleMole::RealtimeQTETaskUIPositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER_GETREALTIMEQTEWIDGETROOT_OFFSET))(this, taskUIPositionType);
		}

		::System::Void _TryCloseRealtimeQTE_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__TRYCLOSEREALTIMEQTE_B__16_0_OFFSET))(this);
		}

		::System::Void _TryCloseRealtimeQTE_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER__TRYCLOSEREALTIMEQTE_B__16_1_OFFSET))(this);
		}

		::System::Boolean __base_get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
