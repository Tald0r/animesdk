#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x951A4D0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x951A5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoTabIconBtnWidgetController_UIState_TypeDefinitionIndex = 74172;

	class UISuibianTempleManageInfoTabIconBtnWidgetController_UIState : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::String*>* ProductName; // 0x60
		::Class_0_16E4307DCC41950C_13<::System::Boolean>* Lock; // 0x68
		::Class_0_16E4307DCC41950C_13<::System::String*>* Icon; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOTABICONBTNWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
