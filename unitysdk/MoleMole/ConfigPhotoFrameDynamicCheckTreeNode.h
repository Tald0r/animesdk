#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;

#define MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x16BBB5A0)
#define MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16BBB640)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPhotoFrameDynamicCheckTreeNode_TypeDefinitionIndex = 49827;

	class ConfigPhotoFrameDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::ValueCompareType CompareType; // 0x10
		::System::Int32 CompareArg; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
