#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;

#define MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xD7DB340)
#define MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7DB400)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimeAfterSkillDynamicCheckTreeNode_TypeDefinitionIndex = 49621;

	class ConfigTimeAfterSkillDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::EntitySkillType EntitySkillType; // 0x10
		::System::Single Duration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
