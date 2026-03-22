#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;
namespace System { class String; }

#define MOLEMOLE_CONFIGMONSTERFUNCTIONTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x15ED55A0)
#define MOLEMOLE_CONFIGMONSTERFUNCTIONTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED5650)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMonsterFunctionTypeDynamicCheckTreeNode_TypeDefinitionIndex = 42325;

	class ConfigMonsterFunctionTypeDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10
		::MoleMole::Config::MonsterFunctionType MonsterFunctionType; // 0x18
		::System::Int32 MonsterCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERFUNCTIONTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERFUNCTIONTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
