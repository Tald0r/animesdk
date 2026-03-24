#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTBLACKSCREENENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x94ECAB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTBLACKSCREENENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x94ECB60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventInterruptBlackScreenEntry_TypeDefinitionIndex = 72332;

	class AnimatorEventInterruptBlackScreenEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58
		::System::String* Curve; // 0x60
		::System::Single Duration; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTBLACKSCREENENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTBLACKSCREENENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
