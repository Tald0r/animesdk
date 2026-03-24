#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1742C0A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex = 29733;

	class UniversalRenderPipeline_Profiling_Pipeline : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_endFrameRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233B0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_beginFrameRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233B8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSubmit()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_endCameraRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233C8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererPreCull()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233D0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_ParticleLightOptimize()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeStackedCameraData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233E0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererExecute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeAdditionalCameraData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233F0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeLightData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x233F8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RendererSortPasses()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23400);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_WaitSRPHelper()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23408);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeShadowData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23410);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_InitializeShadowData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23418);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_setupPerFrameShaderConstants()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23420);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_FrameRenderSetups()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23428);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeLightData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23430);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_beginCameraRendering()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23438);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_getPerObjectLightFlags()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23440);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sample_RenderStack()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23448);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeRenderingData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23450);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_initializeCameraData()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_Profiling_Pipeline_TypeDefinitionIndex)->GetStaticField(0x23458);
		}
		// static const ::System::String* k_Name; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_PROFILING_PIPELINE__CCTOR_OFFSET))();
		}
	};
}
