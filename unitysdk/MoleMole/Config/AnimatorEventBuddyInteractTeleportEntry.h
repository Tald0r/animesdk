#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTTELEPORTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xC2180E0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTTELEPORTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xC218180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBuddyInteractTeleportEntry_TypeDefinitionIndex = 42010;

	class AnimatorEventBuddyInteractTeleportEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTTELEPORTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTTELEPORTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
