#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETPIXELATIONON_OFFSET UNITYSDK_OFFSET(0xBAF9AE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETPIXELSIZE_OFFSET UNITYSDK_OFFSET(0xBAF9B80)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBAF9C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXComicDotEffect_TypeDefinitionIndex = 74666;

	class ConfigEntityFXComicDotEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* pixelationOn; // 0x40
		::MoleMole::Config::ScreenEffectFloat* pixelSize; // 0x48
		::MoleMole::Config::ScreenEffectFieldHandleType pixelationOnHandleType; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType pixelSizeHandleType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetPixelationOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETPIXELATIONON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPixelSize(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETPIXELSIZE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
