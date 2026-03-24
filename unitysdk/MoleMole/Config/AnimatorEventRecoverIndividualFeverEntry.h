#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERINDIVIDUALFEVERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x81DCAA0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERINDIVIDUALFEVERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x81DCB40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRecoverIndividualFeverEntry_TypeDefinitionIndex = 39591;

	class AnimatorEventRecoverIndividualFeverEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Amount; // 0x58
		::System::Boolean IgnoreRatio; // 0x5C
		::System::Single Percentage; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERINDIVIDUALFEVERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERINDIVIDUALFEVERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
