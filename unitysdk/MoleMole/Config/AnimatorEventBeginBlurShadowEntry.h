#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x6BE1B50)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x6BE1C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBeginBlurShadowEntry_TypeDefinitionIndex = 40258;

	class AnimatorEventBeginBlurShadowEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* ConfigGhostEffectKey; // 0x58
		::System::String* Tag; // 0x60
		::System::Single LifeTime; // 0x68
		::System::Boolean IgnoreOwnerTimescale; // 0x6C
		::System::Boolean IgnoreWorldTimescale; // 0x6D
		::System::Boolean HidePartsByEntity; // 0x6E
		::System::Single EchoTime; // 0x70
		::System::UInt32 MaxGhostCount; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
