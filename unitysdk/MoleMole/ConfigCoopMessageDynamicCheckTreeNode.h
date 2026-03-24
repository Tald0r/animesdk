#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;
namespace MoleMole::Config { class DynamicInt; }

#define MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xB0A4FC0)
#define MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A5080)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCoopMessageDynamicCheckTreeNode_TypeDefinitionIndex = 38774;

	class ConfigCoopMessageDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicInt* EmojiType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
