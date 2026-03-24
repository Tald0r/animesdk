#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_30;
class Class_2_C2B4B123B5A9B78A;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CUSTOMTIP_OFFSET UNITYSDK_OFFSET(0xA93C7E0)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0xA93C7C0)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_CUSTOMTIP_OFFSET UNITYSDK_OFFSET(0xA93CA70)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0xA93C7D0)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYGETCUSTOMTIPFROMTEMPLATE_OFFSET UNITYSDK_OFFSET(0xA93C910)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA93AF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneral3DModelDialogPopWindowController_Context_TypeDefinitionIndex = 42255;

	class UIGeneral3DModelDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_2_C2B4B123B5A9B78A*>* OnRTLoaded; // 0x28
		::System::String* UIFromName; // 0x30
		::System::Action* callback; // 0x38
		::Class_0_16E4307DCC419505_30* _template; // 0x40
		::System::String* _customTip; // 0x48
		::System::String* conditionTip; // 0x50
		::System::Boolean IsFemale; // 0x58
		::System::Boolean RotateAroundCenter; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_30* get_template()
		{
			return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_0_16E4307DCC419505_30* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET))(this, value);
		}

		::System::String* get_customTip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CUSTOMTIP_OFFSET))(this);
		}

		::System::Void set_customTip(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_CUSTOMTIP_OFFSET))(this, value);
		}

		static ::System::Boolean TryGetCustomTipFromTemplate(::Class_0_16E4307DCC419505_30* template_, ::System::String*& customTip)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_30*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYGETCUSTOMTIPFROMTEMPLATE_OFFSET))(template_, customTip);
		}
	};
}
