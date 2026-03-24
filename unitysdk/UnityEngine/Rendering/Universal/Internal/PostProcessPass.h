#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/RenderTarget.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/FSRUpSampleMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinRenderTextureType.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_DynamicCacheMemoryContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_EPostProcessShaderQualityLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_LensDirtParams.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_Level.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_PostProcessContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_UberPostContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/UberPostBaseCBuffer.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UberPostAndFinalPassSharedData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace PostProcess::MKGlow { class Effect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class IWeatherConfig; }
namespace UnityEngine::NAPRenderPipeline0 { class MaterialWrapper; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class SRPCmdBuffer; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }
namespace UnityEngine::Rendering::Universal { class Distortion; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class FXComicDot; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }
namespace UnityEngine::Rendering::Universal { class ForwardRenderer; }
namespace UnityEngine::Rendering::Universal { class Glitch; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }
namespace UnityEngine::Rendering::Universal { class MKGlow; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }
namespace UnityEngine::Rendering::Universal { class OldCRT; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal { class UnsharpMask; }
namespace UnityEngine::Rendering::Universal { class VREffects; }
namespace UnityEngine::Rendering::Universal { class Vignette; }
namespace UnityEngine::Rendering::Universal::Internal { class PostProcessPass_MaterialLibrary; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ADDMATERIALTOFLUSH_OFFSET UNITYSDK_OFFSET(0x17640A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLITDSTDISCARDCONTENT_OFFSET UNITYSDK_OFFSET(0x17640EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLUR_OFFSET UNITYSDK_OFFSET(0x1764F110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCCROPEXTENTS_OFFSET UNITYSDK_OFFSET(0x17658DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCMATEIRALDIRTYSTATES_OFFSET UNITYSDK_OFFSET(0x17640B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCVIEWEXTENTS_OFFSET UNITYSDK_OFFSET(0x17658D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x17666B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_COMMONSETUPPASS_OFFSET UNITYSDK_OFFSET(0x17667860)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOBOKEHDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x17644F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x176431E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODISTORTIONBLIT_OFFSET UNITYSDK_OFFSET(0x176468B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODLSS_OFFSET UNITYSDK_OFFSET(0x17641EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOEXECUTE_OFFSET UNITYSDK_OFFSET(0x17667E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFINALPPS_OFFSET UNITYSDK_OFFSET(0x17660960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR2_OFFSET UNITYSDK_OFFSET(0x1764A490)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR3_OFFSET UNITYSDK_OFFSET(0x176492E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFXCOMICDOT_OFFSET UNITYSDK_OFFSET(0x1764B5D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGAUSSIANDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x17643C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGSR_OFFSET UNITYSDK_OFFSET(0x17646920)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMETALFX_OFFSET UNITYSDK_OFFSET(0x1764BBE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMKGLOW_OFFSET UNITYSDK_OFFSET(0x1764BB70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMOTIONBLUR_OFFSET UNITYSDK_OFFSET(0x1764C180)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DONAPBLOOM_OFFSET UNITYSDK_OFFSET(0x1764FD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPANINIPROJECTION_OFFSET UNITYSDK_OFFSET(0x176583F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPARTIALBLUR_OFFSET UNITYSDK_OFFSET(0x17658F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DORADIALBLURORDIRECTIONALBLUR_OFFSET UNITYSDK_OFFSET(0x17658FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSTOPNAN_OFFSET UNITYSDK_OFFSET(0x1765BC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSUBPIXELMORPHOLOGICALANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1765A190)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOTEMPORALANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1765C5B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOSTANDVREFFECTSBEFOREFINALBLIT_OFFSET UNITYSDK_OFFSET(0x17663B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_1_OFFSET UNITYSDK_OFFSET(0x17660BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_OFFSET UNITYSDK_OFFSET(0x17664220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUNSHARPMASK_OFFSET UNITYSDK_OFFSET(0x17664680)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVRDISTORTION_OFFSET UNITYSDK_OFFSET(0x17663780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVREFFECTS_OFFSET UNITYSDK_OFFSET(0x17661090)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWCHESSBOARD3DUI_OFFSET UNITYSDK_OFFSET(0x17646960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWOVERLAYTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x17646D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWRAINDROPANDSPLASH_OFFSET UNITYSDK_OFFSET(0x17659F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWUIAVATARSHADOW_OFFSET UNITYSDK_OFFSET(0x17646F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0x17664F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17667B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTEROFFSET_OFFSET UNITYSDK_OFFSET(0x17648970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTERPHASECOUNT_OFFSET UNITYSDK_OFFSET(0x17648910)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARECLEANUP_OFFSET UNITYSDK_OFFSET(0x1764EDF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARESETUP_OFFSET UNITYSDK_OFFSET(0x1764E5B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLUSHMATERIALMODIFICATIONS_OFFSET UNITYSDK_OFFSET(0x17640BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FREEZETHISCAMERA_OFFSET UNITYSDK_OFFSET(0x1766E4D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GENERATERANDOMOFFSET_OFFSET UNITYSDK_OFFSET(0x17648A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETANDSETUPSHADERQUALITYFORUBER_OFFSET UNITYSDK_OFFSET(0x1765E3F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETASPECT_OFFSET UNITYSDK_OFFSET(0x1764B830)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAHEIGHT_OFFSET UNITYSDK_OFFSET(0x1764B7A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAWIDTH_OFFSET UNITYSDK_OFFSET(0x1764B750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCOCPARAMS_OFFSET UNITYSDK_OFFSET(0x17645E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETFROZENRTID_OFFSET UNITYSDK_OFFSET(0x1766E390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETMAXBOKEHRADIUSINPIXELS_OFFSET UNITYSDK_OFFSET(0x17646850)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1764B970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDIMENSION_OFFSET UNITYSDK_OFFSET(0x1764B9B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEVOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x1764BA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x17640910)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x176406E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOENABLED_OFFSET UNITYSDK_OFFSET(0x1764B7F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1764BA50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETWORLDTOCAMERAMATRIX_OFFSET UNITYSDK_OFFSET(0x1764B890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_INITNAPBLOOMREADONLYDATA_OFFSET UNITYSDK_OFFSET(0x1764F780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ISUSINGTAAU_OFFSET UNITYSDK_OFFSET(0x176479D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_OFFFSR3_OFFSET UNITYSDK_OFFSET(0x176491F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPAREBOKEHKERNEL_OFFSET UNITYSDK_OFFSET(0x17646000)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPARESSPRINPUTRT_OFFSET UNITYSDK_OFFSET(0x1765B8D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDERFINALPASS_OFFSET UNITYSDK_OFFSET(0x17667F60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDER_OFFSET UNITYSDK_OFFSET(0x17668870)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SAFEDIVIDEONE_OFFSET UNITYSDK_OFFSET(0x17664EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETRENDERTARGETCOLORANDDEPTH_OFFSET UNITYSDK_OFFSET(0x17640D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETRENDERTARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x17640DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHARACTERGHOST_OFFSET UNITYSDK_OFFSET(0x1765F8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x1765F650)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCOLORGRADING_OFFSET UNITYSDK_OFFSET(0x1765E640)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDESERTHOTTWIST_OFFSET UNITYSDK_OFFSET(0x1765F470)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDISTORTION_OFFSET UNITYSDK_OFFSET(0x17660560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDITHERING_OFFSET UNITYSDK_OFFSET(0x1766E230)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDLSSCONTEXT_OFFSET UNITYSDK_OFFSET(0x17640FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFINALPASS_OFFSET UNITYSDK_OFFSET(0x17667AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFSR2CONTEXT_OFFSET UNITYSDK_OFFSET(0x17647C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFSR3CONTEXT_OFFSET UNITYSDK_OFFSET(0x17647E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFXCOLORCORRECTION_OFFSET UNITYSDK_OFFSET(0x1765ECF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGLITCH_OFFSET UNITYSDK_OFFSET(0x1765F980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGRAIN_OFFSET UNITYSDK_OFFSET(0x1764B630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPLENSDISTORTION_OFFSET UNITYSDK_OFFSET(0x1765F110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPMKGLOW_OFFSET UNITYSDK_OFFSET(0x1764BB00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPNAPBLOOMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1764E0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPSCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0x1766D220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPTAACONTEXT_OFFSET UNITYSDK_OFFSET(0x1765C010)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVIGNETTE_OFFSET UNITYSDK_OFFSET(0x1765E500)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVREFFECTS_OFFSET UNITYSDK_OFFSET(0x176607B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x17666BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_TRANSITIONRESOURCE_OFFSET UNITYSDK_OFFSET(0x1766CDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_UPDATEFSRUNIFORMPARAMS_OFFSET UNITYSDK_OFFSET(0x17648C00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1766E800)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x17665D80)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_TypeDefinitionIndex = 29993;

	class PostProcessPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet__PyramidIds()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x238B0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_RefGaussRadius()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x238B8);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_jitterOffsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x238C0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_k_BloomTexScaler()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x238C8);
		}
		static ::System::Int32* StaticGet__DLSSColorIn()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6AB0);
		}
		static ::System::Int32* StaticGet__FXLutParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6AB4);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSDepthRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6AB8);
		}
		static ::System::Int32* StaticGet__FrameGenHudless()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6AE0);
		}
		static ::System::Single* StaticGet_s_GlareThresholdForHDR()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6AE4);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSColorOutRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6AE8);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FrameGenHudlessRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B10);
		}
		static ::System::Int32* StaticGet__FSRColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B38);
		}
		static ::System::Int32* StaticGet__FSRColorOut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B3C);
		}
		static ::UnityEngine::Rendering::RenderQueueRange* StaticGet_transparentOverlay()
		{
			return (::UnityEngine::Rendering::RenderQueueRange*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B40);
		}
		static ::System::Int32* StaticGet_m_MetalFXTestMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B48);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FSRColorOutRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B50);
		}
		static ::System::Int32* StaticGet__DLSSDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B78);
		}
		static ::System::Int32* StaticGet__FSRDest()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B7C);
		}
		static ::System::Int32* StaticGet_k_TempUIAvatarShadowDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B80);
		}
		static ::System::UInt32* StaticGet_Lifetime_TempTarget1InPPPass()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B84);
		}
		static ::System::Int32* StaticGet__FXExposure()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B88);
		}
		static ::System::Int32* StaticGet__DLSSGInvertDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B8C);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSGInvertMotionRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6B90);
		}
		static ::System::Single* StaticGet_s_GlareScalerForHDR()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6BB8);
		}
		static ::System::Int32* StaticGet__DLSSMotion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6BBC);
		}
		static ::System::Single* StaticGet_m_OperationMode()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6BC0);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FSRFrameGenMotionRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6BC8);
		}
		static ::System::Single* StaticGet_m_EdgeSharpness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6BF0);
		}
		static ::System::Int32* StaticGet__DLSSColorOut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6BF4);
		}
		static ::System::UInt32* StaticGet_Lifetime_TempTarget3InPPPass()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6BF8);
		}
		static ::System::Int32* StaticGet_k_TempTarget1InPPPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6BFC);
		}
		static ::System::Int32* StaticGet_k_TempTarget3InPPPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C00);
		}
		static ::System::Boolean* StaticGet_s_UseLossyForMotionBlur()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C04);
		}
		static ::System::Boolean* StaticGet_CanRunOnSRPHelper()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C05);
		}
		static ::System::Boolean* StaticGet_m_EnableMetalFX()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C06);
		}
		static ::System::Boolean* StaticGet_s_OverrideHDRBloomValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C07);
		}
		static ::System::Int32* StaticGet_m_MetalFXTestRTId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C08);
		}
		static ::System::Int32* StaticGet__FSRFrameGenMotion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C0C);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSGInvertDepthRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C10);
		}
		static ::System::Int32* StaticGet__FSRFrameGenDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C38);
		}
		static ::System::Int32* StaticGet__DLSSGInvertMotion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C3C);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSMotionRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C40);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FSRFrameGenDepthRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C68);
		}
		static ::System::Int32* StaticGet__VRTextureSheetTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C90);
		}
		static ::System::Int32* StaticGet__FXLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x6C94);
		}
		// static const ::System::Boolean kISClientCG; // 0x0
		// static const ::System::Boolean kIsMobilePlatform; // 0x0
		// static const ::System::Boolean kIsAndroidPlatform; // 0x0
		// static const ::System::Boolean kIsFSR2CompatiblePlatform; // 0x0
		// static const ::System::Int32 BlurLevelCount = 0x4; // 0x0
		// static const ::System::Int32 NapMaxPyramidSize = 0x4; // 0x0
		// static const ::System::Int32 k_MaxPyramidSize = 0x10; // 0x0
		// static const ::System::String* k_RenderPostProcessingTag; // 0x0
		// static const ::System::String* k_RenderFinalPostProcessingTag; // 0x0
		::UnityEngine::Rendering::Universal::MotionBlur* m_MotionBlur; // 0xA8
		::UnityEngine::Rendering::Universal::MKGlow* _mkglow; // 0xB0
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_MaterialLibrary* m_Materials; // 0xB8
		::UnityEngine::Rendering::Universal::Glitch* _glitch; // 0xC0
		::UnityEngine::Rendering::Universal::PostProcessData* m_Data; // 0xC8
		::UnityEngine::Rendering::Universal::ColorLookup* m_ColorLookup; // 0xD0
		::PostProcess::MKGlow::Effect* effect; // 0xD8
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* m_TAABuffersStoreAction; // 0xE0
		::UnityEngine::Rendering::Universal::FilmGrain* m_FilmGrain; // 0xE8
		::UnityEngine::Rendering::Universal::Vignette* m_Vignette; // 0xF0
		::UnityEngine::Rendering::Universal::NapBloom* _napBloom; // 0xF8
		::UnityEngine::ComputeBuffer* m_SpriteBuffer; // 0x100
		::UnityEngine::Rendering::Universal::MKGlow* mKGlowVolumeComponent; // 0x108
		::UnityEngine::Rendering::Universal::DirectionalBlur* _directionalBlur; // 0x110
		::UnityEngine::Rendering::Universal::UnsharpMask* _unsharpMask; // 0x118
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_TAAHistoryIDBuffers; // 0x120
		::UnityEngine::Rendering::Universal::FXColorCorrection* _fxColorCorrection; // 0x128
		::UnityEngine::ComputeBuffer* m_FFArgBuffer; // 0x130
		::UnityEngine::Rendering::Universal::ForwardRenderer* m_Renderer; // 0x138
		::UnityEngine::ComputeBuffer* m_FFTaskBuffer; // 0x140
		::UnityEngine::Rendering::Universal::PaniniProjection* m_PaniniProjection; // 0x148
		::UnityEngine::Rendering::Universal::LensDirt* _LensDirt; // 0x150
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* m_GlobalSettings; // 0x158
		::Il2CppArray<::UnityEngine::RenderTexture*>* m_TAAHistoryBuffers2; // 0x160
		::UnityEngine::Rendering::Universal::PartialBlur* _partialBlur; // 0x168
		::Il2CppArray<::UnityEngine::Vector4>* atlasTargetUVTransforms; // 0x170
		::UnityEngine::Rendering::Universal::Tonemapping* m_Tonemapping; // 0x178
		::UnityEngine::Rendering::Universal::Distortion* _distortion; // 0x180
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_FSRHistoryStatusBuffers; // 0x188
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* m_TAABuffersLoadAction; // 0x190
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_LensDirtParams m_LensDirtParams; // 0x198
		::Il2CppArray<::UnityEngine::Vector4>* atlasSourceUVTransforms; // 0x1E0
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* m_MVColorBufferStoreActions; // 0x1E8
		::UnityEngine::Rendering::Universal::OldCRT* _oldCRT; // 0x1F0
		::UnityEngine::Rendering::Universal::DepthOfField* m_DepthOfField; // 0x1F8
		::UnityEngine::ComputeBuffer* m_FFArgBuffer2; // 0x200
		::UnityEngine::ComputeBuffer* m_SpriteIndirectArgBuffer; // 0x208
		::UnityEngine::Rendering::Universal::LensDistortion* m_LensDistortion; // 0x210
		::UnityEngine::Rendering::Universal::VREffects* _vrEffects; // 0x218
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MRT3; // 0x220
		::Il2CppArray<::UnityEngine::Vector4>* FSRUniformParams; // 0x228
		::UnityEngine::Profiling::CustomSampler* m_Sampler; // 0x230
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* m_MVColorBufferLoadActions; // 0x238
		::PostProcess::MKGlow::RenderTarget destinationRenderTarget; // 0x240
		::UnityEngine::ComputeBuffer* m_RegionDataBuffer; // 0x278
		::PostProcess::MKGlow::RenderTarget sourceRenderTarget; // 0x280
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_FSRHistoryColorBuffers; // 0x2B8
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdListForUIAvatarShadow; // 0x2C0
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::MaterialWrapper*>* m_MaterialsToFlush; // 0x2C8
		::UnityEngine::ComputeBuffer* m_RegionAllocator; // 0x2D0
		::UnityEngine::NAPRenderPipeline0::RenderingData _renderingData; // 0x2D8
		::UnityEngine::Rendering::SRPCmdBuffer* m_SRPBuffer; // 0x870
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::PostProcessPass_Level>* m_Pyramid; // 0x878
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_TAAHistoryBuffersRTIDs; // 0x880
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MRT2; // 0x888
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_TAABuffers; // 0x890
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MVColorBuffers; // 0x898
		::UnityEngine::Rendering::Universal::RadialBlur* _radialBlur; // 0x8A0
		::UnityEngine::Rendering::Universal::ChromaticAberration* m_ChromaticAberration; // 0x8A8
		::UnityEngine::Rendering::Universal::ScriptableRenderer* scriptableRenderer; // 0x8B0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_TransparentShaderTagIdList; // 0x8B8
		::UnityEngine::Rendering::Universal::FXComicDot* _fxComicDot; // 0x8C0
		::UnityEngine::Rendering::Universal::ScreenEffects* _screenEffects; // 0x8C8
		::Il2CppArray<::UnityEngine::Vector4>* m_BokehKernel; // 0x8D0
		::System::String* _profilerName; // 0x8D8
		::UnityEngine::Rendering::RenderTargetIdentifier _RadialBlurDownSampleRtRTID; // 0x8E0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_PassOriginalSource; // 0x908
		::UnityEngine::RenderTextureDescriptor m_MotionDescriptor; // 0x90C
		::UnityEngine::Rendering::RenderTargetIdentifier _FrozenTextureRTID; // 0x948
		::UnityEngine::Rendering::RenderTargetIdentifier _FullCoCTextureRTID; // 0x970
		::UnityEngine::Rendering::RenderTargetIdentifier _HalfColorBufferRTID; // 0x998
		::UnityEngine::Vector2Int m_ColorLookupTextureSize; // 0x9C0
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForOverlay; // 0x9C8
		::UnityEngine::Rendering::RenderTargetIdentifier CurrentActiveRTID; // 0x9E8
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DefaultHDRFormat; // 0xA10
		::System::Boolean m_ColorLookupActive; // 0xA14
		::System::Boolean _isScrFxLastFrameActive; // 0xA15
		::System::Boolean doBloomAfterAntialiasing; // 0xA16
		::System::Boolean napBloomActive; // 0xA17
		::UnityEngine::Rendering::RenderTargetIdentifier RTIDInvalid; // 0xA18
		::UnityEngine::Rendering::RenderTargetIdentifier _PingTextureRTID; // 0xA40
		::System::Int32 maxSpriteNum; // 0xA68
		::UnityEngine::RenderTextureDescriptor _sourceDescriptor; // 0xA6C
		::UnityEngine::Rendering::RenderTargetIdentifier _EdgeTextureRTID; // 0xAA8
		::UnityEngine::Rendering::RenderTargetIdentifier _CameraDepthTextureRTID; // 0xAD0
		::UnityEngine::Rendering::RenderTargetIdentifier _HalfCoCTextureRTID; // 0xAF8
		::UnityEngine::Rendering::RenderTargetIdentifier _HalfAlphaBufferRTID; // 0xB20
		::System::Boolean m_HasFinalPass; // 0xB48
		::System::Boolean m_IsFinalPass; // 0xB49
		::System::Boolean m_FSRResetHistory; // 0xB4A
		::System::Boolean m_TAAIsFirstFrame; // 0xB4B
		::System::Int32 m_MaterialRefreshPass; // 0xB4C
		::UnityEngine::Rendering::RenderTargetIdentifier _TempMotionVector2RTID; // 0xB50
		::UnityEngine::Rendering::RenderTargetIdentifier m_UIAvatarShadowDepthIdentifier; // 0xB78
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_PassFinalDestination; // 0xBA0
		::System::Boolean m_EnableSRGBConversionIfNeeded; // 0xBA4
		::System::Boolean m_TaaUseLDRFormat; // 0xBA5
		::System::Boolean mkGlareIsReady; // 0xBA6
		::System::Boolean m_UseOffScreenParticleRT; // 0xBA7
		::UnityEngine::RenderTextureDescriptor m_DepthDescriptor; // 0xBA8
		::System::Int32 m_BokehHash; // 0xBE0
		::UnityEngine::Rendering::RenderTargetIdentifier m_PassOriginalDepthIdentifier; // 0xBE8
		::UnityEngine::Rendering::RenderTargetIdentifier m_ColorLookupTextureId; // 0xC10
		::UnityEngine::NAPRenderPipeline0::FSRUpSampleMode m_FSRUpSampleMode; // 0xC38
		::System::Single _rand; // 0xC3C
		::UnityEngine::Rendering::RenderTargetIdentifier _RadialBlurBlurredRtRTID; // 0xC40
		::System::Int32 _rendererBufferID; // 0xC68
		::UnityEngine::RenderTextureDescriptor m_NonTAAUDescriptor; // 0xC6C
		::UnityEngine::RenderTextureDescriptor m_Descriptor; // 0xCA4
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DofCoCFormat; // 0xCDC
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_SMAAEdgeFormat; // 0xCE0
		::System::Single m_TaauScale; // 0xCE4
		::UnityEngine::Rendering::RenderTargetIdentifier _BlendTextureRTID; // 0xCE8
		::UnityEngine::Matrix4x4 cameraGPUProjMatrix; // 0xD10
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_FullResColorAttachment; // 0xD50
		::UnityEngine::Rendering::RenderTargetIdentifier flareAtlas; // 0xD58
		::System::Single m_FSRJitterSpread; // 0xD80
		::UnityEngine::RenderTextureDescriptor m_ColorOutDescriptor; // 0xD84
		::UnityEngine::Rendering::RenderTargetIdentifier _PongTextureRTID; // 0xDC0
		::UnityEngine::Matrix4x4 cameraProjMatrix; // 0xDE8
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForUIAvatarShadowTransparent; // 0xE28
		::UnityEngine::Vector2Int FFResolution; // 0xE44
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_PassOriginalDepth; // 0xE4C
		::UnityEngine::Matrix4x4 idProjMat; // 0xE50
		::UnityEngine::Matrix4x4 identityMatrix; // 0xE90
		::UnityEngine::Rendering::RenderTargetIdentifier m_PassOriginalSourceID; // 0xED0
		::UnityEngine::Rendering::RenderTargetIdentifier _TempMotionVectorRTID; // 0xEF8
		::UnityEngine::Matrix4x4 cameraViewMatrix; // 0xF20
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_FullResDepthAttachment; // 0xF60
		::UnityEngine::Rendering::RenderTargetIdentifier cameraDataTargetTextureID; // 0xF68
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForUIAvatarShadowOpaque; // 0xF90
		::UnityEngine::RenderTextureDescriptor m_UIAvatarShadowDepthDescriptor; // 0xFAC
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForChessboardUI; // 0xFE4
		::System::Int32 m_DitheringTextureIndex; // 0x1000
		::UnityEngine::Rendering::RenderTargetIdentifier _CameraMotionVectorsTextureRTID; // 0x1008
		::UnityEngine::Rendering::RenderTargetIdentifier _TempHalfColorRTID; // 0x1030
		::System::Boolean m_UsetTAAU; // 0x1058
		::System::Boolean m_ShouldBlitFrozenTexture; // 0x1059
		::System::Boolean m_FSRUseSMAA; // 0x105A
		::System::Boolean napSecondaryBloomActive; // 0x105B
		::System::Int32 m_JitterPhaseCount; // 0x105C
		::UnityEngine::RenderTextureDescriptor m_UpSampleDescriptor; // 0x1060

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::Rendering::Universal::PostProcessData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::Rendering::Universal::PostProcessData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, renderer, data);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CCTOR_OFFSET))();
		}

		::UnityEngine::RenderTextureDescriptor GetStereoCompatibleDescriptor(::System::Boolean lossy)
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_OFFSET))(this, lossy);
		}

		::UnityEngine::RenderTextureDescriptor GetStereoCompatibleDescriptor_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 depthBufferBits, ::System::Boolean lossy)
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_1_OFFSET))(this, width, height, format, depthBufferBits, lossy);
		}

		::System::Void AddMaterialToFlush(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* wrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ADDMATERIALTOFLUSH_OFFSET))(this, wrapper);
		}

		::System::Void CalcMateiralDirtyStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCMATEIRALDIRTYSTATES_OFFSET))(this);
		}

		::System::Void FlushMaterialModifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLUSHMATERIALMODIFICATIONS_OFFSET))(this);
		}

		::System::Void SetRenderTargetColorAndDepth(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& colorID, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_DynamicCacheMemoryContext& dynamicCache, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoad, ::UnityEngine::Rendering::RenderTargetIdentifier& depthID, ::UnityEngine::Rendering::RenderBufferStoreAction colorStore, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad, ::UnityEngine::Rendering::RenderBufferStoreAction depthStore)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_DynamicCacheMemoryContext&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETRENDERTARGETCOLORANDDEPTH_OFFSET))(this, cmdWrapper, colorID, dynamicCache, colorLoad, depthID, colorStore, depthLoad, depthStore);
		}

		::System::Void SetRenderTargetColor(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& colorID, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_DynamicCacheMemoryContext& dynamicCache, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoad, ::UnityEngine::Rendering::RenderBufferStoreAction colorStore, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad, ::UnityEngine::Rendering::RenderBufferStoreAction depthStore)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_DynamicCacheMemoryContext&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETRENDERTARGETCOLOR_OFFSET))(this, cmdWrapper, colorID, dynamicCache, colorLoad, colorStore, depthLoad, depthStore);
		}

		::UnityEngine::Rendering::BuiltinRenderTextureType BlitDstDiscardContent(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier rt)
		{
			return ((::UnityEngine::Rendering::BuiltinRenderTextureType(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLITDSTDISCARDCONTENT_OFFSET))(this, cmdWrapper, rt);
		}

		::System::Void SetupDLSSContext(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDLSSCONTEXT_OFFSET))(this, cameraData);
		}

		::System::Void DoDLSS(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODLSS_OFFSET))(this, cameraData, cmdWrapper, passContext, destination);
		}

		::System::Void DoDepthOfField(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::System::Boolean hasMotionBlurPass, ::System::Boolean& composeGaussianDofWithMotionBlur)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODEPTHOFFIELD_OFFSET))(this, cameraData, cmdWrapper, passContext, uberPostData, hasMotionBlurPass, composeGaussianDofWithMotionBlur);
		}

		::UnityEngine::Vector4 GetCoCParams(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCOCPARAMS_OFFSET))(this, cameraData);
		}

		::System::Void DoGaussianDepthOfField(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::UnityEngine::Rect pixelRect, ::System::Boolean delayCompose)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGAUSSIANDEPTHOFFIELD_OFFSET))(this, cameraData, cmdWrapper, source, destination, pixelRect, delayCompose);
		}

		::System::Void PrepareBokehKernel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPAREBOKEHKERNEL_OFFSET))(this);
		}

		static ::System::Single GetMaxBokehRadiusInPixels(::System::Single viewportHeight)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETMAXBOKEHRADIUSINPIXELS_OFFSET))(viewportHeight);
		}

		::System::Void DoBokehDepthOfField(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::UnityEngine::Rect pixelRect, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rect, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOBOKEHDEPTHOFFIELD_OFFSET))(this, cmdWrapper, cameraData, source, destination, pixelRect, uberPostData);
		}

		::System::Void DoDistortionBlit(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& context, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean isBeforeDof)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODISTORTIONBLIT_OFFSET))(this, cmdWrapper, context, cameraData, isBeforeDof);
		}

		::System::Void DoGSR()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGSR_OFFSET))(this);
		}

		::System::Void DrawChessboard3DUI(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWCHESSBOARD3DUI_OFFSET))(this, cmd, renderingData, context, postCullRenderingData);
		}

		::System::Void DrawOverlayTransparent(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWOVERLAYTRANSPARENT_OFFSET))(this, cmd, renderingData, context, postCullRenderingData);
		}

		::System::Void DrawUIAvatarShadow(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWUIAVATARSHADOW_OFFSET))(this, cmdWrapper, renderingData, cameraData, context, postCullRenderingData, passContext);
		}

		::System::Void SetupFSR2Context(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFSR2CONTEXT_OFFSET))(this, cameraData);
		}

		::System::Void SetupFSR3Context(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFSR3CONTEXT_OFFSET))(this, cameraData);
		}

		static ::System::Int32 ffxFsr2GetJitterPhaseCount(::System::Single upscale)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTERPHASECOUNT_OFFSET))(upscale);
		}

		static ::UnityEngine::Vector2 ffxFsr2GetJitterOffset(::System::Int32 index, ::System::Int32 phaseCount)
		{
			return ((::UnityEngine::Vector2(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTEROFFSET_OFFSET))(index, phaseCount);
		}

		::UnityEngine::Vector2 GenerateRandomOffset(::System::Int32 frameIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GENERATERANDOMOFFSET_OFFSET))(this, frameIndex);
		}

		::System::Void UpdateFSRUniformParams(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_UPDATEFSRUNIFORMPARAMS_OFFSET))(this, camera, cameraData);
		}

		::System::Void OffFSR3(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_OFFFSR3_OFFSET))(this, cmdWrapper);
		}

		::System::Void DoFSR3(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR3_OFFSET))(this, cameraData, cmdWrapper, passContext, destination);
		}

		::System::Void DoFSR2(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR2_OFFSET))(this, cameraData, cmdWrapper, passContext, destination);
		}

		::System::Void DoFXComicDot(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& context, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFXCOMICDOT_OFFSET))(this, cmdWrapper, context, cameraData);
		}

		::System::Void SetupGrain(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberOrFinalPassMaterial, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData& sharedData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel& shaderQuality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGRAIN_OFFSET))(this, cameraData, uberOrFinalPassMaterial, sharedData, shaderQuality);
		}

		::System::Int32 GetCameraWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAWIDTH_OFFSET))(this);
		}

		::System::Int32 GetCameraHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAHEIGHT_OFFSET))(this);
		}

		::System::Boolean GetStereoEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOENABLED_OFFSET))(this);
		}

		::System::Single GetAspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETASPECT_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetWorldToCameraMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETWORLDTOCAMERAMATRIX_OFFSET))(this);
		}

		::System::Boolean GetOverwriteDescriptor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDESCRIPTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::TextureDimension GetOverwriteDimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDIMENSION_OFFSET))(this);
		}

		::System::Int32 GetOverwriteVolumeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEVOLUMEDEPTH_OFFSET))(this);
		}

		::System::Boolean GetTargetTexture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETTARGETTEXTURE_OFFSET))(this);
		}

		::System::Void SetupMKGlow(::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPMKGLOW_OFFSET))(this, cameraTextureDescriptor);
		}

		::System::Void DoMKGlow(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::MKGlow* mkGlow)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::MKGlow*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMKGLOW_OFFSET))(this, cmdWrapper, passContext, context, renderingData, mkGlow);
		}

		::System::Void DoMetalFx(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier cameraTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMETALFX_OFFSET))(this, cmdWrapper, passContext, cameraData, cameraTarget);
		}

		::System::Void DoMotionBlur(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::System::Boolean composeDoF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMOTIONBLUR_OFFSET))(this, cameraData, cmdWrapper, passContext, composeDoF);
		}

		::System::Void SetupNapBloomContext(::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::System::Boolean isHDRDisplayOn, ::System::Boolean isGlobalSettingBloomOn)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPNAPBLOOMCONTEXT_OFFSET))(this, uberPostData, isHDRDisplayOn, isGlobalSettingBloomOn);
		}

		::System::Void FlareSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARESETUP_OFFSET))(this);
		}

		::System::Void FlareCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARECLEANUP_OFFSET))(this);
		}

		::System::Void Blur(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& src, ::UnityEngine::Rendering::RenderTargetIdentifier& dst, ::UnityEngine::Rendering::RenderTargetIdentifier& tmp, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* materialH, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* materialV, ::System::Int32 gaussWidth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLUR_OFFSET))(this, cmdWrapper, src, dst, tmp, width, height, materialH, materialV, gaussWidth);
		}

		::System::Void InitNapBloomReadonlyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_INITNAPBLOOMREADONLYDATA_OFFSET))(this);
		}

		::System::Void DoNapBloom(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean useOffScreenParticleRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DONAPBLOOM_OFFSET))(this, cmdWrapper, passContext, uberMaterial, uberPostData, renderingData, useOffScreenParticleRT);
		}

		::System::Void DoPaniniProjection(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPANINIPROJECTION_OFFSET))(this, cameraData, cmdWrapper, passContext);
		}

		::UnityEngine::Vector2 CalcViewExtents(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCVIEWEXTENTS_OFFSET))(this, cameraData);
		}

		::UnityEngine::Vector2 CalcCropExtents(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Single d)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCCROPEXTENTS_OFFSET))(this, cameraData, d);
		}

		::System::Void DoPartialBlur(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& context, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPARTIALBLUR_OFFSET))(this, cmdWrapper, context, cameraData);
		}

		::System::Void DoRadialBlurOrDirectionalBlur(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DORADIALBLURORDIRECTIONALBLUR_OFFSET))(this, cameraData, cmdWrapper, passContext);
		}

		::System::Void DrawRainDropAndSplash(::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::System::Boolean beforeAntialiasingCall)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWRAINDROPANDSPLASH_OFFSET))(this, context, renderingData, cmdWrapper, beforeAntialiasingCall);
		}

		::System::Void DoSubpixelMorphologicalAntialiasing(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::System::Boolean onlyApplyOnCharacter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSUBPIXELMORPHOLOGICALANTIALIASING_OFFSET))(this, cameraData, cmdWrapper, passContext, onlyApplyOnCharacter);
		}

		::System::Void PrepareSSPRInputRT(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPARESSPRINPUTRT_OFFSET))(this, cameraData, passContext, cmdWrapper);
		}

		::System::Void DoStopNaN(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSTOPNAN_OFFSET))(this, cameraData, cmdWrapper, passContext);
		}

		::System::Boolean IsUsingTAAU(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ISUSINGTAAU_OFFSET))(this, cameraData);
		}

		::System::Void SetupTAAContext(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPTAACONTEXT_OFFSET))(this, renderingData, cameraData);
		}

		::System::Void DoTemporalAntialiasing(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOTEMPORALANTIALIASING_OFFSET))(this, renderingData, cmdWrapper, passContext);
		}

		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel GetAndSetupShaderQualityForUber()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETANDSETUPSHADERQUALITYFORUBER_OFFSET))(this);
		}

		::System::Void SetupVignette(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::System::Boolean isPlanarReflectionCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVIGNETTE_OFFSET))(this, uberMaterial, uberPostData, isPlanarReflectionCamera);
		}

		::System::Void SetupColorGrading(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& cbufferData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCOLORGRADING_OFFSET))(this, cmdWrapper, renderingData, uberMaterial, cbufferData);
		}

		::System::Void SetupFXColorCorrection(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFXCOLORCORRECTION_OFFSET))(this, uberMaterial);
		}

		::System::Void SetupLensDistortion(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::System::Boolean isSceneView, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::System::Boolean, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPLENSDISTORTION_OFFSET))(this, uberMaterial, isSceneView, uberPostData);
		}

		::System::Void SetupDesertHotTwist(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* envConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDESERTHOTTWIST_OFFSET))(this, uberMaterial, uberPostData, envConfig);
		}

		::System::Void SetupChromaticAberration(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHROMATICABERRATION_OFFSET))(this, uberMaterial, uberPostData);
		}

		::System::Void SetupCharacterGhost(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHARACTERGHOST_OFFSET))(this, uberMaterial, uberPostData);
		}

		::System::Void SetupGlitch(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGLITCH_OFFSET))(this, cmdWrapper, uberMaterial, uberPostData);
		}

		::System::Void SetupDistortion(::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel& shaderQuality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDISTORTION_OFFSET))(this, renderer, uberMaterial, cameraData, uberPostData, shaderQuality);
		}

		::System::Void SetupVREffects(::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVREFFECTS_OFFSET))(this, uberPostData);
		}

		::System::Void DoFinalPPS(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext& uberPostContext, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean renderToTempScaledRT, ::UnityEngine::Rendering::RenderTargetIdentifier cameraTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFINALPPS_OFFSET))(this, cmdWrapper, uberPostContext, passContext, cameraData, renderToTempScaledRT, cameraTarget);
		}

		::System::Void DoUberPostAndVREffectsBeforeFinalBlit(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier sourceInput, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext& uberPostContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOSTANDVREFFECTSBEFOREFINALBLIT_OFFSET))(this, cmdWrapper, sourceInput, cameraData, passContext, uberPostContext);
		}

		::System::Void DoUberPost(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_OFFSET))(this, cmdWrapper, cameraData, destination);
		}

		::System::Void DoUberPost_1(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean renderToTempScaledRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_1_OFFSET))(this, cmdWrapper, cameraData, renderToTempScaledRT);
		}

		::System::Void DoUnsharpMask(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext& passContext)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_PostProcessContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUNSHARPMASK_OFFSET))(this, cmdWrapper, cameraData, passContext);
		}

		::System::Void DoVRDistortion(::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext& uberPostContext, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_UberPostContext&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVRDISTORTION_OFFSET))(this, uberPostContext, cmdWrapper, source);
		}

		::System::Void DoVREffects(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier depthIdIdentifier)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVREFFECTS_OFFSET))(this, cameraData, cmdWrapper, source, depthIdIdentifier);
		}

		::System::Single SafeDivideOne(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SAFEDIVIDEONE_OFFSET))(this, a);
		}

		::System::Void DrawVREffectsOutlineDistortion(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier& depthRTId, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET))(this, cmdWrapper, renderingData, depthRTId, destination);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CLEANUP_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& source, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& destination, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& depth, ::System::Boolean hasFinalPass, ::System::Boolean enableSRGBConversion, ::System::Boolean useOffScreenParticleRT, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSettings, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& fullResColor, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& fullResDepth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET))(this, renderingData, baseDescriptor, source, destination, depth, hasFinalPass, enableSRGBConversion, useOffScreenParticleRT, globalSettings, fullResColor, fullResDepth);
		}

		::System::Void SetupFinalPass(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFINALPASS_OFFSET))(this, cameraData, source);
		}

		::System::Void CommonSetupPass(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_COMMONSETUPPASS_OFFSET))(this, cameraData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void DoExecute(::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOEXECUTE_OFFSET))(this, renderer, cmdWrapper, renderingData, context, postCullRenderingData);
		}

		::System::Void TransitionResource(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_TRANSITIONRESOURCE_OFFSET))(this, cmdWrapper, res);
		}

		::System::Void Render(::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDER_OFFSET))(this, renderer, cmdWrapper, renderingData, context, postCullRenderingData);
		}

		::System::Void SetupScreenEffects(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPSCREENEFFECTS_OFFSET))(this, uberMaterial);
		}

		static ::System::Boolean GetFrozenRTID(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier& rtid)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETFROZENRTID_OFFSET))(cameraData, rtid);
		}

		static ::System::Void FreezeThisCamera(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& frozenRTID)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FREEZETHISCAMERA_OFFSET))(renderingData, cmdWrapper, frozenRTID);
		}

		::System::Void SetupDithering(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberOrFinalPassMaterial, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData& sharedData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::UberPostAndFinalPassSharedData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDITHERING_OFFSET))(this, cameraData, uberOrFinalPassMaterial, sharedData);
		}

		::System::Void RenderFinalPass(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDERFINALPASS_OFFSET))(this, cmdWrapper, renderingData);
		}
	};
}
