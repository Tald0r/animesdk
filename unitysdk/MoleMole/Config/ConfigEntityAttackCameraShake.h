#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x141849F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackCameraShake_TypeDefinitionIndex = 78946;

	class ConfigEntityAttackCameraShake : public ::System::Object
	{
	public:
		::System::String* shakeConfigKey; // 0x10
		::System::Boolean ShakeOnNotHit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE__CTOR_OFFSET))(this);
		}
	};
}
