#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Cubemap; }

#define MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xBECC890)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightSetting_TypeDefinitionIndex = 48591;

	class UIAvatarLightSetting : public ::System::Object
	{
	public:
		::UnityEngine::Cubemap* ReflectionCube; // 0x10
		::MoleMole::UIAvatarLightChangeSettings ChangeSettings; // 0x18
		::UnityEngine::Vector2 hairShadowLightDir; // 0x30
		::UnityEngine::Color LightColor; // 0x38
		::UnityEngine::Vector2 HairShadowOffset; // 0x48
		::System::Single Range; // 0x50
		::UnityEngine::Vector3 PositionOffset; // 0x54
		::UnityEngine::Vector3 MainPageLightRotOffset; // 0x60
		::System::Boolean PointLight; // 0x6C
		::System::Single CommonYRot; // 0x70
		::System::Boolean EnableHairShadowOffset; // 0x74
		::System::Boolean OverrideHairShadowLightDir; // 0x75
		::System::Boolean EnableLightAvatarPart; // 0x76
		::System::Boolean unlockLightX; // 0x77
		::System::Single LightIntensity; // 0x78
		::UnityEngine::Vector3 LightRotOffset; // 0x7C
		::UnityEngine::Color GIColor; // 0x88
		::UnityEngine::Vector4 LightAvatarPartRotOffset; // 0x98
		::System::Single ReflectionCubeRotation; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
