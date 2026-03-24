#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_AE02BC8285203464_15;
namespace System { class Action; }

#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER_CONTEXT_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xA93E2D0)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER_CONTEXT_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xA93E2E0)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA93E2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLevelUp02WidgetController_Context_TypeDefinitionIndex = 58474;

	class UIGeneralLevelUp02WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_AE02BC8285203464_15* lastInfo; // 0x28
		::System::Action* _onClose_k__BackingField; // 0x30

		::System::Void _ctor(::Class_3_AE02BC8285203464_15* lastInfo, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_15*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, lastInfo, onClose);
		}

		::System::Action* get_onClose()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER_CONTEXT_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_onClose(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER_CONTEXT_SET_ONCLOSE_OFFSET))(this, value);
		}
	};
}
