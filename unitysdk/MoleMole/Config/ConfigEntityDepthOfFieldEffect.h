#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETAPERTURE_OFFSET UNITYSDK_OFFSET(0x9D022A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECOUNT_OFFSET UNITYSDK_OFFSET(0x9D02340)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECURVATURE_OFFSET UNITYSDK_OFFSET(0x9D023E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADEROTATION_OFFSET UNITYSDK_OFFSET(0x9D02480)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x9D01E60)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCALLENGTH_OFFSET UNITYSDK_OFFSET(0x9D02200)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCUSDISTANCE_OFFSET UNITYSDK_OFFSET(0x9D02160)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANEND_OFFSET UNITYSDK_OFFSET(0x9D01F90)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANMAXRADIUS_OFFSET UNITYSDK_OFFSET(0x9D02030)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANSTART_OFFSET UNITYSDK_OFFSET(0x9D01EF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETHIGHQUALITYSAMPLING_OFFSET UNITYSDK_OFFSET(0x9D020D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETMODE_OFFSET UNITYSDK_OFFSET(0x9D01DD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D02520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDepthOfFieldEffect_TypeDefinitionIndex = 70339;

	class ConfigEntityDepthOfFieldEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* bladeCount; // 0x40
		::MoleMole::Config::ScreenEffectFloat* aperture; // 0x48
		::MoleMole::Config::ScreenEffectFloat* gaussianStart; // 0x50
		::MoleMole::Config::ScreenEffectFloat* gaussianMaxRadius; // 0x58
		::MoleMole::Config::ScreenEffectFloat* bladeCurvature; // 0x60
		::MoleMole::Config::ScreenEffectFloat* gaussianEnd; // 0x68
		::MoleMole::Config::ScreenEffectFloat* focusDistance; // 0x70
		::MoleMole::Config::ScreenEffectFloat* focalLength; // 0x78
		::MoleMole::Config::ScreenEffectFloat* bladeRotation; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType modeHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType gaussianStartHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType bladeRotationHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType bladeCountHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType debugModeHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType highQualitySamplingHandleType; // 0x9C
		::System::Boolean highQualitySampling; // 0xA0
		::UnityEngine::Rendering::Universal::DepthOfFieldMode mode; // 0xA4
		::UnityEngine::Rendering::Universal::DofDebugMode debugMode; // 0xA8
		::MoleMole::Config::ScreenEffectFieldHandleType gaussianMaxRadiusHandleType; // 0xAC
		::MoleMole::Config::ScreenEffectFieldHandleType focalLengthHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType bladeCurvatureHandleType; // 0xB4
		::MoleMole::Config::ScreenEffectFieldHandleType apertureHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType gaussianEndHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType focusDistanceHandleType; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::DepthOfFieldMode GetMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DepthOfFieldMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::DofDebugMode GetDebugMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DofDebugMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDEBUGMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGaussianStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGaussianEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANEND_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGaussianMaxRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANMAXRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetHighQualitySampling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETHIGHQUALITYSAMPLING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFocusDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCUSDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFocalLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCALLENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetAperture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETAPERTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetBladeCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBladeCurvature(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECURVATURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBladeRotation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADEROTATION_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
