#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;

#define MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE_GETEXPAND_OFFSET UNITYSDK_OFFSET(0xE0C4250)
#define MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0C42B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBaseDynamicCheckTreeNode_TypeDefinitionIndex = 70162;

	class ConfigBaseDynamicCheckTreeNode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean GetExpand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE_GETEXPAND_OFFSET))(this);
		}
	};
}
