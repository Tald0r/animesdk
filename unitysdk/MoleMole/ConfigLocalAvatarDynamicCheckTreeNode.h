#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC;
class Class_1_663AFC2250EC21C9;
namespace System { class String; }

#define MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xB0A5520)
#define MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A55D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLocalAvatarDynamicCheckTreeNode_TypeDefinitionIndex = 80513;

	class ConfigLocalAvatarDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		// static const ::System::Int32 LocalAvatarCount = 0x1; // 0x0
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_3D452FA003157C19_Class_1_3B777373E9B193FC*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
