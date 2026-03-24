#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSTOPUISCRIPTABLEANIMATIONCOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xACCB0A0)
#define MOLEMOLE_CONFIG_CONFIGSTOPUISCRIPTABLEANIMATIONCOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xACCB130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStopUIScriptableAnimationCommonNode_TypeDefinitionIndex = 50594;

	class ConfigStopUIScriptableAnimationCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* AnimationKey; // 0x18
		::MoleMole::Config::BoolUISpecialNum* ForceCallback; // 0x20
		::MoleMole::Config::StringUISpecialNum* PlayerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPUISCRIPTABLEANIMATIONCOMMONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPUISCRIPTABLEANIMATIONCOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
