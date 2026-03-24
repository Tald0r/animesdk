#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERHPENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x7BBA570)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERHPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBA610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRecoverHPEntry_TypeDefinitionIndex = 53960;

	class AnimatorEventRecoverHPEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Boolean IgnoreRatio; // 0x58
		::System::Single Amount; // 0x5C
		::System::Single Percentage; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERHPENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERHPENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
