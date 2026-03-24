#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xB903AE0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xB903B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraOverrideScreenDampingEntry_TypeDefinitionIndex = 68023;

	class AnimatorEventCameraOverrideScreenDampingEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Boolean EnableHorizontalDamping; // 0x58
		::System::Boolean EnableVerticalDamping; // 0x59
		::System::Single HorizontalDampingValue; // 0x5C
		::System::Single VerticalDampingValue; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
