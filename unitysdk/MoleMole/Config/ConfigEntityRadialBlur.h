#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCANBEDISABLEDBYGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x94FEBD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x94FE5A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCIRCLERANGE_OFFSET UNITYSDK_OFFSET(0x94FE780)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETDOWNSAMPLELEVEL_OFFSET UNITYSDK_OFFSET(0x94FE350)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETFORCEACTIVEOVERLAYDISTORTION_OFFSET UNITYSDK_OFFSET(0x94FE820)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLARECENTERFADERANGE_OFFSET UNITYSDK_OFFSET(0x94FEA90)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLAREFADESHAPERATIO_OFFSET UNITYSDK_OFFSET(0x94FEB30)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLAREINTENSITY_OFFSET UNITYSDK_OFFSET(0x94FE950)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLARETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x94FE9F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x94FE500)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETRANGERATIO_OFFSET UNITYSDK_OFFSET(0x94FEC60)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x94FE470)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETSAMPLEDISTANCEMODE_OFFSET UNITYSDK_OFFSET(0x94FE3E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x94FE640)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETUSEBLOOMMODE_OFFSET UNITYSDK_OFFSET(0x94FE8B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETUSECIRCLERANGE_OFFSET UNITYSDK_OFFSET(0x94FE6E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x94FED00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityRadialBlur_TypeDefinitionIndex = 40486;

	class ConfigEntityRadialBlur : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* useBloomMode; // 0x40
		::MoleMole::Config::ScreenEffectFloat* RangeRatio; // 0x48
		::MoleMole::Config::ScreenEffectFloat* glareCenterFadeRange; // 0x50
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x58
		::MoleMole::Config::ScreenEffectFloat* glareIntensity; // 0x60
		::MoleMole::Config::ScreenEffectFloat* threshold; // 0x68
		::MoleMole::Config::ScreenEffectFloat* glareFadeShapeRatio; // 0x70
		::MoleMole::Config::ScreenEffectBool* useCircleRange; // 0x78
		::MoleMole::Config::ScreenEffectFloat* glareThreshold; // 0x80
		::MoleMole::Config::ScreenEffectVector2* centerPosition; // 0x88
		::MoleMole::Config::ScreenEffectVector2* circleRange; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType sampleDistanceModeHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType circleRangeHandleType; // 0x9C
		::MoleMole::Config::ScreenEffectFieldHandleType canBeDisabledByGlobalConfigHandleType; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType forceActiveOverlayDistortionHandleType; // 0xA4
		::MoleMole::Config::ScreenEffectFieldHandleType useBloomModeHandleType; // 0xA8
		::MoleMole::Config::ScreenEffectFieldHandleType useCircleRangeHandleType; // 0xAC
		::MoleMole::Config::ScreenEffectFieldHandleType glareFadeShapeRatioHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType thresholdHandleType; // 0xB4
		::MoleMole::Config::ScreenEffectFieldHandleType downSampleHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0xBC
		::System::Int32 sampleCount; // 0xC0
		::UnityEngine::Rendering::Universal::DownSampleLevel downSampleLevel; // 0xC4
		::UnityEngine::Rendering::Universal::SampleDistanceMode sampleDistanceMode; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType centerPositionHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType glareThresholdHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType glareCenterFadeRangeHandleType; // 0xD4
		::MoleMole::Config::ScreenEffectFieldHandleType glareIntensityHandleType; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountHandleType; // 0xDC
		::System::Boolean forceActiveOverlayDistortion; // 0xE0
		::System::Boolean canBeDisabledByGlobalConfig; // 0xE1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::DownSampleLevel GetDownSampleLevel(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DownSampleLevel(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETDOWNSAMPLELEVEL_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::SampleDistanceMode GetSampleDistanceMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::SampleDistanceMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETSAMPLEDISTANCEMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSampleCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETSAMPLECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCenterPosition(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCENTERPOSITION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseCircleRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETUSECIRCLERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCircleRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCIRCLERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceActiveOverlayDistortion(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETFORCEACTIVEOVERLAYDISTORTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseBloomMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETUSEBLOOMMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLAREINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLARETHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareCenterFadeRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLARECENTERFADERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareFadeShapeRatio(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETGLAREFADESHAPERATIO_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCanBeDisabledByGlobalConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETCANBEDISABLEDBYGLOBALCONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRangeRatio(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLUR_GETRANGERATIO_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
