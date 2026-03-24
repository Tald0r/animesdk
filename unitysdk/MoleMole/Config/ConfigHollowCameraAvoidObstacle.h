#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAVOIDOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x918AB10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraAvoidObstacle_TypeDefinitionIndex = 62375;

	class ConfigHollowCameraAvoidObstacle : public ::System::Object
	{
	public:
		::System::String* ObstaclePattern; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_Flash* Flash; // 0x18
		::System::Single RayCastMaxDistance; // 0x20
		::System::Int32 LayerMask; // 0x24
		::System::Boolean Obstacle; // 0x28
		::System::Boolean OnlyColliderCheck; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAVOIDOBSTACLE__CTOR_OFFSET))(this);
		}
	};
}
