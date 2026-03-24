#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BigSceneMiscLogicSubSystem_StackedSwitch.h"

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HIDDENRENDERLAYER_SWITCH_OFFSET UNITYSDK_OFFSET(0x91686D0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HIDDENRENDERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x91688B0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_HiddenRenderLayer_TypeDefinitionIndex = 65439;

	class BigSceneMiscLogicSubSystem_HiddenRenderLayer : public ::MoleMole::BigSceneMiscLogicSubSystem_StackedSwitch
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HIDDENRENDERLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Switch(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HIDDENRENDERLAYER_SWITCH_OFFSET))(this, isOn);
		}
	};
}
