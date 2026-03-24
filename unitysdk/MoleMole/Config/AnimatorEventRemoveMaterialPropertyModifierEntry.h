#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEMATERIALPROPERTYMODIFIERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x7BBA640)
#define MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEMATERIALPROPERTYMODIFIERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBA6C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRemoveMaterialPropertyModifierEntry_TypeDefinitionIndex = 75542;

	class AnimatorEventRemoveMaterialPropertyModifierEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58
		::System::Boolean EndWithoutFadeOut; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEMATERIALPROPERTYMODIFIERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEMATERIALPROPERTYMODIFIERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
