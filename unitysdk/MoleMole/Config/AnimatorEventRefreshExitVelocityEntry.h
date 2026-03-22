#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTREFRESHEXITVELOCITYENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x13F81CD0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTREFRESHEXITVELOCITYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13F81D70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRefreshExitVelocityEntry_TypeDefinitionIndex = 43981;

	class AnimatorEventRefreshExitVelocityEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREFRESHEXITVELOCITYENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREFRESHEXITVELOCITYENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
