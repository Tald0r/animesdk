#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHSEQUENCEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x6BE1C50)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHSEQUENCEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x6BE1CF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraStretchSequenceEntry_TypeDefinitionIndex = 42567;

	class AnimatorEventCameraStretchSequenceEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* OverrideBlendCurve; // 0x58
		::System::String* Key; // 0x60
		::System::Single OverrideBlendDuration; // 0x68
		::System::Boolean OverrideBlendSetting; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHSEQUENCEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHSEQUENCEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
