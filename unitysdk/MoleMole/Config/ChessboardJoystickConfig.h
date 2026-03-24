#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x81E94F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardJoystickConfig_TypeDefinitionIndex = 65139;

	class ChessboardJoystickConfig : public ::System::Object
	{
	public:
		::System::Boolean IsUseJoystick; // 0x10
		::System::Boolean SafeAreaVisible; // 0x11
		::System::Boolean IsFixedJoystick; // 0x12
		::UnityEngine::Vector4 Angle; // 0x14
		::UnityEngine::Vector2 AnchorPosition; // 0x24
		::System::Single OutsideDeadZonePercent; // 0x2C
		::UnityEngine::Vector3Int DefaultSettingParam; // 0x30
		::UnityEngine::Vector4 SafeArea; // 0x3C
		::System::Single FixedFadeOutTime; // 0x4C
		::System::Single FadeOutTime; // 0x50
		::System::Single MaxMoveInterval; // 0x54
		::UnityEngine::Vector4 InsideDeadZonePercent; // 0x58
		::UnityEngine::Vector4 Anchor; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
