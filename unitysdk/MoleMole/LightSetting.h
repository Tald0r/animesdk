#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_LIGHTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x6E2C6D0)

namespace MoleMole
{
	inline static constexpr unsigned int LightSetting_TypeDefinitionIndex = 70584;

	class LightSetting : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10
		::System::Single intensity; // 0x20
		::System::Single avatarLightMultiplier; // 0x24
		::UnityEngine::Color avatarLightColor; // 0x28
		::System::Single range; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTSETTING__CTOR_OFFSET))(this);
		}
	};
}
