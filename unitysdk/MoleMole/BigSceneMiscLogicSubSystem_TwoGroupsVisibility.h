#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BigSceneMiscLogicSubSystem_StackedSwitch.h"

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TWOGROUPSVISIBILITY_SWITCH_OFFSET UNITYSDK_OFFSET(0x9B39080)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TWOGROUPSVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x9B391A0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_TwoGroupsVisibility_TypeDefinitionIndex = 59896;

	class BigSceneMiscLogicSubSystem_TwoGroupsVisibility : public ::MoleMole::BigSceneMiscLogicSubSystem_StackedSwitch
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TWOGROUPSVISIBILITY__CTOR_OFFSET))(this);
		}

		::System::Void Switch(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TWOGROUPSVISIBILITY_SWITCH_OFFSET))(this, isOn);
		}
	};
}
