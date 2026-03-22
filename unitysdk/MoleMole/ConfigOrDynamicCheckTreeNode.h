#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigCompositeDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;

#define MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xCDCCAE0)
#define MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xCDCCC80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigOrDynamicCheckTreeNode_TypeDefinitionIndex = 69627;

	class ConfigOrDynamicCheckTreeNode : public ::MoleMole::ConfigCompositeDynamicCheckTreeNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
