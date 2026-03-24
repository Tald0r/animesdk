#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xC218010)
#define MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_GET_MUTEFORCETRIGGER_OFFSET UNITYSDK_OFFSET(0xC217F90)
#define MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_SET_MUTEFORCETRIGGER_OFFSET UNITYSDK_OFFSET(0xC217FA0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xC2180B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventAudioEffectEntry_TypeDefinitionIndex = 77872;

	class AnimatorEventAudioEffectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* audioEventName; // 0x58
		::System::String* audioEventNameMp; // 0x60
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x68
		::MoleMole::Config::ConfigSoundActionGeneral* actionMp; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_muteForceTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_GET_MUTEFORCETRIGGER_OFFSET))(this);
		}

		::System::Void set_muteForceTrigger(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_SET_MUTEFORCETRIGGER_OFFSET))(this, value);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
