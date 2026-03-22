#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x13FAF1E0)
#define MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13FAF320)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMonsterTypeDynamicCheckTreeNode_TypeDefinitionIndex = 52361;

	class ConfigMonsterTypeDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicString* SpecialName; // 0x10
		::MoleMole::Config::DynamicInt* CompareArg; // 0x18
		::MoleMole::Config::DynamicString* CompareType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
