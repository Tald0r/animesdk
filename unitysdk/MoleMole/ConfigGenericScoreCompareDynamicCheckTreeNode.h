#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGGENERICSCORECOMPAREDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x6DFBD90)
#define MOLEMOLE_CONFIGGENERICSCORECOMPAREDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x6DFBEE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGenericScoreCompareDynamicCheckTreeNode_TypeDefinitionIndex = 49395;

	class ConfigGenericScoreCompareDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicString* ScoreName; // 0x10
		::MoleMole::Config::DynamicString* CompareType; // 0x18
		::MoleMole::Config::DynamicFloat* CompareArg; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGENERICSCORECOMPAREDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGENERICSCORECOMPAREDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
