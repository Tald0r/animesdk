#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define DRAWSKYCLOUDPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19B1BFC0)
#define DRAWSKYCLOUDPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x19B1C790)
#define DRAWSKYCLOUDPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1BEE0)
#define DRAWSKYCLOUDPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x19B1C7E0)

inline static constexpr unsigned int DrawSkyCloudPass_TypeDefinitionIndex = 28148;

class DrawSkyCloudPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	// static const ::System::String* k_ProfilerTag; // 0x0
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
	::UnityEngine::Rendering::FilteringSettings m_FilterSettingsForOpaqueAfterSkyCloud; // 0xB0

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS__CTOR_OFFSET))(this, evt);
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}

	::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS_FRAMECLEANUP_OFFSET))(this, cmd);
	}

	::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
	}
};
