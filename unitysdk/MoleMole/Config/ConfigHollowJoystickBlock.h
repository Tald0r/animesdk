#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWJOYSTICKBLOCK_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x970B0E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWJOYSTICKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x970B1C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowJoystickBlock_TypeDefinitionIndex = 53874;

	class ConfigHollowJoystickBlock : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Block; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWJOYSTICKBLOCK__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWJOYSTICKBLOCK_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
