#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIG_ETHEREYESOUTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC2403E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesOutlineConfig_TypeDefinitionIndex = 70768;

	class EtherEyesOutlineConfig : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* outlineTexture; // 0x10
		::UnityEngine::Vector2 outlineTextureOffset; // 0x18
		::UnityEngine::Vector2 outlineTextureScale; // 0x20
		::UnityEngine::Color outlineColor; // 0x28
		::System::Single outlineBreathFrequency; // 0x38
		::System::Int32 outlineThickness; // 0x3C
		::System::Boolean occludedByDepth; // 0x40
		::System::Boolean occludedByCharacters; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOUTLINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
