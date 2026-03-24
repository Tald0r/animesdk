#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EMaterialModifierPerformanceLevel.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EDamageDecalQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLightLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleResolutionLevel.h"

#define MOLEMOLE_PARTICLEQUALITYPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9851860)

namespace MoleMole
{
	inline static constexpr unsigned int ParticleQualityProfileContext_TypeDefinitionIndex = 63363;

	class ParticleQualityProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality DamageDecalQuality; // 0x18
		::MoleMole::EMaterialModifierPerformanceLevel MaterialModifierPerformanceLevel; // 0x1C
		::System::Boolean DisableGhostEffect; // 0x20
		::System::Boolean DisableDropItemBornIdleEffect; // 0x21
		::System::Boolean DisableCutMarks; // 0x22
		::System::Boolean DisableAbilityActionEffect; // 0x23
		::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLightLevel ParticleLightLevel; // 0x24
		::UnityEngine::Rendering::Universal::GraphicSettings_EParticleResolutionLevel ParticleResolutionLevel; // 0x28
		::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel ParticleLodLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTICLEQUALITYPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
