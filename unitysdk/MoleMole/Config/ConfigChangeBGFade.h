#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHANGEBGFADE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC3C7F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChangeBGFade_TypeDefinitionIndex = 52346;

	class ConfigChangeBGFade : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* FadeOutSpeed; // 0x10
		::UnityEngine::AnimationCurve* FadeInSpeed; // 0x18
		::System::Single FadeInDuration; // 0x20
		::System::Single FadeOutDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHANGEBGFADE__CTOR_OFFSET))(this);
		}
	};
}
