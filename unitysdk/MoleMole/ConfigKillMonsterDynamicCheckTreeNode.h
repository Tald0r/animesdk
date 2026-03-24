#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xB480370)
#define MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB480430)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigKillMonsterDynamicCheckTreeNode_TypeDefinitionIndex = 42908;

	class ConfigKillMonsterDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicString* SpecialName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
