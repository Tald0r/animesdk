#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorUtils_Vector4Int.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraUpdateProbePass_BLVClipmapData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraUpdateProbePass_LyraVoxelLightCache.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraUpdateProbePass_ProbeClipmapData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_ALLOCATERESOURCE_OFFSET UNITYSDK_OFFSET(0x1932A4E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x19329E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEBUFFER_1_OFFSET UNITYSDK_OFFSET(0x19329DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEBUFFER_OFFSET UNITYSDK_OFFSET(0x19329CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1932E450)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1932B700)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1932F380)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_GETSDFAOLOWRESJITTEROFFSET_OFFSET UNITYSDK_OFFSET(0x1932E0F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_GET_ALLOCATED_OFFSET UNITYSDK_OFFSET(0x19329CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PREVPROBEINDIRECTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x19329C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PROBEINDIRECTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x19329C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SAFERELEASEANDRESET_OFFSET UNITYSDK_OFFSET(0x19335390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SDFAOUSEHALFRES_OFFSET UNITYSDK_OFFSET(0x1932DFE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETCOPYLYRASTATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1932D7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETDEBUGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19329FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETLYRAPROBEGLOBALUNIFORMS_OFFSET UNITYSDK_OFFSET(0x1932CA30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1932E320)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETVISUALIZEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1932C0F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SET_ALLOCATED_OFFSET UNITYSDK_OFFSET(0x19329CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEBAKEDLIGHTVOLUME_OFFSET UNITYSDK_OFFSET(0x1932BC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEPROBECLIPMAPS_OFFSET UNITYSDK_OFFSET(0x1932B830)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEVOXELLIGHTCACHE_OFFSET UNITYSDK_OFFSET(0x1932D8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19335400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1932A1D0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraUpdateProbePass_TypeDefinitionIndex = 29032;

	class LyraUpdateProbePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugDrawFreeze()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20AE0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerClearProbeUpdateAllocator()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20AE8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugVoxelLightingClipmap()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20AF0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerDispatchDeallocate()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20AF8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraVisualizeSDFAOMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B00);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraOverrideDebugCursorPos()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B08);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDirectionalLightingIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B10);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeLocalLight()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B18);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_MaxViewDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B20);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerClearVoxelCacheRequiresBuffer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B28);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_SDFAOStrength()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B30);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSampler()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B38);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraGIFade()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B40);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerDeallocateProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B48);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerRelocateProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B50);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraEnableReferenceMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B58);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraGIBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B60);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraShowState()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B68);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B70);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeProbeLighting()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B78);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugCursorY()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B80);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraSampleLightmap()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B88);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraFreezeProbeUpdate()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B90);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraBounceDistanceExtinction()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20B98);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerGenerateRays()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BA0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerResampleProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BA8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraRiseClipByDistanceInVisualizeSDFLighting()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BB0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraQualityHigh()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BB8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraSkyIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BC0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDirectionalLightShadowDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BC8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerClearIndirectionTexture()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BD0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraFullresApply()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BD8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeResample()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BE0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerUpdateUsedProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BE8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerPrepareForRayTracing()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BF0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugSDFAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20BF8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugVoxelLightingMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C00);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeTrace()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C08);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugDrawEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C10);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDisableLightCulling()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C18);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraLightmapIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C20);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDisableMultiBounce()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C28);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraSDFAOForceTemporal()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C30);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugCursorX()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C38);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerUpdateProbeSH()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C40);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeTraceLightCondition()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C48);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraLocalLightingIntensity()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C50);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerCollectNewProbes()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C58);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraTriggerProbeReCheck()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C60);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraLightGridScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C68);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerPrepareProbesForProcessing()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C70);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerCollectRays()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C78);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraSkyPassThrough()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C80);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraProbeResampling()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C88);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDirectionalLightingSaturation()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C90);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_ScaleRadiusInWorldSpace()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20C98);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_MaxOcclusionDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CA0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugDrawDontClear()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CA8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerTraceRays()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CB0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeProbe()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CB8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraLocalLightingSaturation()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CC0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraApplyScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CC8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraDebugVoxeCache()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CD0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugVoxeCacheClipmap()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CD8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraVisualizeSDFAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CE0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraUseContactGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CE8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraApplyInDeferredPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CF0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSamplerClearBuffer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20CF8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraMainLightIndirectMultiplier()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20D00);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_LyraEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20D08);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraPerBounceScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20D10);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_LyraVisualizeProbeMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20D18);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_LyraDebugSDFLightingMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x20D20);
		}
		static ::System::Int32* StaticGet_LyraQuality()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LyraUpdateProbePass_TypeDefinitionIndex)->GetStaticField(0x56C0);
		}
		// static const ::System::String* profileTag; // 0x0
		// static const ::System::Int32 InitializeFreeProbeBufferKernel = 0x0; // 0x0
		// static const ::System::Int32 CollectNewProbes = 0x3; // 0x0
		// static const ::System::Int32 PrepareProbesForProcessing = 0x4; // 0x0
		// static const ::System::Int32 RelocateProbes = 0x5; // 0x0
		// static const ::System::Int32 ResampleProbes = 0x6; // 0x0
		// static const ::System::Int32 DispatchDeallocate = 0x8; // 0x0
		// static const ::System::Int32 DeallocateProbes = 0x9; // 0x0
		// static const ::System::Int32 CollectRays = 0xA; // 0x0
		// static const ::System::Int32 GenerateRays = 0xD; // 0x0
		// static const ::System::Int32 PrepareForRayTracing = 0x10; // 0x0
		// static const ::System::Int32 UpdateProbeSH = 0x11; // 0x0
		// static const ::System::Int32 kernelInitializeVoxelLightCache = 0x13; // 0x0
		// static const ::System::Int32 PrepareVoxelLightCacheUpdate = 0x14; // 0x0
		// static const ::System::Int32 ReleaseVoxelLightCache = 0x15; // 0x0
		// static const ::System::Int32 LyraProbeVolumeSize = 0x20; // 0x0
		// static const ::System::Int32 LyraProbeClipmapCount = 0x6; // 0x0
		// static const ::System::Int32 LyraMaxProbeNum = 0x8000; // 0x0
		// static const ::System::Int32 LyraVoxelGridWidth = 0x20; // 0x0
		// static const ::System::Int32 LyraVoxelClipmapCount = 0x8; // 0x0
		// static const ::System::Int32 LyraMaxVoxelNum = 0x10000; // 0x0
		// static const ::System::Single LyraProbeSpacing; // 0x0
		// static const ::System::Int32 MaxNumRays = 0x57E40; // 0x0
		// static const ::System::Int32 LyraBakedLightingVolumeSize = 0x10; // 0x0
		// static const ::System::Int32 LyraBakedLightingVolumeClipCount = 0x3; // 0x0
		// static const ::System::Single LyraBakedLightingVolumeBaseCellSize; // 0x0
		// static const ::System::Int32 LYRA_MAX_CSM_LEVEL = 0x8; // 0x0
		::UnityEngine::ComputeBuffer* m_probePositionBuffer; // 0xA8
		::UnityEngine::ComputeBuffer* m_probeBuffer; // 0xB0
		::UnityEngine::ComputeBuffer* m_probeLightingSHBuffer; // 0xB8
		::UnityEngine::RenderTexture* m_prevProbeIndirectionTexture; // 0xC0
		::UnityEngine::ComputeShader* m_lyraUpdateProbesAdditionalCS; // 0xC8
		::UnityEngine::ComputeBuffer* OutputShaderDrawIndirect; // 0xD0
		::UnityEngine::ComputeBuffer* m_freeProbeQueueBuffer; // 0xD8
		::UnityEngine::ComputeBuffer* HisOutputShaderDrawIndirect; // 0xE0
		::UnityEngine::RenderTexture* m_debugClipMap; // 0xE8
		::UnityEngine::ComputeShader* m_lyraUpdateProbesCS; // 0xF0
		::UnityEngine::ComputeBuffer* m_probeEstimatorDataBuffer; // 0xF8
		::UnityEngine::ComputeBuffer* m_freeProbeBuffer; // 0x100
		::UnityEngine::ComputeBuffer* m_rayInfoBuffer; // 0x108
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass_BLVClipmapData m_BLVClipmapData; // 0x110
		::Il2CppArray<::System::UInt32>* _data; // 0x138
		::UnityEngine::ComputeBuffer* m_rayGenerationArgsBuffer; // 0x140
		::UnityEngine::ComputeBuffer* m_vlcUpdateBuffer; // 0x148
		::UnityEngine::ComputeBuffer* m_probeDebuggingBuffer; // 0x150
		::UnityEngine::ComputeBuffer* m_tracingResultBuffer; // 0x158
		::UnityEngine::RenderTexture* m_probeIndirectionTexture; // 0x160
		::UnityEngine::ComputeBuffer* m_vlcReleaseBuffer; // 0x168
		::UnityEngine::ComputeBuffer* HisOutShaderDrawPrimitive; // 0x170
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass_LyraVoxelLightCache m_lyraVoxelLightCache; // 0x178
		::UnityEngine::ComputeBuffer* m_vlcIndirectBuffer; // 0x1B0
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass_ProbeClipmapData m_probeClipmapData; // 0x1B8
		::Il2CppArray<::UnityEngine::ComputeBuffer*>* m_probeClipmapDataBuffer; // 0x1E0
		::UnityEngine::ComputeBuffer* m_rayTracingArgsBuffer; // 0x1E8
		::Il2CppArray<::UnityEngine::ComputeBuffer*>* m_BLVClipmapDataBuffer; // 0x1F0
		::UnityEngine::ComputeBuffer* m_probeAllocator; // 0x1F8
		::UnityEngine::ComputeBuffer* OutShaderDrawPrimitive; // 0x200
		::UnityEngine::Material* m_lyraDebugMaterial; // 0x208
		::UnityEngine::ComputeBuffer* m_probeUpdateBuffer; // 0x210
		::UnityEngine::ComputeBuffer* m_probeDeallocateArgsBuffer; // 0x218
		::UnityEngine::ComputeBuffer* m_probeUpdateAllocator; // 0x220
		::UnityEngine::RenderTexture* m_dummySDF; // 0x228
		::UnityEngine::ComputeBuffer* m_newProbeUpdateArgsBuffer; // 0x230
		::System::Int32 DebugProbeStride; // 0x238
		::System::Boolean m_historyValid; // 0x23C
		::System::Boolean _Allocated_k__BackingField; // 0x23D
		::System::Boolean m_isFirstFrame; // 0x23E
		::System::Int32 VoxelLightingKernelBase; // 0x240
		::System::Int32 UpdateUsedProbes; // 0x244
		::System::Int32 m_frameMod3; // 0x248
		::System::Int32 BaseTraceRaysKernelIndex; // 0x24C
		::System::Int32 ManageVoxelLightCacheBaseKernelID; // 0x250

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::ComputeShader* lyraUpdateProbesCS, ::UnityEngine::ComputeShader* lyraUpdateProbesAdditionalCS, ::UnityEngine::Shader* lyraDebugShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::ComputeShader*, ::UnityEngine::ComputeShader*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, lyraUpdateProbesCS, lyraUpdateProbesAdditionalCS, lyraDebugShader);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS__CCTOR_OFFSET))();
		}

		::UnityEngine::RenderTexture* PrevProbeIndirectionTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PREVPROBEINDIRECTIONTEXTURE_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* ProbeIndirectionTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PROBEINDIRECTIONTEXTURE_OFFSET))(this);
		}

		::System::Boolean get_Allocated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_GET_ALLOCATED_OFFSET))(this);
		}

		::System::Void set_Allocated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SET_ALLOCATED_OFFSET))(this, value);
		}

		::System::Boolean CheckAllocateBuffer(::UnityEngine::ComputeBuffer*& buffer, ::System::Int32 stride, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEBUFFER_OFFSET))(this, buffer, stride, count);
		}

		::System::Boolean CheckAllocateBuffer_1(::UnityEngine::ComputeBuffer*& buffer, ::System::Int32 stride, ::System::Int32 count, ::System::String* bufferName)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEBUFFER_1_OFFSET))(this, buffer, stride, count, bufferName);
		}

		::System::Boolean CheckAllocateArgsBuffer(::UnityEngine::ComputeBuffer*& buffer, ::System::Int32 stride, ::System::Int32 count, ::System::String* bufferName)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CHECKALLOCATEARGSBUFFER_OFFSET))(this, buffer, stride, count, bufferName);
		}

		::System::Void SetDebugParameters(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* shader, ::System::Int32 kernel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETDEBUGPARAMETERS_OFFSET))(this, cmd, shader, kernel);
		}

		::System::Void AllocateResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_ALLOCATERESOURCE_OFFSET))(this);
		}

		::System::Void DispatchCompute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernel, ::System::UInt32 X, ::System::UInt32 Y, ::System::UInt32 Z)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_DISPATCHCOMPUTE_OFFSET))(this, cmd, computeShader, kernel, X, Y, Z);
		}

		::System::Void UpdateProbeClipmaps(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEPROBECLIPMAPS_OFFSET))(this, camera);
		}

		::System::Void UpdateBakedLightVolume(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEBAKEDLIGHTVOLUME_OFFSET))(this, camera);
		}

		::System::Void SetVisualizeParameter(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData cameraData, ::UnityEngine::Material* debugVisualizeProbeMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETVISUALIZEPARAMETER_OFFSET))(this, cmd, cameraData, debugVisualizeProbeMaterial);
		}

		::System::Void SetLyraProbeGlobalUniforms(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETLYRAPROBEGLOBALUNIFORMS_OFFSET))(this, cmd, cameraData);
		}

		::System::Void SetCopyLyraStateParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* lyraDebugCS, ::System::Int32 copyLyraStateKernel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETCOPYLYRASTATEPARAMS_OFFSET))(this, cmd, lyraDebugCS, copyLyraStateKernel);
		}

		::System::Void UpdateVoxelLightCache(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* lyraUpdateProbeCS, ::UnityEngine::ComputeShader* lyraUpdateProbeAdditionalCS, ::UnityEngine::NAPRenderPipeline0::RenderingData renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::UnityEngine::ComputeShader*, ::UnityEngine::NAPRenderPipeline0::RenderingData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_UPDATEVOXELLIGHTCACHE_OFFSET))(this, cmd, lyraUpdateProbeCS, lyraUpdateProbeAdditionalCS, renderingData);
		}

		::System::Boolean SDFAOUseHalfRes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SDFAOUSEHALFRES_OFFSET))(this);
		}

		static ::LyraSector::LyraSectorUtils_Vector4Int GetSDFAOLowResJitterOffset(::System::Int32 FrameId)
		{
			return ((::LyraSector::LyraSectorUtils_Vector4Int(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_GETSDFAOLOWRESJITTEROFFSET_OFFSET))(FrameId);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::CameraData cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SETUP_OFFSET))(this, cameraData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void SafeReleaseAndReset(::UnityEngine::ComputeBuffer*& computeBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_SAFERELEASEANDRESET_OFFSET))(this, computeBuffer);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_CLEANUP_OFFSET))(this);
		}
	};
}
