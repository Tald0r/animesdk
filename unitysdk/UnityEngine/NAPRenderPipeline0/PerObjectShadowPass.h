#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DirtyCache_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18381F40)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x183844C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18384570)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x18381EB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x18385070)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerObjectShadowPass_TypeDefinitionIndex = 28310;

	class PerObjectShadowPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckMaterialNeedDraw()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x21770);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetRenderTarget()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x21778);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetPerEntityVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x21780);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ResetViewport()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x21788);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckIsMaterialAlive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x21790);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetGlobalVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x21798);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckRendererMaterialAndDraw()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217A0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_dummyUAVData()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217A8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ResetGlobalVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217B0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckRendererNeedDraw()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217B8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetSubMeshCount()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217C0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckMaterialNeedDrawAndDrawRenderer()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217C8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetIPerObjectShadowRenderer()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217D0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetCachedSharedMaterials()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217D8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CreateBuffer()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217E0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckIsValid()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217E8);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_dummyUAV()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217F0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetViewport()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x217F8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CommandDrawRenderer()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x21800);
		}
		static ::UnityEngine::NAPRenderPipeline0::DirtyCache_1<::System::Single>* StaticGet_depthBiasCache()
		{
			return (::UnityEngine::NAPRenderPipeline0::DirtyCache_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x60A0);
		}
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profilingSampler; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent renderPassEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CTOR_OFFSET))(this, renderPassEvent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
