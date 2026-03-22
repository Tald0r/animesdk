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
#include "unitysdk/UnityEngine/Rendering/FSRContext.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_EPostProcessShaderQualityLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_LensDirtParams.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_Level.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass___c__DisplayClass274_0.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass___c__DisplayClass274_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass___c__DisplayClass274_2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/UberPostBaseCBuffer.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UberPostAndFinalPassSharedData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace PostProcess::MKGlow { class Effect; }
namespace System { class Action; }
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

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ADDMATERIALTOFLUSH_OFFSET UNITYSDK_OFFSET(0x16F6C7A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLITDSTDISCARDCONTENT_OFFSET UNITYSDK_OFFSET(0x16F70A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLUR_OFFSET UNITYSDK_OFFSET(0x16F75A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCCROPEXTENTS_OFFSET UNITYSDK_OFFSET(0x16F7F0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCMATEIRALDIRTYSTATES_OFFSET UNITYSDK_OFFSET(0x16F6C850)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCVIEWEXTENTS_OFFSET UNITYSDK_OFFSET(0x16F7F040)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x16F89E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_COMMONSETUPPASS_OFFSET UNITYSDK_OFFSET(0x16F8C450)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOBOKEHDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x16F6F110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x16F6DC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODISTORTIONBLIT_OFFSET UNITYSDK_OFFSET(0x16F70B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODLSS_OFFSET UNITYSDK_OFFSET(0x16F6CA30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOEXECUTE_OFFSET UNITYSDK_OFFSET(0x16F8CD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR3_OFFSET UNITYSDK_OFFSET(0x16F715C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR_OFFSET UNITYSDK_OFFSET(0x16F71E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFXCOMICDOT_OFFSET UNITYSDK_OFFSET(0x16F72870)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGAUSSIANDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0x16F6DDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMKGLOW_OFFSET UNITYSDK_OFFSET(0x16F72E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMOTIONBLUR_OFFSET UNITYSDK_OFFSET(0x16F72F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPANINIPROJECTION_OFFSET UNITYSDK_OFFSET(0x16F7EB00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPARTIALBLUR_OFFSET UNITYSDK_OFFSET(0x16F7F250)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DORADIALBLURORDIRECTIONALBLUR_OFFSET UNITYSDK_OFFSET(0x16F7F300)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSUBPIXELMORPHOLOGICALANTIALIASING_OFFSET UNITYSDK_OFFSET(0x16F803B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOTEMPORALANTIALIASING_OFFSET UNITYSDK_OFFSET(0x16F819F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_1_OFFSET UNITYSDK_OFFSET(0x16F9C3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_OFFSET UNITYSDK_OFFSET(0x16F9C130)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUNSHARPMASK_OFFSET UNITYSDK_OFFSET(0x16F9A370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVRDISTORTION_OFFSET UNITYSDK_OFFSET(0x16F85B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVREFFECTS_OFFSET UNITYSDK_OFFSET(0x16F85D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWRAINDROPANDSPLASH_OFFSET UNITYSDK_OFFSET(0x16F80020)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0x16F88200)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16F8C780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTEROFFSET_OFFSET UNITYSDK_OFFSET(0x16F70C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FFXFSR2GETJITTERPHASECOUNT_OFFSET UNITYSDK_OFFSET(0x16F70BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARECLEANUP_OFFSET UNITYSDK_OFFSET(0x16F75710)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLARESETUP_OFFSET UNITYSDK_OFFSET(0x16F74ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FLUSHMATERIALMODIFICATIONS_OFFSET UNITYSDK_OFFSET(0x16F6C920)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_FREEZETHISCAMERA_OFFSET UNITYSDK_OFFSET(0x16F9C980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GENERATERANDOMOFFSET_OFFSET UNITYSDK_OFFSET(0x16F70D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETASPECT_OFFSET UNITYSDK_OFFSET(0x16F72B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAHEIGHT_OFFSET UNITYSDK_OFFSET(0x16F72AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCAMERAWIDTH_OFFSET UNITYSDK_OFFSET(0x16F72A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCOCPARAMS_OFFSET UNITYSDK_OFFSET(0x16F6FFB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETFROZENRTID_OFFSET UNITYSDK_OFFSET(0x16F9C840)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETMAXBOKEHRADIUSINPIXELS_OFFSET UNITYSDK_OFFSET(0x16F709E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x16F72C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEDIMENSION_OFFSET UNITYSDK_OFFSET(0x16F72CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETOVERWRITEVOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x16F72D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x16F6C640)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOCOMPATIBLEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x16F6C410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETSTEREOENABLED_OFFSET UNITYSDK_OFFSET(0x16F72AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x16F72D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETWORLDTOCAMERAMATRIX_OFFSET UNITYSDK_OFFSET(0x16F72B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_INITNAPBLOOM_OFFSET UNITYSDK_OFFSET(0x16F760A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ISUSINGTAAU_OFFSET UNITYSDK_OFFSET(0x16F89EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_OFFFSR3_OFFSET UNITYSDK_OFFSET(0x16F714C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPAREBOKEHKERNEL_OFFSET UNITYSDK_OFFSET(0x16F70190)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDERFINALPASS_OFFSET UNITYSDK_OFFSET(0x16F8D400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDER_OFFSET UNITYSDK_OFFSET(0x16F8DD10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SAFEDIVIDEONE_OFFSET UNITYSDK_OFFSET(0x16F88190)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHARACTERGHOST_OFFSET UNITYSDK_OFFSET(0x16F84AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x16F84840)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCOLORGRADING_OFFSET UNITYSDK_OFFSET(0x16F83830)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDESERTHOTTWIST_OFFSET UNITYSDK_OFFSET(0x16F84660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDISTORTION_OFFSET UNITYSDK_OFFSET(0x16F85680)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDITHERING_OFFSET UNITYSDK_OFFSET(0x16F9C060)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFINALPASS_OFFSET UNITYSDK_OFFSET(0x16F8C6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFXCOLORCORRECTION_OFFSET UNITYSDK_OFFSET(0x16F83EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGLITCH_OFFSET UNITYSDK_OFFSET(0x16F84B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGRAIN_OFFSET UNITYSDK_OFFSET(0x16F72930)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPLENSDIRTPARAMS_OFFSET UNITYSDK_OFFSET(0x16F74CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPLENSDISTORTION_OFFSET UNITYSDK_OFFSET(0x16F84300)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPMKGLOW_OFFSET UNITYSDK_OFFSET(0x16F72E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPNAPBLOOM_OFFSET UNITYSDK_OFFSET(0x16F766A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPSCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0x16F9B050)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVIGNETTE_OFFSET UNITYSDK_OFFSET(0x16F836F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVREFFECTS_OFFSET UNITYSDK_OFFSET(0x16F85950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x16F8A1B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_TRANSITIONRESOURCE_OFFSET UNITYSDK_OFFSET(0x16F9A7B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_UPDATEFSRUNIFORMPARAMS_OFFSET UNITYSDK_OFFSET(0x16F70ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F9CCB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x16F89050)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETCURRENTSOURCE_274_0_OFFSET UNITYSDK_OFFSET(0x16F9D3C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETDESTINATION_274_3_OFFSET UNITYSDK_OFFSET(0x16F9AC50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETSOURCE_274_1_OFFSET UNITYSDK_OFFSET(0x16F9AC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__RELEASERENDERTEXTURE_274_5_OFFSET UNITYSDK_OFFSET(0x16F9C680)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__SETTAARESULT_274_2_OFFSET UNITYSDK_OFFSET(0x16F9B030)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__SWAP_274_4_OFFSET UNITYSDK_OFFSET(0x16F9AFA0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_TypeDefinitionIndex = 29042;

	class PostProcessPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet__PyramidIds()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x22700);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_jitterOffsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x22708);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_RefGaussRadius()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x22710);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_k_BloomTexScaler()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x22718);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FSRFrameGenDepthRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7150);
		}
		static ::System::Int32* StaticGet__DLSSColorIn()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7178);
		}
		static ::System::Single* StaticGet_s_GlareScalerForHDR()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x717C);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSMotionRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7180);
		}
		static ::UnityEngine::Rendering::FSRContext* StaticGet_m_FSRContext()
		{
			return (::UnityEngine::Rendering::FSRContext*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x71A8);
		}
		static ::System::Int32* StaticGet__DLSSMotion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7410);
		}
		static ::System::Int32* StaticGet__FSRFrameGenMotion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7414);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSColorOutRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7418);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSGInvertColorOutRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7440);
		}
		static ::System::Int32* StaticGet__DLSSColorOut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7468);
		}
		static ::System::Int32* StaticGet_m_MetalFXTestRTId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x746C);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSGInvertDepthRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7470);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSDepthRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7498);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FSRFrameGenMotionRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x74C0);
		}
		static ::System::Single* StaticGet_m_EdgeSharpness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x74E8);
		}
		static ::System::Int32* StaticGet_m_MetalFXTestMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x74EC);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__DLSSGInvertMotionRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x74F0);
		}
		static ::System::Int32* StaticGet__DLSSDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7518);
		}
		static ::System::Int32* StaticGet__FSRColorOut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x751C);
		}
		static ::System::Int32* StaticGet__FXExposure()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7520);
		}
		static ::System::Single* StaticGet_m_OperationMode()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7524);
		}
		static ::System::Int32* StaticGet__FXLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7528);
		}
		static ::System::Single* StaticGet_s_GlareThresholdForHDR()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x752C);
		}
		static ::System::Int32* StaticGet__DLSSGInvertOut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7530);
		}
		static ::System::Int32* StaticGet__FSRFrameGenDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7534);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet__FSRColorOutRTID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7538);
		}
		static ::System::Int32* StaticGet__DLSSGInvertMotion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7560);
		}
		static ::UnityEngine::Rendering::RenderQueueRange* StaticGet_transparentOverlay()
		{
			return (::UnityEngine::Rendering::RenderQueueRange*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7564);
		}
		static ::System::Int32* StaticGet__FXLutParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x756C);
		}
		static ::System::Int32* StaticGet__FSRColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7570);
		}
		static ::System::Int32* StaticGet__FSRDest()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7574);
		}
		static ::System::Boolean* StaticGet_s_OverrideHDRBloomValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7578);
		}
		static ::System::Boolean* StaticGet_CanRunOnSRPHelper()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7579);
		}
		static ::System::Boolean* StaticGet_m_EnableMetalFX()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x757A);
		}
		static ::System::Boolean* StaticGet_s_UseLossyForMotionBlur()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x757B);
		}
		static ::System::Int32* StaticGet__DLSSGInvertDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x757C);
		}
		static ::System::Int32* StaticGet__VRTextureSheetTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PostProcessPass_TypeDefinitionIndex)->GetStaticField(0x7580);
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
		::UnityEngine::Rendering::Universal::DirectionalBlur* _directionalBlur; // 0xA8
		::UnityEngine::ComputeBuffer* m_FFArgBuffer; // 0xB0
		::UnityEngine::Rendering::Universal::Glitch* _glitch; // 0xB8
		::UnityEngine::ComputeBuffer* m_FFTaskBuffer; // 0xC0
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MVColorBuffers; // 0xC8
		::UnityEngine::Rendering::Universal::UnsharpMask* _unsharpMask; // 0xD0
		::UnityEngine::Rendering::Universal::LensDirt* _LensDirt; // 0xD8
		::UnityEngine::Rendering::Universal::NapBloom* _napBloom; // 0xE0
		::UnityEngine::Rendering::Universal::OldCRT* _oldCRT; // 0xE8
		::UnityEngine::Rendering::Universal::MKGlow* _mkglow; // 0xF0
		::UnityEngine::ComputeBuffer* m_FFArgBuffer2; // 0xF8
		::UnityEngine::ComputeBuffer* m_RegionAllocator; // 0x100
		::UnityEngine::Rendering::Universal::LensDistortion* m_LensDistortion; // 0x108
		::UnityEngine::Rendering::SRPCmdBuffer* m_SRPBuffer; // 0x110
		::UnityEngine::NAPRenderPipeline0::RenderingData _renderingData; // 0x118
		::Il2CppArray<::UnityEngine::RenderTexture*>* m_TAAHistoryBuffers2; // 0x6B0
		::UnityEngine::Rendering::Universal::RadialBlur* _radialBlur; // 0x6B8
		::UnityEngine::ComputeBuffer* m_SpriteIndirectArgBuffer; // 0x6C0
		::UnityEngine::Rendering::Universal::MotionBlur* m_MotionBlur; // 0x6C8
		::UnityEngine::ComputeBuffer* m_SpriteBuffer; // 0x6D0
		::PostProcess::MKGlow::RenderTarget sourceRenderTarget; // 0x6D8
		::UnityEngine::Rendering::Universal::Vignette* m_Vignette; // 0x710
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* m_TAABuffersLoadAction; // 0x718
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_TAAHistoryBuffersRTIDs; // 0x720
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_TransparentShaderTagIdList; // 0x728
		::UnityEngine::Rendering::Universal::PostProcessData* m_Data; // 0x730
		::UnityEngine::Profiling::CustomSampler* m_Sampler; // 0x738
		::Il2CppArray<::UnityEngine::Vector4>* m_BokehKernel; // 0x740
		::UnityEngine::Rendering::Universal::FXComicDot* _fxComicDot; // 0x748
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* m_MVColorBufferLoadActions; // 0x750
		::UnityEngine::Rendering::Universal::ColorLookup* m_ColorLookup; // 0x758
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_FSRHistoryColorBuffers; // 0x760
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_TAABuffers; // 0x768
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_FSRHistoryStatusBuffers; // 0x770
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* m_TAABuffersStoreAction; // 0x778
		::UnityEngine::Rendering::Universal::ScreenEffects* _screenEffects; // 0x780
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* m_GlobalSettings; // 0x788
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_MaterialLibrary* m_Materials; // 0x790
		::Il2CppArray<::UnityEngine::Vector4>* atlasTargetUVTransforms; // 0x798
		::UnityEngine::Rendering::Universal::ChromaticAberration* m_ChromaticAberration; // 0x7A0
		::Il2CppArray<::UnityEngine::Vector4>* FSRUniformParams; // 0x7A8
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MRT2; // 0x7B0
		::UnityEngine::ComputeBuffer* m_RegionDataBuffer; // 0x7B8
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::MaterialWrapper*>* m_MaterialsToFlush; // 0x7C0
		::UnityEngine::Rendering::Universal::PartialBlur* _partialBlur; // 0x7C8
		::PostProcess::MKGlow::RenderTarget destinationRenderTarget; // 0x7D0
		::UnityEngine::Rendering::Universal::DepthOfField* m_DepthOfField; // 0x808
		::UnityEngine::Rendering::Universal::ForwardRenderer* m_Renderer; // 0x810
		::Il2CppArray<::UnityEngine::Vector4>* atlasSourceUVTransforms; // 0x818
		::UnityEngine::Rendering::Universal::MKGlow* mKGlowVolumeComponent; // 0x820
		::UnityEngine::Rendering::Universal::PaniniProjection* m_PaniniProjection; // 0x828
		::UnityEngine::Rendering::Universal::FilmGrain* m_FilmGrain; // 0x830
		::UnityEngine::Rendering::Universal::FXColorCorrection* _fxColorCorrection; // 0x838
		::UnityEngine::Rendering::Universal::ScriptableRenderer* scriptableRenderer; // 0x840
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdListForUIAvatarShadow; // 0x848
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::PostProcessPass_Level>* m_Pyramid; // 0x850
		::UnityEngine::Rendering::Universal::Distortion* _distortion; // 0x858
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* m_MVColorBufferStoreActions; // 0x860
		::UnityEngine::Rendering::Universal::Tonemapping* m_Tonemapping; // 0x868
		::UnityEngine::Rendering::Universal::VREffects* _vrEffects; // 0x870
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_MRT3; // 0x878
		::PostProcess::MKGlow::Effect* effect; // 0x880
		::System::String* _profilerName; // 0x888
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_TAAHistoryIDBuffers; // 0x890
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_LensDirtParams m_LensDirtParams; // 0x898
		::UnityEngine::Rendering::RenderTargetIdentifier _CameraMotionVectorsTextureRTID; // 0x8E0
		::System::Int32 k_TempTarget1InPPPass; // 0x908
		::UnityEngine::RenderTextureDescriptor m_DepthDescriptor; // 0x90C
		::UnityEngine::Rendering::RenderTargetIdentifier _RadialBlurBlurredRtRTID; // 0x948
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_Source; // 0x970
		::UnityEngine::Matrix4x4 cameraViewMatrix; // 0x974
		::System::UInt32 Lifetime_TempTarget1InPPPass; // 0x9B4
		::UnityEngine::Vector2Int m_ColorLookupTextureSize; // 0x9B8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_FullResDepthAttachment; // 0x9C0
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForUIAvatarShadowOpaque; // 0x9C4
		::System::Int32 _rendererBufferID; // 0x9E0
		::System::Int32 k_TempUIAvatarShadowDepth; // 0x9E4
		::UnityEngine::Rendering::RenderTargetIdentifier m_ColorLookupTextureId; // 0x9E8
		::System::Boolean mkGlareIsReady; // 0xA10
		::System::Boolean m_ShouldBlitFrozenTexture; // 0xA11
		::System::Boolean m_IsFinalPass; // 0xA12
		::System::Boolean m_HasFinalPass; // 0xA13
		::System::Boolean m_FSRResetHistory; // 0xA14
		::System::Boolean m_ColorLookupActive; // 0xA15
		::System::Boolean m_TAAIsFirstFrame; // 0xA16
		::System::Boolean m_FSRUseSMAA; // 0xA17
		::System::Int32 m_BokehHash; // 0xA18
		::System::Int32 m_MaterialRefreshPass; // 0xA1C
		::UnityEngine::Rendering::RenderTargetIdentifier _HalfCoCTextureRTID; // 0xA20
		::UnityEngine::Rendering::RenderTargetIdentifier m_UIAvatarShadowDepthIdentifier; // 0xA48
		::UnityEngine::Rendering::RenderTargetIdentifier _TempMotionVectorRTID; // 0xA70
		::UnityEngine::Rendering::RenderTargetIdentifier _HalfColorBufferRTID; // 0xA98
		::UnityEngine::Rendering::RenderTargetIdentifier CurrentActiveRTID; // 0xAC0
		::UnityEngine::Rendering::RenderTargetIdentifier _EdgeTextureRTID; // 0xAE8
		::UnityEngine::Rendering::RenderTargetIdentifier _CameraDepthTextureRTID; // 0xB10
		::UnityEngine::Rendering::RenderTargetIdentifier _FullCoCTextureRTID; // 0xB38
		::UnityEngine::RenderTextureDescriptor m_NonTAAUDescriptor; // 0xB60
		::System::Int32 m_DitheringTextureIndex; // 0xB98
		::System::Int32 k_TempTarget3InPPPass; // 0xB9C
		::System::Int32 maxSpriteNum; // 0xBA0
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForUIAvatarShadowTransparent; // 0xBA4
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_SMAAEdgeFormat; // 0xBC0
		::UnityEngine::Rendering::RenderTargetIdentifier _FrozenTextureRTID; // 0xBC8
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DefaultHDRFormat; // 0xBF0
		::UnityEngine::NAPRenderPipeline0::FSRUpSampleMode m_FSRUpSampleMode; // 0xBF4
		::UnityEngine::RenderTextureDescriptor m_UIAvatarShadowDepthDescriptor; // 0xBF8
		::UnityEngine::RenderTextureDescriptor m_ColorOutDescriptor; // 0xC30
		::UnityEngine::Matrix4x4 identityMatrix; // 0xC68
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForOverlay; // 0xCA8
		::UnityEngine::Matrix4x4 idProjMat; // 0xCC4
		::UnityEngine::Matrix4x4 cameraGPUProjMatrix; // 0xD04
		::UnityEngine::Rendering::RenderTargetIdentifier _PingTextureRTID; // 0xD48
		::UnityEngine::Rendering::RenderTargetIdentifier sourceIdentifier; // 0xD70
		::UnityEngine::Rendering::RenderTargetIdentifier m_DepthIdentifier; // 0xD98
		::UnityEngine::Vector2Int FFResolution; // 0xDC0
		::UnityEngine::RenderTextureDescriptor m_MotionDescriptor; // 0xDC8
		::UnityEngine::Rendering::RenderTargetIdentifier _TempHalfColorRTID; // 0xE00
		::System::UInt32 Lifetime_TempTarget3InPPPass; // 0xE28
		::UnityEngine::Matrix4x4 cameraProjMatrix; // 0xE2C
		::UnityEngine::Rendering::RenderTargetIdentifier _TempMotionVector2RTID; // 0xE70
		::UnityEngine::Rendering::RenderTargetIdentifier _BlendTextureRTID; // 0xE98
		::UnityEngine::RenderTextureDescriptor _sourceDescriptor; // 0xEC0
		::UnityEngine::RenderTextureDescriptor m_UpSampleDescriptor; // 0xEF8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_FullResColorAttachment; // 0xF30
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_Depth; // 0xF34
		::UnityEngine::Rendering::RenderTargetIdentifier RTIDInvalid; // 0xF38
		::UnityEngine::Rendering::RenderTargetIdentifier _TargetTextureRTID; // 0xF60
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_Destination; // 0xF88
		::System::Single _rand; // 0xF8C
		::UnityEngine::Rendering::RenderTargetIdentifier flareAtlas; // 0xF90
		::UnityEngine::Rendering::RenderTargetIdentifier _PongTextureRTID; // 0xFB8
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForChessboardUI; // 0xFE0
		::System::Single m_FSRJitterSpread; // 0xFFC
		::UnityEngine::Rendering::RenderTargetIdentifier _RadialBlurDownSampleRtRTID; // 0x1000
		::UnityEngine::Rendering::RenderTargetIdentifier _HalfAlphaBufferRTID; // 0x1028
		::UnityEngine::RenderTextureDescriptor m_Descriptor; // 0x1050
		::System::Int32 m_JitterPhaseCount; // 0x1088
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DofCoCFormat; // 0x108C
		::System::Boolean _isScrFxLastFrameActive; // 0x1090
		::System::Boolean m_EnableSRGBConversionIfNeeded; // 0x1091
		::System::Boolean m_TaaUseLDRFormat; // 0x1092
		::System::Boolean m_UseOffScreenParticleRT; // 0x1093

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

		::UnityEngine::Rendering::RenderTargetIdentifier DoDLSS(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODLSS_OFFSET))(this, cameraData, cmdWrapper, source, destination);
		}

		::System::Void DoDepthOfField(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Rect pixelRect, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::System::Boolean delayCompose)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rect, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODEPTHOFFIELD_OFFSET))(this, cameraData, cmdWrapper, source, destination, pixelRect, uberPostData, delayCompose);
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

		::System::Void DoDistortionBlit(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Action* swapFun)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODISTORTIONBLIT_OFFSET))(this, cmdWrapper, source, destination, cameraData, swapFun);
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

		::UnityEngine::Rendering::RenderTargetIdentifier DoFSR3(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR3_OFFSET))(this, cameraData, cmdWrapper, source, destination);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier DoFSR(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFSR_OFFSET))(this, cameraData, cmdWrapper, source, destination);
		}

		::System::Void DoFXComicDot(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Action* swapFun)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOFXCOMICDOT_OFFSET))(this, cmdWrapper, source, destination, cameraData, swapFun);
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

		::System::Void DoMKGlow(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::MKGlow* mkGlow)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::MKGlow*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMKGLOW_OFFSET))(this, cmdWrapper, source, destination, context, renderingData, mkGlow);
		}

		::System::Void DoMotionBlur(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::System::Boolean composeDoF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMOTIONBLUR_OFFSET))(this, cameraData, cmdWrapper, source, destination, composeDoF);
		}

		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_LensDirtParams SetupLensDirtParams()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::PostProcessPass_LensDirtParams(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPLENSDIRTPARAMS_OFFSET))(this);
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

		::System::Void InitNapBloom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_INITNAPBLOOM_OFFSET))(this);
		}

		::System::Void SetupNapBloom(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean useOffScreenParticleRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPNAPBLOOM_OFFSET))(this, cmdWrapper, source, destination, uberMaterial, uberPostData, renderingData, useOffScreenParticleRT);
		}

		::System::Void DoPaniniProjection(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPANINIPROJECTION_OFFSET))(this, cameraData, cmdWrapper, source, destination);
		}

		::UnityEngine::Vector2 CalcViewExtents(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCVIEWEXTENTS_OFFSET))(this, cameraData);
		}

		::UnityEngine::Vector2 CalcCropExtents(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Single d)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCCROPEXTENTS_OFFSET))(this, cameraData, d);
		}

		::System::Void DoPartialBlur(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPARTIALBLUR_OFFSET))(this, cmdWrapper, source, destination, cameraData);
		}

		::System::Void DoRadialBlurOrDirectionalBlur(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DORADIALBLURORDIRECTIONALBLUR_OFFSET))(this, cameraData, cmdWrapper, source, destination);
		}

		::System::Void DrawRainDropAndSplash(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWRAINDROPANDSPLASH_OFFSET))(this, cameraData, renderingData, cmdWrapper);
		}

		::System::Void DoSubpixelMorphologicalAntialiasing(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::System::Boolean onlyApplyOnCharacter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSUBPIXELMORPHOLOGICALANTIALIASING_OFFSET))(this, cameraData, cmdWrapper, source, destination, onlyApplyOnCharacter);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier DoTemporalAntialiasing(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOTEMPORALANTIALIASING_OFFSET))(this, renderingData, cmdWrapper, source, destination);
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

		::System::Void SetupGlitch(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGLITCH_OFFSET))(this, uberMaterial, uberPostData);
		}

		::System::Void SetupDistortion(::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel& shaderQuality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EPostProcessShaderQualityLevel&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDISTORTION_OFFSET))(this, renderer, uberMaterial, cameraData, uberPostData, shaderQuality);
		}

		::System::Void SetupVREffects(::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer& uberPostData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::UberPostBaseCBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVREFFECTS_OFFSET))(this, uberPostData);
		}

		::System::Void DoVRDistortion(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOVRDISTORTION_OFFSET))(this, cameraData, cmdWrapper, source);
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

		::System::Boolean IsUsingTAAU(::UnityEngine::NAPRenderPipeline0::CameraData cameraData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ISUSINGTAAU_OFFSET))(this, cameraData);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::RenderTextureDescriptor& baseDescriptor, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& source, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& destination, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& depth, ::System::Boolean hasFinalPass, ::System::Boolean enableSRGBConversion, ::System::Boolean useOffScreenParticleRT, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSettings, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& fullResColor, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle& fullResDepth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET))(this, renderingData, baseDescriptor, source, destination, depth, hasFinalPass, enableSRGBConversion, useOffScreenParticleRT, globalSettings, fullResColor, fullResDepth);
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

		::System::Void DoUnsharpMask(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUNSHARPMASK_OFFSET))(this, cmdWrapper, source, destination);
		}

		::System::Void TransitionResource(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_TRANSITIONRESOURCE_OFFSET))(this, cmdWrapper, res);
		}

		::System::Void Render(::UnityEngine::Rendering::Universal::ForwardRenderer* renderer, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRenderer*, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDER_OFFSET))(this, renderer, cmdWrapper, renderingData, context, postCullRenderingData);
		}

		::UnityEngine::Rendering::BuiltinRenderTextureType BlitDstDiscardContent(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier rt)
		{
			return ((::UnityEngine::Rendering::BuiltinRenderTextureType(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLITDSTDISCARDCONTENT_OFFSET))(this, cmdWrapper, rt);
		}

		::System::Void SetupScreenEffects(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uberMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPSCREENEFFECTS_OFFSET))(this, uberMaterial);
		}

		::System::Void DoUberPost(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_OFFSET))(this, cmdWrapper, cameraData, destination);
		}

		::System::Void DoUberPost_1(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean renderToTempScaledRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOUBERPOST_1_OFFSET))(this, cmdWrapper, cameraData, renderToTempScaledRT);
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

		static ::UnityEngine::Rendering::RenderTargetIdentifier _Render_g__GetCurrentSource_274_0(::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1& a1)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETCURRENTSOURCE_274_0_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier _Render_g__GetSource_274_1(::System::Boolean clearCache, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1& a2)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::System::Boolean, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETSOURCE_274_1_OFFSET))(clearCache, a2);
		}

		static ::System::Void _Render_g__SetTaaResult_274_2(::UnityEngine::Rendering::RenderTargetIdentifier taaResult, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__SETTAARESULT_274_2_OFFSET))(taaResult, a2);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier _Render_g__GetDestination_274_3(::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_0& a1, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1& a2)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_0&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETDESTINATION_274_3_OFFSET))(this, a1, a2);
		}

		static ::System::Void _Render_g__Swap_274_4(::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_1&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__SWAP_274_4_OFFSET))(a1);
		}

		::System::Void _Render_g__ReleaseRenderTexture_274_5(::System::Int32 id, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_0& a2, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_2& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_0&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass274_2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__RELEASERENDERTEXTURE_274_5_OFFSET))(this, id, a2, a3);
		}
	};
}
