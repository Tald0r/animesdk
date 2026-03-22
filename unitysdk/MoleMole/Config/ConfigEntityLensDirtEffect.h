#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1418D810)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETENABLE_OFFSET UNITYSDK_OFFSET(0x1418D8A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x1418D930)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GET_DIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1418D5E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1418D9D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityLensDirtEffect_TypeDefinitionIndex = 69836;

	class ConfigEntityLensDirtEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::UnityEngine::Texture2D* _dirtTexture; // 0x40
		::System::String* dirtTexturePath; // 0x48
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x50
		::System::Boolean enable; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType enableHandleType; // 0x5C
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureHandleType; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_dirtTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GET_DIRTTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetDirtTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnable(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETENABLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
