#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xC1E7BA0)
#define MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xC1E7C70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigSummonedEntityDynamicCheckTreeNode_TypeDefinitionIndex = 60040;

	class ConfigSummonedEntityDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicInt* IsSummoned; // 0x10
		::MoleMole::Config::DynamicString* SpecialName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
