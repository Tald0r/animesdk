#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETAPPLYLUTTOSKYBOX_OFFSET UNITYSDK_OFFSET(0xCC95170)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCOLORFILTER_OFFSET UNITYSDK_OFFSET(0xCC94EF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0xCC94E50)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETDESATURATE_OFFSET UNITYSDK_OFFSET(0xCC950D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETHUESHIFT_OFFSET UNITYSDK_OFFSET(0xCC94F90)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETKEEPVOLUMETRICFOGINFRONTOFTRANSPARENT_OFFSET UNITYSDK_OFFSET(0xCC95350)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0xCC94DB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSATURATION_OFFSET UNITYSDK_OFFSET(0xCC95030)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYCONTRAST_OFFSET UNITYSDK_OFFSET(0xCC952B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYSATURATION_OFFSET UNITYSDK_OFFSET(0xCC95210)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETUSESCENEDESATURATEMASK_OFFSET UNITYSDK_OFFSET(0xCC94D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCC953F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityColorAdjustment_TypeDefinitionIndex = 68631;

	class ConfigEntityColorAdjustment : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0x40
		::MoleMole::Config::ScreenEffectFloat* skySaturation; // 0x48
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0x50
		::MoleMole::Config::ScreenEffectBool* applyLutToSkybox; // 0x58
		::MoleMole::Config::ScreenEffectFloat* desaturate; // 0x60
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x68
		::MoleMole::Config::ScreenEffectBool* keepVolumetricFogInFrontOfTransparent; // 0x70
		::MoleMole::Config::ScreenEffectFloat* skyContrast; // 0x78
		::MoleMole::Config::ScreenEffectFloat* hueShift; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType UseSceneDesaturateMaskHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType skySaturationHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType colorFilterHandleType; // 0x9C
		::MoleMole::Config::ScreenEffectFieldHandleType skyContrastHandleType; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType applyLutToSkyboxHandleType; // 0xA4
		::MoleMole::Config::ScreenEffectFieldHandleType hueShiftHandleType; // 0xA8
		::UnityEngine::Color colorFilter; // 0xAC
		::MoleMole::Config::ScreenEffectFieldHandleType keepVolumetricFogInFrontOfTransparentHandleType; // 0xBC
		::System::Boolean UseSceneDesaturateMask; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType desaturateHandleType; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetUseSceneDesaturateMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETUSESCENEDESATURATEMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPostExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETPOSTEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorFilter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCOLORFILTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHueShift(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETHUESHIFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDesaturate(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETDESATURATE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetApplyLutToSkybox(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETAPPLYLUTTOSKYBOX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSkySaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSkyContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetKeepVolumetricFogInFrontOfTransparent(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETKEEPVOLUMETRICFOGINFRONTOFTRANSPARENT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
