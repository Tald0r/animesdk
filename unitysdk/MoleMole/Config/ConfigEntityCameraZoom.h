#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0xF2CB250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCameraZoom_TypeDefinitionIndex = 72585;

	class ConfigEntityCameraZoom : public ::System::Object
	{
	public:
		::System::String* ZoomConfigKey; // 0x10
		::System::Boolean ZoomOnNotHit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM__CTOR_OFFSET))(this);
		}
	};
}
