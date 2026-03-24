#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0xB0961B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0xB096250)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETTYPE_OFFSET UNITYSDK_OFFSET(0xB096120)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB0962F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFilmGrain_TypeDefinitionIndex = 53310;

	class ConfigEntityFilmGrain : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* response; // 0x40
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x48
		::UnityEngine::Rendering::Universal::FilmGrainLookup type; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType typeHandleType; // 0x54
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType responseHandleType; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::FilmGrainLookup GetType(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::FilmGrainLookup(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETTYPE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetResponse(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETRESPONSE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
