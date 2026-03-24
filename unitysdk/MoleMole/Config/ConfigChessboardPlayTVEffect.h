#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYTVEFFECT_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xB914040)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYTVEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xB914120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPlayTVEffect_TypeDefinitionIndex = 40619;

	class ConfigChessboardPlayTVEffect : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* ParticlePath; // 0x18
		::MoleMole::Vector2Int RelativePos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYTVEFFECT__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYTVEFFECT_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
