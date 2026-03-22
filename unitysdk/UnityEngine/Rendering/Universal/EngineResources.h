#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine::NAPRenderPipeline0 { class HableCurve; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererExtension; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CLEARENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x19328AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEDAMAGEDECALTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x193283D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIALS_OFFSET UNITYSDK_OFFSET(0x193259F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x193288D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_OFFSET UNITYSDK_OFFSET(0x19327D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETBLACKSHADOWMAP_OFFSET UNITYSDK_OFFSET(0x19327F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x193230E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19323230)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_RESETSHADOWPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x19328C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x19329080)
#define UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x19329070)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EngineResources_TypeDefinitionIndex = 28382;

	class EngineResources : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_FxPostProcessFogPSMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20760);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20768);
		}
		static ::UnityEngine::Material** StaticGet_m_CameraMotionVectorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20770);
		}
		static ::UnityEngine::Material** StaticGet_m_CaptureMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20778);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererExtension** StaticGet_m_Extension()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererExtension**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20780);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>** StaticGet_decalDamageTextures()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20788);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRendererData** StaticGet_s_Data()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRendererData**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20790);
		}
		static ::UnityEngine::RenderTexture** StaticGet_m_BlackShadowMap()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20798);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussHMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207A0);
		}
		static ::UnityEngine::Material** StaticGet_m_ShowLightMapResolution()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207A8);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207B0);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207B8);
		}
		static ::UnityEngine::Material** StaticGet_m_SamplingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207C0);
		}
		static ::UnityEngine::Material** StaticGet_m_DownSampleDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207C8);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxComposisteAndGradient()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207D0);
		}
		static ::UnityEngine::Material** StaticGet_m_BlendOffScreenUIMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207E0);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthForOffScreenParticlesMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207E8);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_hueVsHue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x207F8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_VfxVolumetricShadow()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20800);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_green()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20808);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceShadow()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20810);
		}
		static ::UnityEngine::Texture2D** StaticGet_characterOverlayTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20818);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflectionB()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20820);
		}
		static ::UnityEngine::Material** StaticGet_m_ExtraMotionVectorPassMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20828);
		}
		static ::UnityEngine::Mesh** StaticGet_m_RainMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20830);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20838);
		}
		static ::UnityEngine::Material** StaticGet_m_DeferredShadingMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20840);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineEffectsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20848);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RayDtenctionCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20850);
		}
		static ::UnityEngine::NAPRenderPipeline0::HableCurve** StaticGet_hableCurve()
		{
			return (::UnityEngine::NAPRenderPipeline0::HableCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20858);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterGhostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20860);
		}
		static ::UnityEngine::Material** StaticGet_m_OcclusionProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20868);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterRampMateiral()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20870);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxPressure()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20878);
		}
		static ::UnityEngine::Material** StaticGet_m_HDROutputMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20880);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_m_EngineMaterialList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20888);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftOcclusionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20890);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderHdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20898);
		}
		static ::UnityEngine::Material** StaticGet_m_CopyDepthMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208A0);
		}
		static ::UnityEngine::Material** StaticGet_m_VisiblePixelCountMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_red()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208B0);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomUpCombineCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208B8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_HQNapBloomBlurCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208C0);
		}
		static ::UnityEngine::Material** StaticGet_m_RegionBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208C8);
		}
		static ::UnityEngine::Texture2D** StaticGet_FSRLuminanceBiasLut()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208D0);
		}
		static ::UnityEngine::Material** StaticGet_m_LensFlareDataDriveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208D8);
		}
		static ::UnityEngine::Material** StaticGet_m_TextureSheetAnimationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208E0);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208E8);
		}
		static ::UnityEngine::Material** StaticGet_m_DrawSkyLutMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208F0);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxDivergence()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x208F8);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20900);
		}
		static ::UnityEngine::Material** StaticGet_m_UVViewMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20908);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_ScreenSpaceGlobalIllumination()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20910);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20918);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricCloudSampleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20920);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceReflectionMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20928);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterialMiddleOn()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20930);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_m_BlurMaterialPropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20938);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenSpaceGlobalIlluminationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20940);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricFogBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20948);
		}
		static ::UnityEngine::Material** StaticGet_m_LightShaftMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20950);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitCubeTextureFaceMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20958);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForEasyMirrorReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20960);
		}
		static ::UnityEngine::Material** StaticGet_m_MeshWindSource()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20968);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_satVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20970);
		}
		static ::UnityEngine::Material** StaticGet_m_LutBuilderLdr()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20978);
		}
		static ::UnityEngine::Material** StaticGet_m_PPFilterMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20980);
		}
		static ::UnityEngine::Material** StaticGet_m_ContactShadowMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20988);
		}
		static ::UnityEngine::Mesh** StaticGet_s_TextureStreamingFakerMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20990);
		}
		static ::UnityEngine::Material** StaticGet_m_BlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20998);
		}
		static ::UnityEngine::Material** StaticGet_m_LyraGISectorVisualizationMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209A0);
		}
		static ::UnityEngine::Material** StaticGet_m_OpaqueUberPostMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209A8);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_decalTextureArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209B0);
		}
		static ::UnityEngine::Material** StaticGet_m_ScreenspaceShadowsMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209B8);
		}
		static ::UnityEngine::Material** StaticGet_m_PerObjectShadowResolveMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209C0);
		}
		static ::UnityEngine::Material** StaticGet_m_PostLightMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_blue()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209D0);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentMaskMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209D8);
		}
		static ::UnityEngine::Material** StaticGet_m_OffScreenParticleBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209E0);
		}
		static ::UnityEngine::Material** StaticGet_m_DepthPyramidMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209E8);
		}
		static ::UnityEngine::Material** StaticGet_m_SkyboxMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209F0);
		}
		static ::UnityEngine::Material** StaticGet_m_TransparentOverdrawMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x209F8);
		}
		static ::UnityEngine::Material** StaticGet_m_NapBloomGaussVMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A00);
		}
		static ::UnityEngine::Material** StaticGet_m_SpriteMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A08);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineObjectMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A10);
		}
		static ::UnityEngine::Material** StaticGet_m_OcclusionBlurMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A18);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_RegionDetectFlareCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A20);
		}
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_colorGradingLutBuilder()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A28);
		}
		static ::UnityEngine::Material** StaticGet_m_VolumetricMistBlitMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A30);
		}
		static ::UnityEngine::Material** StaticGet_m_CharacterIgnisFatuusBlitMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A38);
		}
		static ::UnityEngine::Material** StaticGet_m_GaussianBlurForScreenSpaceReflection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A40);
		}
		static ::UnityEngine::Material** StaticGet_m_TemporalAntializeMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A48);
		}
		static ::UnityEngine::Material** StaticGet_m_BulletHoleMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A50);
		}
		static ::UnityEngine::Material** StaticGet_m_FluidFxAdvection()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A58);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_master()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A60);
		}
		static ::UnityEngine::Material** StaticGet_m_HQNapBloomMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A68);
		}
		static ::UnityEngine::Material** StaticGet_m_FSRMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A70);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineProcessMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A78);
		}
		static ::UnityEngine::NAPRenderPipeline0::TextureCurve** StaticGet_lumVsSat()
		{
			return (::UnityEngine::NAPRenderPipeline0::TextureCurve**)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x20A80);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5680);
		}
		static ::System::Int32* StaticGet_m_BlitMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5684);
		}
		static ::System::Int32* StaticGet_m_SpriteMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5688);
		}
		static ::System::Int32* StaticGet_m_RainMeshID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x568C);
		}
		static ::System::Int32* StaticGet_m_SkyboxMaterialMiddleOnID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5690);
		}
		static ::System::Int32* StaticGet_m_CopyDepthForOffScreenParticlesMaterialID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5694);
		}
		static ::System::Int32* StaticGet_m_RegionDetectFlareCSID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EngineResources_TypeDefinitionIndex)->GetStaticField(0x5698);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetInstanceID(::UnityEngine::Object* obj)
		{
			return ((::System::Int32(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETINSTANCEID_OFFSET))(obj);
		}

		static ::System::Void Initialize(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_INITIALIZE_OFFSET))(asset);
		}

		static ::System::Void CreateEngineMaterials(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIALS_OFFSET))(asset);
		}

		static ::System::Void CreateDamageDecalTextureArray(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEDAMAGEDECALTEXTUREARRAY_OFFSET))(asset);
		}

		static ::UnityEngine::Material* CreateEngineMaterial(::UnityEngine::Shader* shader)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_OFFSET))(shader);
		}

		static ::UnityEngine::Material* CreateEngineMaterial_1(::UnityEngine::Material* material)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CREATEENGINEMATERIAL_1_OFFSET))(material);
		}

		static ::System::Void ClearEngineMaterial()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_CLEARENGINEMATERIAL_OFFSET))();
		}

		static ::System::Void ResetShadowProxyMaterial()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_RESETSHADOWPROXYMATERIAL_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* GetBlackShadowMap()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ENGINERESOURCES_GETBLACKSHADOWMAP_OFFSET))();
		}
	};
}
