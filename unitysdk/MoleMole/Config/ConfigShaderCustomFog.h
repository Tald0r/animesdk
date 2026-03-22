#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigShaderCustomBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_MODIFYENABLE_OFFSET UNITYSDK_OFFSET(0x15EBCB30)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x15EBC3D0)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x15EBC900)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x15EBC850)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_SETSHADERCUSTOM_OFFSET UNITYSDK_OFFSET(0x15EBC600)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBCC40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShaderCustomFog_TypeDefinitionIndex = 38342;

	class ConfigShaderCustomFog : public ::MoleMole::Config::ConfigShaderCustomBase
	{
	public:
		::UnityEngine::AnimationCurve* FogColorNearBeginCurve; // 0x28
		::UnityEngine::AnimationCurve* FogColorFarEndCurve; // 0x30
		::UnityEngine::AnimationCurve* FogColorFarBeginCurve; // 0x38
		::UnityEngine::AnimationCurve* FogDistanceEndCurve; // 0x40
		::UnityEngine::AnimationCurve* FogStartEndCurve; // 0x48
		::UnityEngine::AnimationCurve* FogStartBeginCurve; // 0x50
		::UnityEngine::AnimationCurve* FogDistanceBeginCurve; // 0x58
		::UnityEngine::AnimationCurve* FogColorNearEndCurve; // 0x60
		::UnityEngine::Color FogColorNear; // 0x68
		::UnityEngine::Color FogColorFar; // 0x78
		::System::Single FogStartTo; // 0x88
		::System::Single FogStartFrom; // 0x8C
		::System::Single FogDistanceTo; // 0x90
		::System::Single FogDistanceFrom; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG__CTOR_OFFSET))(this);
		}

		::System::Void ProcessEnter(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSENTER_OFFSET))(this, time);
		}

		::System::Void ProcessKeep(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSKEEP_OFFSET))(this, time);
		}

		::System::Void ProcessExit(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSEXIT_OFFSET))(this, time);
		}

		::System::Void SetShaderCustom(::System::Single fogStart, ::System::Single fogDistance, ::UnityEngine::Color fogColorNear, ::UnityEngine::Color fogColorFar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_SETSHADERCUSTOM_OFFSET))(this, fogStart, fogDistance, fogColorNear, fogColorFar);
		}

		::System::Void ModifyEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_MODIFYENABLE_OFFSET))(this, enable);
		}
	};
}
