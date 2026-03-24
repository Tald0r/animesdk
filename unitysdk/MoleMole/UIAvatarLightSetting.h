#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Cubemap; }

#define MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xBF2EFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightSetting_TypeDefinitionIndex = 50421;

	class UIAvatarLightSetting : public ::System::Object
	{
	public:
		::UnityEngine::Cubemap* ReflectionCube; // 0x10
		::MoleMole::UIAvatarLightChangeSettings ChangeSettings; // 0x18
		::UnityEngine::Vector2 HairShadowOffset; // 0x30
		::UnityEngine::Vector2 hairShadowLightDir; // 0x38
		::System::Single Range; // 0x40
		::UnityEngine::Color GIColor; // 0x44
		::UnityEngine::Vector3 LightRotOffset; // 0x54
		::System::Boolean EnableLightAvatarPart; // 0x60
		::System::Boolean EnableHairShadowOffset; // 0x61
		::System::Boolean PointLight; // 0x62
		::System::Boolean OverrideHairShadowLightDir; // 0x63
		::UnityEngine::Vector3 PositionOffset; // 0x64
		::UnityEngine::Vector4 LightAvatarPartRotOffset; // 0x70
		::System::Single ReflectionCubeRotation; // 0x80
		::System::Boolean unlockLightX; // 0x84
		::System::Single CommonYRot; // 0x88
		::UnityEngine::Vector3 MainPageLightRotOffset; // 0x8C
		::UnityEngine::Color LightColor; // 0x98
		::System::Single LightIntensity; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
