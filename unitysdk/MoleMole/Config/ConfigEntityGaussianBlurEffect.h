#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x9707950)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKROTATION_OFFSET UNITYSDK_OFFSET(0x9707DE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKTILING_OFFSET UNITYSDK_OFFSET(0x9707D40)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASK_OFFSET UNITYSDK_OFFSET(0x9707CB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x97079E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GET_MASK_OFFSET UNITYSDK_OFFSET(0x9707A80)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9707E80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityGaussianBlurEffect_TypeDefinitionIndex = 68298;

	class ConfigEntityGaussianBlurEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* maskTiling; // 0x40
		::MoleMole::Config::ScreenEffectFloat* maskRotation; // 0x48
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x50
		::UnityEngine::Texture2D* _mask; // 0x58
		::System::String* maskPath; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType maskRotationHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType maskHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType maskTilingHandleType; // 0x74
		::System::Int32 downSample; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType downSampleHandleType; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_mask()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GET_MASK_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMaskTiling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKTILING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMaskRotation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKROTATION_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
