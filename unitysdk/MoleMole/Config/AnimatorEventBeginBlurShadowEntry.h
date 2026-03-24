#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xACAFDA0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBEGINBLURSHADOWENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xACAFE50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBeginBlurShadowEntry_TypeDefinitionIndex = 69960;

	class AnimatorEventBeginBlurShadowEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* ConfigGhostEffectKey; // 0x58
		::System::String* Tag; // 0x60
		::System::Boolean HidePartsByEntity; // 0x68
		::System::Boolean IgnoreWorldTimescale; // 0x69
		::System::Boolean IgnoreOwnerTimescale; // 0x6A
		::System::UInt32 MaxGhostCount; // 0x6C
		::System::Single EchoTime; // 0x70
		::System::Single LifeTime; // 0x74

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
