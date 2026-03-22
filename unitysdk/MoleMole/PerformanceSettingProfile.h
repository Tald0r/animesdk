#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ECrowdShadowFineness.h"
#include "unitysdk/MoleMole/FrameRateInterpolateType.h"
#include "unitysdk/MoleMole/InLevelNPCCrowdLevel.h"
#include "unitysdk/MoleMole/NapAnisotropicSamplingType.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPShaderQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TAAQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TransparentMatQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EWaterGenQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EWaterInteractQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GpuGrassShadowType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodQuality.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x67C8E70)

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingProfile_TypeDefinitionIndex = 54145;

	class PerformanceSettingProfile : public ::System::Object
	{
	public:
		// static const ::System::Int32 k_MaxLayers = 0x20; // 0x0
		::Il2CppArray<::System::Single>* CrowdLODDistances; // 0x10
		::Il2CppArray<::System::Single>* CrowdCameraLODDistances; // 0x18
		::Il2CppArray<::MoleMole::ECrowdShadowFineness>* CrowdShadowFineness; // 0x20
		::Il2CppArray<::System::Single>* ScreenCullingRatio; // 0x28
		::System::UInt32 PLSMaxShadowedLightCount; // 0x30
		::System::Int32 perObjectShadowResolution; // 0x34
		::System::Single decalFadeDistanceBias; // 0x38
		::System::Int32 ShadowSampleCount; // 0x3C
		::System::Single StreamingBudget; // 0x40
		::System::Int32 MaxAnisotropicSamplingLevel; // 0x44
		::System::Int32 gpuGrassMeshLodBias; // 0x48
		::System::Boolean DisableCapsuleAOInBattle; // 0x4C
		::System::Boolean LightLoopOpt; // 0x4D
		::System::Boolean EnableLoopSubdivision; // 0x4E
		::System::Boolean LightLoopInitOpt; // 0x4F
		::System::Single FrontFaceCullingBias; // 0x50
		::UnityEngine::NAPRenderPipeline0::ENapGIQuality NapGIQuality; // 0x54
		::System::Single materialLODDistOutline; // 0x58
		::System::Single PowerCostThreshhold; // 0x5C
		::MoleMole::InLevelNPCCrowdLevel InLevelNPCCrowd; // 0x60
		::System::Single SceneEtherEffectObjectFadeDistance; // 0x64
		::System::Boolean disableDecalHeightMap; // 0x68
		::System::Boolean needExtraDownSampleForFrostedGlass; // 0x69
		::System::Boolean DisableMotionBlur; // 0x6A
		::System::Boolean napSubpassOptMore; // 0x6B
		::System::Single PLSDynamicUpdateDistance; // 0x6C
		::System::Single RainDropCountScale; // 0x70
		::System::Single EffectHalfTickDistance; // 0x74
		::System::Single PLSNoSkipDistance; // 0x78
		::System::Single materialLODDistShadow; // 0x7C
		::UnityEngine::Vector4 HizCullingParams; // 0x80
		::System::Boolean DisableStreamingMipmapsUseVisibility; // 0x90
		::System::Boolean WaterGen; // 0x91
		::System::Boolean napDeferredOpt; // 0x92
		::System::Boolean napPassOpt2; // 0x93
		::System::UInt32 PLSMaxDynamicUpdatesPerFrame; // 0x94
		::System::Int32 perObjectShadowMaxCount; // 0x98
		::System::Single materialLODDistRatio; // 0x9C
		::System::Int32 RTXGIHighQualityShader; // 0xA0
		::MoleMole::FrameRateInterpolateType FrameRateInterpolate; // 0xA4
		::UnityEngine::Vector4 SceneSampleTextureBias; // 0xA8
		::System::Single materialLODDistCharacterSimplifyTransition; // 0xB8
		::System::Int32 LightLoopLog2ClusterNum; // 0xBC
		::System::UInt32 PLSSkipUpdateFrames; // 0xC0
		::System::Single LODBias; // 0xC4
		::System::Single SceneMechanismCullDistanceBias; // 0xC8
		::UnityEngine::Rendering::Universal::LightLodQuality LightLodQuality; // 0xCC
		::UnityEngine::NAPRenderPipeline0::NAPShaderQuality NAPShaderQuality; // 0xD0
		::System::Single PLSLocalLightCastShadowDistance; // 0xD4
		::System::Single EffectNoTickDistance; // 0xD8
		::System::Single RTXGIRayBudgetPFScene; // 0xDC
		::System::Int32 StreamingReduceLevel; // 0xE0
		::System::Boolean OffScreenParticlesMSAA; // 0xE4
		::System::Boolean ShadowAfterGBuffer; // 0xE5
		::System::Boolean SampleIBLOpt; // 0xE6
		::System::Boolean EnableForwardGBuffer; // 0xE7
		::UnityEngine::Vector4 HizShadowCullingParams; // 0xE8
		::UnityEngine::NAPRenderPipeline0::TAAQuality TAAQuality; // 0xF8
		::System::Single ScreenLengthCullingBias; // 0xFC
		::System::Int32 LightLoopThreadNum; // 0x100
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQualityPFScene; // 0x104
		::System::Boolean enableParticleLightCountOptimize; // 0x108
		::System::Boolean UsePerobjectShadowProxy; // 0x109
		::System::Boolean SeparateAfterGbufferPass; // 0x10A
		::System::Boolean EnableRefactorLayout; // 0x10B
		::System::UInt32 PLSAtlasResolution; // 0x10C
		::System::Single materialLODDistCharacterSimplify; // 0x110
		::System::Single DiffuseOnlyDistance; // 0x114
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality VolumetricCloudQuality; // 0x118
		::MoleMole::NapAnisotropicSamplingType AnisotropicSamplingType; // 0x11C
		::System::Single LightLoopLogBase; // 0x120
		::System::Single RTXGIRayBudget; // 0x124
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQuality; // 0x128
		::System::UInt32 PLSMaxStaticUpdatesPerFrame; // 0x12C
		::System::Int32 RTXGIHighQualityShaderPFScene; // 0x130
		::System::Single VoEntityDelayCreateGridSize; // 0x134
		::System::Int32 RTXGIQualityPreset; // 0x138
		::UnityEngine::NAPRenderPipeline0::TransparentMatQuality TransparentMatQuality; // 0x13C
		::System::Int32 StreamingTextureMaster; // 0x140
		::System::Int32 SceneMaxFurLayer; // 0x144
		::System::Single FrontFaceCullingToleranceBias; // 0x148
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQualityPFScene; // 0x14C
		::System::Single LightFadeLodBias; // 0x150
		::System::Single StreamingKeepDistance; // 0x154
		::System::Single CharacterSampleTextureBias; // 0x158
		::System::Boolean disableParallaxMapForDecal; // 0x15C
		::System::Boolean DisableGbufferCB; // 0x15D
		::System::Boolean DitherOpt; // 0x15E
		::System::Boolean forceUseBakedDecalForSpecialScene; // 0x15F
		::System::Single gpuGrassDistanceCullingBias; // 0x160
		::System::Boolean useBakedDecal; // 0x164
		::System::Boolean WaterGenPFScene; // 0x165
		::System::Boolean EnableSceneCrowd; // 0x166
		::System::Boolean napSubpassOpt; // 0x167
		::UnityEngine::Rendering::Universal::GpuGrassShadowType gpuGrassShadowType; // 0x168
		::System::Boolean DisableSceneGlare; // 0x16C
		::System::Boolean useFPTLLightCulling; // 0x16D
		::System::Boolean ShadowHizCulling; // 0x16E
		::System::Boolean PLSEnable; // 0x16F
		::System::Boolean DisableDOF; // 0x170
		::System::Boolean GbufferPreZOpt; // 0x171
		::System::Boolean EnableAdaptiveStrategies; // 0x172
		::System::Boolean StreamingMipmapsActive; // 0x173
		::System::Single materialLODDistMirrorReflection; // 0x174
		::System::Single RTXGIResolutionScalePFScene; // 0x178
		::System::Int32 RTXGIQualityPresetPFScene; // 0x17C
		::System::Single SceneFurLayerCountScale; // 0x180
		::System::Boolean LodGroupDisableCulled; // 0x184
		::System::Boolean LightLoopAfterGbuffer; // 0x185
		::System::Boolean UseExtraSimpleMesh; // 0x186
		::System::Boolean DisableDistortion; // 0x187
		::System::Boolean HideSceneSmallObject; // 0x188
		::System::Boolean NapPassOpt; // 0x189
		::UnityEngine::Vector2 RecommendRenderResolution; // 0x18C
		::System::Single CapsuleAORenderScale; // 0x194
		::MoleMole::PerformanceSettingProfile_ENPCOmitLevel NpcOmitLevel; // 0x198
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQuality; // 0x19C
		::System::Single RTXGIResolutionScale; // 0x1A0
		::System::Single oneLightPerPassOptScreenRatioSqr; // 0x1A4
		::System::Single taauScale; // 0x1A8
		::System::Boolean WaterGenBeforeGbuffer; // 0x1AC
		::System::Boolean UseSceneExtraSimpleMesh; // 0x1AD
		::System::Boolean oneLightPerPassOpt; // 0x1AE
		::System::Boolean EnableForwardGBufferPFScene; // 0x1AF
		::UnityEngine::NAPRenderPipeline0::SSAOQuality ssaoMaxQuality; // 0x1B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET))(this);
		}
	};
}
