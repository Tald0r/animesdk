#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;

#define MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xD0B1C30)
#define MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xD0B1CD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPhotoStickerDynamicCheckTreeNode_TypeDefinitionIndex = 78179;

	class ConfigPhotoStickerDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::System::Int32 CompareArg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
