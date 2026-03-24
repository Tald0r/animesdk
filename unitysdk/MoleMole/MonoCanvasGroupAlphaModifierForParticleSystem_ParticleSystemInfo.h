#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_PARTICLESYSTEMINFO_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x38F1D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo_TypeDefinitionIndex = 49930;

	struct alignas(8) MonoCanvasGroupAlphaModifierForParticleSystem_ParticleSystemInfo
	{
		::UnityEngine::ParticleSystem* particleSystem; // 0x10
		::System::Boolean manualShaderConfig; // 0x18
		::Il2CppArray<::MoleMole::MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo>* materials; // 0x20

		::System::Void Method_2_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_PARTICLESYSTEMINFO_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
		}
	};
}
