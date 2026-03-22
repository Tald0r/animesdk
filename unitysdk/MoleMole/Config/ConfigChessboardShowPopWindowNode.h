#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSHOWPOPWINDOWNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x804A8E0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSHOWPOPWINDOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x804A9C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardShowPopWindowNode_TypeDefinitionIndex = 75273;

	class ConfigChessboardShowPopWindowNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* PopID; // 0x18
		::MoleMole::Config::IntUISpecialNum* ShowPopType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSHOWPOPWINDOWNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSHOWPOPWINDOWNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
