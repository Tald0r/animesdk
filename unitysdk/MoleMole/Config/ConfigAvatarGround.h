#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xC22D030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarGround_TypeDefinitionIndex = 65873;

	class ConfigAvatarGround : public ::System::Object
	{
	public:
		::System::Single EnvironmentFeatureQueryRange; // 0x10
		::System::Single FallOnWallPullOutSpeed; // 0x14
		::System::Single GroundFootStepAngleThreshold; // 0x18
		::System::Single SlopeVerticalVelocityFactor; // 0x1C
		::System::Boolean EnablePosConstraint; // 0x20
		::System::Boolean GroundFootStepHighSpeed; // 0x21
		::System::Boolean EnableEnvironmentFeature; // 0x22
		::System::Single GroundHeightThresholdLowAltitude; // 0x24
		::System::Single GarvityAccelerated; // 0x28
		::System::Single GroundSlopeAngleThreshold; // 0x2C
		::System::Single GroundSlopeDistThreshold; // 0x30
		::System::Single EnvironmentFeatureModifyDistanceMax; // 0x34
		::System::Single GravityInitSpeed; // 0x38
		::System::Single SphereCastRadius; // 0x3C
		::System::Single FallOnWallAngleThreshold; // 0x40
		::System::Single GroundHeightThreshold; // 0x44
		::UnityEngine::Vector3 GroundVelocityMin; // 0x48
		::System::Single FallOnWallHeightThreshold; // 0x54
		::UnityEngine::Vector3 SlopeVerticalVelocityMin; // 0x58
		::System::Single GroundFootStepVelocityThreshold; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET))(this);
		}
	};
}
