#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xC3CA4C0)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CA8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleMainPageController_UIState_TypeDefinitionIndex = 38917;

	class UISuibianTempleMainPageController_UIState : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC41950C_12<::System::Int32>* SimulationValue; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
