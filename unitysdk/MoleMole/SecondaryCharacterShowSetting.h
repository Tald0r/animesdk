#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SecondaryCharacterType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarSetting; }

#define MOLEMOLE_SECONDARYCHARACTERSHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x6ECA2E0)

namespace MoleMole
{
	inline static constexpr unsigned int SecondaryCharacterShowSetting_TypeDefinitionIndex = 46015;

	class SecondaryCharacterShowSetting : public ::System::Object
	{
	public:
		::MoleMole::AnimatorRandomIntConfig* AnimatorRandomIntConfigs; // 0x10
		::MoleMole::UIAvatarSetting* AvatarSetting; // 0x18
		::MoleMole::UIAvatarAnimatorParamsSetting* AnimatorParamsSetting; // 0x20
		::MoleMole::SecondaryCharacterType CharacterType; // 0x28
		::System::UInt32 TemplateID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECONDARYCHARACTERSHOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
