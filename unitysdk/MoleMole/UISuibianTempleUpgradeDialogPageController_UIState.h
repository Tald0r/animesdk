#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_103;

#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x936B250)
#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x936B300)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleUpgradeDialogPageController_UIState_TypeDefinitionIndex = 49336;

	class UISuibianTempleUpgradeDialogPageController_UIState : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_103<::System::Boolean>* EnableUpgrade; // 0x60
		::Class_0_16E4307DCC419505_103<::System::Int32>* CurrentLevel; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
