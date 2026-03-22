#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x623FDD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarGround_TypeDefinitionIndex = 64596;

	class ConfigAvatarGround : public ::System::Object
	{
	public:
		::System::Single GroundFootStepAngleThreshold; // 0x10
		::System::Boolean EnableEnvironmentFeature; // 0x14
		::System::Boolean GroundFootStepHighSpeed; // 0x15
		::System::Boolean EnablePosConstraint; // 0x16
		::System::Single EnvironmentFeatureModifyDistanceMax; // 0x18
		::System::Single FallOnWallHeightThreshold; // 0x1C
		::UnityEngine::Vector3 GroundVelocityMin; // 0x20
		::UnityEngine::Vector3 SlopeVerticalVelocityMin; // 0x2C
		::System::Single GroundSlopeDistThreshold; // 0x38
		::System::Single FallOnWallAngleThreshold; // 0x3C
		::System::Single EnvironmentFeatureQueryRange; // 0x40
		::System::Single GroundFootStepVelocityThreshold; // 0x44
		::System::Single GroundHeightThreshold; // 0x48
		::System::Single FallOnWallPullOutSpeed; // 0x4C
		::System::Single GroundHeightThresholdLowAltitude; // 0x50
		::System::Single GarvityAccelerated; // 0x54
		::System::Single GroundSlopeAngleThreshold; // 0x58
		::System::Single SlopeVerticalVelocityFactor; // 0x5C
		::System::Single SphereCastRadius; // 0x60
		::System::Single GravityInitSpeed; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET))(this);
		}
	};
}
