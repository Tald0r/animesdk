#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicateNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGSTOPGACHAPERFORMANCETIMELINENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xF2D8E20)
#define MOLEMOLE_CONFIG_CONFIGSTOPGACHAPERFORMANCETIMELINENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xF2D8EB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStopGachaPerformanceTimelineNode_TypeDefinitionIndex = 57629;

	class ConfigStopGachaPerformanceTimelineNode : public ::MoleMole::Config::ConfigConditionPredicateNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPGACHAPERFORMANCETIMELINENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPGACHAPERFORMANCETIMELINENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
