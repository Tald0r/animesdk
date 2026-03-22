#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHARACTERAUTOAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x13993210)
#define MOLEMOLE_CONFIG_CHARACTERAUTOAIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139932A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAutoAimConfig_TypeDefinitionIndex = 52893;

	class CharacterAutoAimConfig : public ::System::Object
	{
	public:
		::System::String* targetKey; // 0x10
		::System::String* chasingSpeedCurve; // 0x18
		::System::Boolean useSelfToEnemyViewRatio; // 0x20
		::System::Boolean switchOnDeath; // 0x21
		::System::Single switchSearchFOV; // 0x24
		::System::Single lockedDampTimeVertical; // 0x28
		::System::Single lostLockAngleOffset; // 0x2C
		::System::Single lockedDampTimeHorizontal; // 0x30
		::System::Single switchCoolDown; // 0x34
		::System::Single cameraProtectMinRatio; // 0x38
		::System::Single switchDegreeLimit; // 0x3C
		::System::Single switchInputThreshold; // 0x40
		::System::Single lockedMaxSpeed; // 0x44
		::System::Single cameraLimitSpeed; // 0x48
		::System::Single cameraProtectMinLimit; // 0x4C
		::System::Single switchDuration; // 0x50
		::System::Single viewRatio; // 0x54
		::System::Single cameraProtectDistance; // 0x58
		::System::Single chasingMaxSpeed; // 0x5C
		::System::Single viewRatioXLimit; // 0x60
		::System::Single viewRatioYLimit; // 0x64
		::System::Single switchInputResetThreshold; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAUTOAIMCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* MoleMole_Config_ICharacterAssistAimConfig_get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAUTOAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET))(this);
		}
	};
}
