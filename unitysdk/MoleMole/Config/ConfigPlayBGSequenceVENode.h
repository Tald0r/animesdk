#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE_GETALLVEKEY_OFFSET UNITYSDK_OFFSET(0xEC429E0)
#define MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xEC42940)
#define MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC42A80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayBGSequenceVENode_TypeDefinitionIndex = 47192;

	class ConfigPlayBGSequenceVENode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* VEPool; // 0x18
		::System::String* SwitchStartEffectPath; // 0x20
		::System::String* SwitchEndEffectPath; // 0x28
		::UnityEngine::AnimationCurve* AlphaCurve; // 0x30
		::System::String* ChangeVEEffectPath; // 0x38
		::System::Single durationTime; // 0x40
		::System::Boolean isOnlyVisbile; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetAllVEKey()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE_GETALLVEKEY_OFFSET))(this);
		}
	};
}
