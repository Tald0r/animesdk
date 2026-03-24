#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
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
#include "unitysdk/UnityEngine/Rendering/Universal/RTXAOQuality.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xA47C610)

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingProfile_TypeDefinitionIndex = 72083;

	class PerformanceSettingProfile : public ::System::Object
	{
	public:
		// static const ::System::Int32 k_MaxLayers = 0x20; // 0x0
		::Il2CppArray<::System::Single>* ScreenCullingRatio; // 0x10
		::Il2CppArray<::System::Single>* CrowdLODDistances; // 0x18
		::Il2CppArray<::System::Single>* CrowdCameraLODDistances; // 0x20
		::Il2CppArray<::MoleMole::ECrowdShadowFineness>* CrowdShadowFineness; // 0x28
		::System::Boolean UseSceneExtraSimpleMesh; // 0x30
		::System::Boolean DisableGbufferCB; // 0x31
		::System::Boolean DisableStreamingMipmapsUseVisibility; // 0x32
		::System::Boolean DisableDOF; // 0x33
		::UnityEngine::NAPRenderPipeline0::ENapGIQuality NapGIQuality; // 0x34
		::System::Single materialLODDistOutline; // 0x38
		::System::Int32 SceneMaxFurLayer; // 0x3C
		::UnityEngine::Rendering::Universal::RTXAOQuality rtxAOQuality; // 0x40
		::System::Int32 perObjectShadowMaxCount; // 0x44
		::System::Single taauScale; // 0x48
		::System::Single EffectNoTickDistance; // 0x4C
		::UnityEngine::Vector4 HizCullingParams; // 0x50
		::System::Single materialLODDistShadow; // 0x60
		::MoleMole::NapAnisotropicSamplingType AnisotropicSamplingType; // 0x64
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQualityPFScene; // 0x68
		::System::Single materialLODDistMirrorReflection; // 0x6C
		::System::Single PLSDynamicUpdateDistance; // 0x70
		::System::Boolean LightLoopAfterGbuffer; // 0x74
		::System::Boolean napPassOpt2; // 0x75
		::System::Boolean EnableSceneCrowd; // 0x76
		::System::Boolean DitherOpt; // 0x77
		::UnityEngine::Rendering::Universal::LightLodQuality LightLodQuality; // 0x78
		::System::Single SceneFurLayerCountScale; // 0x7C
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQuality; // 0x80
		::System::Single PLSNoSkipDistance; // 0x84
		::System::Single oneLightPerPassOptScreenRatioSqr; // 0x88
		::System::Boolean DisableMotionBlur; // 0x8C
		::System::Boolean napSubpassOptMore; // 0x8D
		::System::Boolean ShadowHizCulling; // 0x8E
		::System::Boolean SampleIBLOpt; // 0x8F
		::System::Single PowerCostThreshhold; // 0x90
		::System::Single RTXGIRayBudgetPFScene; // 0x94
		::System::Single LightFadeLodBias; // 0x98
		::System::Single RTXGIResolutionScale; // 0x9C
		::System::Boolean disableDecalHeightMap; // 0xA0
		::System::Boolean StreamingMipmapsActive; // 0xA1
		::System::Boolean SeparateAfterGbufferPass; // 0xA2
		::System::Boolean WaterGenBeforeGbuffer; // 0xA3
		::System::Int32 MaxAnisotropicSamplingLevel; // 0xA4
		::System::Int32 LightLoopThreadNum; // 0xA8
		::MoleMole::InLevelNPCCrowdLevel InLevelNPCCrowd; // 0xAC
		::System::Single PLSLocalLightCastShadowDistance; // 0xB0
		::System::Boolean enableParticleLightCountOptimize; // 0xB4
		::System::Boolean ShadowAfterGBuffer; // 0xB5
		::System::Boolean OffScreenParticlesMSAA; // 0xB6
		::System::Boolean LightLoopInitOpt; // 0xB7
		::System::Boolean napSubpassOpt; // 0xB8
		::System::Boolean useBakedDecal; // 0xB9
		::System::Boolean oneLightPerPassOpt; // 0xBA
		::System::Boolean UseExtraSimpleMesh; // 0xBB
		::System::Single DiffuseOnlyDistance; // 0xBC
		::UnityEngine::Vector2 RecommendRenderResolution; // 0xC0
		::System::Int32 StreamingReduceLevel; // 0xC8
		::MoleMole::Config::ConfigViewObjectMisc_EntityCreate Vo_EntityCreate; // 0xCC
		::System::Int32 StreamingTextureMaster; // 0xD8
		::System::Boolean DisableDistortion; // 0xDC
		::System::Boolean useFPTLLightCulling; // 0xDD
		::System::Boolean EnableAdaptiveStrategies; // 0xDE
		::System::Boolean NapPassOpt; // 0xDF
		::System::UInt32 PLSMaxStaticUpdatesPerFrame; // 0xE0
		::System::Single SceneMechanismCullDistanceBias; // 0xE4
		::System::Single StreamingKeepDistance; // 0xE8
		::System::Int32 RTXGIQualityPresetPFScene; // 0xEC
		::System::Single LODBias; // 0xF0
		::System::Boolean LightLoopOpt; // 0xF4
		::System::Boolean EnableForwardGBufferPFScene; // 0xF5
		::System::Boolean UsePerobjectShadowProxy; // 0xF6
		::System::Boolean GbufferPreZOpt; // 0xF7
		::System::Boolean DisableCapsuleAOInBattle; // 0xF8
		::System::Boolean EnableLoopSubdivision; // 0xF9
		::System::Single CharacterSampleTextureBias; // 0xFC
		::System::Int32 RTXGIQualityPreset; // 0x100
		::UnityEngine::NAPRenderPipeline0::TransparentMatQuality TransparentMatQuality; // 0x104
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQualityPFScene; // 0x108
		::UnityEngine::Vector4 SceneSampleTextureBias; // 0x10C
		::MoleMole::FrameRateInterpolateType FrameRateInterpolate; // 0x11C
		::System::UInt32 PLSMaxDynamicUpdatesPerFrame; // 0x120
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality VolumetricCloudQuality; // 0x124
		::UnityEngine::Vector4 HizShadowCullingParams; // 0x128
		::System::Single CapsuleAORenderScale; // 0x138
		::System::Single SceneEtherEffectObjectFadeDistance; // 0x13C
		::UnityEngine::NAPRenderPipeline0::SSAOQuality ssaoMaxQuality; // 0x140
		::System::Single FrontFaceCullingBias; // 0x144
		::System::Single materialLODDistCharacterSimplifyTransition; // 0x148
		::System::Single gpuGrassDistanceCullingBias; // 0x14C
		::System::Int32 ShadowSampleCount; // 0x150
		::System::Int32 RTXGIHighQualityShader; // 0x154
		::System::Int32 gpuGrassMeshLodBias; // 0x158
		::System::UInt32 PLSSkipUpdateFrames; // 0x15C
		::System::Boolean LodGroupDisableCulled; // 0x160
		::System::Boolean needExtraDownSampleForFrostedGlass; // 0x161
		::System::Boolean EnableForwardGBuffer; // 0x162
		::System::Boolean forceUseBakedDecalForSpecialScene; // 0x163
		::System::Single EffectHalfTickDistance; // 0x164
		::System::Single RTXGIRayBudget; // 0x168
		::System::Int32 perObjectShadowResolution; // 0x16C
		::System::Single ScreenLengthCullingBias; // 0x170
		::MoleMole::PerformanceSettingProfile_ENPCOmitLevel NpcOmitLevel; // 0x174
		::System::Single materialLODDistRatio; // 0x178
		::UnityEngine::NAPRenderPipeline0::TAAQuality TAAQuality; // 0x17C
		::System::Single StreamingBudget; // 0x180
		::System::Single RTXGIResolutionScalePFScene; // 0x184
		::System::Int32 LightLoopLog2ClusterNum; // 0x188
		::System::Single FrontFaceCullingToleranceBias; // 0x18C
		::System::Single materialLODDistCharacterSimplify; // 0x190
		::System::UInt32 PLSAtlasResolution; // 0x194
		::UnityEngine::Rendering::Universal::GpuGrassShadowType gpuGrassShadowType; // 0x198
		::System::Int32 RTXGIHighQualityShaderPFScene; // 0x19C
		::System::UInt32 PLSMaxShadowedLightCount; // 0x1A0
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQuality; // 0x1A4
		::UnityEngine::NAPRenderPipeline0::NAPShaderQuality NAPShaderQuality; // 0x1A8
		::System::Boolean napDeferredOpt; // 0x1AC
		::System::Boolean WaterGen; // 0x1AD
		::System::Boolean HideSceneSmallObject; // 0x1AE
		::System::Boolean DisableSceneGlare; // 0x1AF
		::System::Boolean EnableRefactorLayout; // 0x1B0
		::System::Boolean PLSEnable; // 0x1B1
		::System::Boolean disableParallaxMapForDecal; // 0x1B2
		::System::Boolean WaterGenPFScene; // 0x1B3
		::System::Single LightLoopLogBase; // 0x1B4
		::System::Single RainDropCountScale; // 0x1B8
		::System::Single decalFadeDistanceBias; // 0x1BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET))(this);
		}
	};
}
