#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9E960)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OceanConfig_TypeDefinitionIndex = 28514;

	class OceanConfig : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Boolean Interactable; // 0x11
		::UnityEngine::Vector3 ExtraVelocity; // 0x14
		::System::Single MeshCullingThreshold; // 0x20
		::System::Single FrustumCullingFOVBias; // 0x24
		::System::Boolean DisableSSPR; // 0x28
		::UnityEngine::Vector2 WaveScale; // 0x2C
		::System::Single WaveMapSize; // 0x34
		::System::Single NormalScale; // 0x38
		::System::Single TimeScale; // 0x3C
		::System::Single WindAngle; // 0x40
		::UnityEngine::Texture2D* DetailNoramalMap; // 0x48
		::System::Single DetailNormalMapSize; // 0x50
		::System::Single DetailNormalMapSpeed; // 0x54
		::System::Single DetailNormalScale; // 0x58
		::UnityEngine::Color ShallowWaterColor; // 0x5C
		::UnityEngine::Color DeepWaterColor; // 0x6C
		::System::Single WaterDensityForColor; // 0x7C
		::System::Single WaterDensityForRefraction; // 0x80
		::UnityEngine::Color ScatteringColor; // 0x84
		::System::Single IndirectScateringIntensity; // 0x94
		::System::Single ScateringPow; // 0x98
		::System::Single CharacterBrightnessBelowWater; // 0x9C
		::System::Single Smothness; // 0xA0
		::System::Single SpecularOffset; // 0xA4
		::System::Single SpecularDetailNormalEnhance; // 0xA8
		::UnityEngine::Cubemap* ReflectionCube; // 0xB0
		::System::Single ReflectSmothness; // 0xB8
		::System::Single RTXReflectSmoothness; // 0xBC
		::UnityEngine::Texture2D* FoamNoiseTexture; // 0xC0
		::System::Single FoamNoiseSize; // 0xC8
		::System::Single EdgeFoamRange; // 0xCC
		::System::Single FoamRange; // 0xD0
		::System::Single FoamFade; // 0xD4
		::System::Single FoamIntensity; // 0xD8
		::System::Single WetnessHeightOffset; // 0xDC
		::System::Single WetnessFade; // 0xE0
		::System::Single WetnessIntensity; // 0xE4
		::System::Single WetnessExtraSmoothness; // 0xE8
		::System::Boolean EnableCoastline; // 0xEC
		::UnityEngine::Texture2D* CoastlineMap; // 0xF0
		::UnityEngine::Vector4 CoastlineLocationScale; // 0xF8
		::System::Single CoastlineDecode; // 0x108
		::System::Single CoastlineBlendDistance; // 0x10C
		::UnityEngine::Texture2D* CoastlineGroundMap; // 0x110
		::System::Single WaveGroundPrediction; // 0x118
		::UnityEngine::Texture2D* CoastlineWaveProfileMap; // 0x120
		::System::Single CoastlineWaveProfileWidth; // 0x128
		::System::Single CoastlineWaveProfileDistance; // 0x12C
		::System::Single WaveProfileSpeed; // 0x130
		::System::Single WaveProfileAnimationSpeed; // 0x134
		::System::Single WaveProfileNormalRange; // 0x138
		::UnityEngine::Vector4 CoastlineWaveProfileDecode; // 0x13C
		::UnityEngine::Texture2D* CoastlineSmoothNoiseMap; // 0x150
		::System::Single CoastlineNoiseScale; // 0x158
		::System::Single CoastlineNoiseTime; // 0x15C
		::UnityEngine::Texture2D* CoastlineCausticMap; // 0x160
		::System::Single CoastlineCausticSize; // 0x168
		::System::Single CoastlineCausticMaxDepth; // 0x16C
		::System::Single CoastlineCausticMaxDistance; // 0x170
		::System::Single CoastlineCausticDistortIntensity; // 0x174
		::System::Single CoastlineCausticBrightness; // 0x178
		::UnityEngine::Texture2D* CoastlineFoamMap; // 0x180
		::UnityEngine::Color32 CoastlineFoamColor; // 0x188
		::System::Single CoastlineFoamScale; // 0x18C
		::System::Single CoastlineFoamDistance; // 0x190
		::System::Single CoastlineFoamUVScale; // 0x194
		::System::Single CoastlineFoamUVSpeed; // 0x198
		::System::Single CoastlineFoamUVAdvectionOffset; // 0x19C
		::System::Single CoastlineFoamUVAdvectionVelocity; // 0x1A0
		::System::Single CoastlineFoamColorDetail; // 0x1A4
		::System::Single CoastlineFoamShallowOffset; // 0x1A8
		::System::Single CoastlineFoamShallowScale; // 0x1AC
		::System::Single CoastlineFoamSoftIntensity; // 0x1B0
		::System::Single CoastlineFoamSoftVelocity; // 0x1B4
		::System::Single CoastlineFoamSoftBase; // 0x1B8
		::System::Single CoastlineFoamSoftMax; // 0x1BC
		::System::Single CoastlineFoamHardnessIntensity; // 0x1C0
		::System::Single CoastlineFoamHardnessWidth; // 0x1C4
		::System::Single CoastlineVelocityScale; // 0x1C8
		::UnityEngine::Material* OceanMaterialNear; // 0x1D0
		::UnityEngine::Material* OceanMaterialNormal; // 0x1D8
		::UnityEngine::Material* OceanMaterialFar; // 0x1E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANCONFIG__CTOR_OFFSET))(this);
		}
	};
}
