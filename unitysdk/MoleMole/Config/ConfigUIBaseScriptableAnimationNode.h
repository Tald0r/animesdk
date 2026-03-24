#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_D72537470FC2F779;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE_CREATEUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xEC4D490)
#define MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC4D560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIBaseScriptableAnimationNode_TypeDefinitionIndex = 43405;

	class ConfigUIBaseScriptableAnimationNode : public ::System::Object
	{
	public:
		::MoleMole::Config::BoolUISpecialNum* IsSkip; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* CreateUIAnimationNode(::Class_1_43BD383C98B4C0C5_19* uiAnimationNodeContext, ::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup, ::Class_1_F50B5EAC0B6702FB* player)
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE_CREATEUIANIMATIONNODE_OFFSET))(this, uiAnimationNodeContext, uiSpecialNumGroup, player);
		}
	};
}
