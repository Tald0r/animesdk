#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_7ECB9691B142D586;
class Class_1_D4F7234966C2AB79_2;
class Class_2_FC20C2EC2B787291_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x92AD3B0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x92AD5A0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x92ADDB0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x92AE250)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x92ADC00)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x92ADCA0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x92AD3C0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x92AD430)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x92AE420)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x92AE440)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x92AE4B0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x92AE4C0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x92AE4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIManualQTEPopWindowController_TypeDefinitionIndex = 51502;

	class UIManualQTEPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_FC20C2EC2B787291_1* _view; // 0x2F8
		::System::String* _curVideoPath; // 0x300
		::System::Boolean _isManualQTEOn; // 0x308
		::System::Collections::Generic::List_1<::Class_1_D4F7234966C2AB79_2*>* _manualQTEOptions; // 0x310
		::Class_1_7ECB9691B142D586* _playerHelper; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView(::System::Boolean isManualQTEOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this, isManualQTEOn);
		}

		::System::Void OnBtnClicked(::System::Boolean isManualQTEOn, ::System::String* videoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONBTNCLICKED_OFFSET))(this, isManualQTEOn, videoPath);
		}

		::System::Void OnConfirmBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
