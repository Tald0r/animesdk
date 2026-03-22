#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_7ECB9691B142D586;
class Class_1_D4F7234966C2AB79_1;
class Class_2_FC20C2EC2B787291;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xE23F0B0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xE23F1F0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xE23F850)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xE23FCF0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE23F720)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE23F7C0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE23F0C0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xE23F130)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE23FDA0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE23FDC0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE23FE30)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE23FE40)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xE23FE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowJoystickModePopWindowController_TypeDefinitionIndex = 40507;

	class UIHollowJoystickModePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_FC20C2EC2B787291* _view; // 0x2F8
		::System::String* _curVideoPath; // 0x300
		::System::Boolean _isEnableJoystick; // 0x308
		::System::Collections::Generic::List_1<::Class_1_D4F7234966C2AB79_1*>* _joystickModeOptions; // 0x310
		::Class_1_7ECB9691B142D586* _playerHelper; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnBtnClicked(::System::Boolean isEnableJoystick, ::System::String* videoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONBTNCLICKED_OFFSET))(this, isEnableJoystick, videoPath);
		}

		::System::Void OnConfirmBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
