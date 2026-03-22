#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x65419A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_ONATTACHPOINTNAMECHANGE_OFFSET UNITYSDK_OFFSET(0x6541920)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_ONEFFECTPATTERNNAMECHANGE_OFFSET UNITYSDK_OFFSET(0x65418A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x6541A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEffectEntry_TypeDefinitionIndex = 61650;

	class AnimatorEventEffectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::MoleMole::Config::ConfigPosRot* EffectConfigPosRot; // 0x58
		::System::String* EffectPatternName; // 0x60
		::MoleMole::Config::EffectAutoDynamicValue* EffectAutoDynamic; // 0x68
		::System::String* AttachPointName; // 0x70
		::System::Single OverrideScaleY; // 0x78
		::System::Single OverrideScaleX; // 0x7C
		::System::Single OverrideScaleZ; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY__CTOR_OFFSET))(this);
		}

		::System::Void OnEffectPatternNameChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_ONEFFECTPATTERNNAMECHANGE_OFFSET))(this);
		}

		::System::Void OnAttachPointNameChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_ONATTACHPOINTNAMECHANGE_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
