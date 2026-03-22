#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x654D980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardJoystickConfig_TypeDefinitionIndex = 62863;

	class ChessboardJoystickConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 InsideDeadZonePercent; // 0x10
		::System::Boolean SafeAreaVisible; // 0x20
		::System::Boolean IsUseJoystick; // 0x21
		::System::Boolean IsFixedJoystick; // 0x22
		::UnityEngine::Vector4 Angle; // 0x24
		::System::Single MaxMoveInterval; // 0x34
		::UnityEngine::Vector4 Anchor; // 0x38
		::UnityEngine::Vector4 SafeArea; // 0x48
		::System::Single FadeOutTime; // 0x58
		::System::Single OutsideDeadZonePercent; // 0x5C
		::UnityEngine::Vector2 AnchorPosition; // 0x60
		::System::Single FixedFadeOutTime; // 0x68
		::UnityEngine::Vector3Int DefaultSettingParam; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
