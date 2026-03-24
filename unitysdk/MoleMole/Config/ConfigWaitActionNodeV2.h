#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGWAITACTIONNODEV2_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xF2D9BC0)
#define MOLEMOLE_CONFIG_CONFIGWAITACTIONNODEV2__CTOR_OFFSET UNITYSDK_OFFSET(0xF2D9C50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaitActionNodeV2_TypeDefinitionIndex = 45239;

	class ConfigWaitActionNodeV2 : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* TimeScale; // 0x18
		::System::String* WaitSeconds; // 0x20
		::System::Boolean UseBlackBoardValue; // 0x28
		::System::Single FixedWaitSeconds; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITACTIONNODEV2__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITACTIONNODEV2_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
