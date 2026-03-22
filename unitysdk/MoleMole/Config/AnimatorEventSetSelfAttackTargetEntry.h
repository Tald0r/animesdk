#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSETSELFATTACKTARGETENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x96F6E00)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSETSELFATTACKTARGETENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x96F6EA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSetSelfAttackTargetEntry_TypeDefinitionIndex = 71466;

	class AnimatorEventSetSelfAttackTargetEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* TargetCustomKey; // 0x58
		::System::String* SourceCustomKey; // 0x60
		::MoleMole::Config::AbilityTargetting SourceType; // 0x68
		::MoleMole::Config::AbilityTargetting TargetType; // 0x6C
		::System::Boolean IgnoreSetAttackTargetCD; // 0x70
		::System::Boolean OnlySetOnNull; // 0x71
		::System::Boolean ForceOverride; // 0x72

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSETSELFATTACKTARGETENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSETSELFATTACKTARGETENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
