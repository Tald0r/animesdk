#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE7560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimationConfig_TypeDefinitionIndex = 50212;

	class AnimationConfig : public ::System::Object
	{
	public:
		::System::String* FadeOutPath; // 0x10
		::System::String* LockFadeInPath; // 0x18
		::System::String* FadeInPath; // 0x20
		::System::String* UnLockPath; // 0x28
		::System::String* IdlePath; // 0x30
		::System::String* LockFadeOutPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
