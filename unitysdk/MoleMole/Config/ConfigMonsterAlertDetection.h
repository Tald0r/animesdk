#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTDETECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC349130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlertDetection_TypeDefinitionIndex = 50219;

	class ConfigMonsterAlertDetection : public ::System::Object
	{
	public:
		::System::Single HeigtOffset; // 0x10
		::System::Single AlertGrowSpeed; // 0x14
		::System::Single AngleOffset; // 0x18
		::System::Single Angle; // 0x1C
		::System::Single Heigt; // 0x20
		::System::Single Radius; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTDETECTION__CTOR_OFFSET))(this);
		}
	};
}
