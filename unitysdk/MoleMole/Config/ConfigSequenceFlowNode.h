#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseFlowNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGSEQUENCEFLOWNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xCAF34E0)
#define MOLEMOLE_CONFIG_CONFIGSEQUENCEFLOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xCAF3600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSequenceFlowNode_TypeDefinitionIndex = 41429;

	class ConfigSequenceFlowNode : public ::MoleMole::Config::ConfigUIBaseFlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSEQUENCEFLOWNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSEQUENCEFLOWNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
