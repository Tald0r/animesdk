#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTREADYTODIEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xF2BB670)
#define MOLEMOLE_CONFIG_ANIMATOREVENTREADYTODIEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF2BB710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventReadyToDieEntry_TypeDefinitionIndex = 49773;

	class AnimatorEventReadyToDieEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREADYTODIEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREADYTODIEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
