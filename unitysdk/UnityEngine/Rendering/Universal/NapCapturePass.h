#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_DELAYRELEASECAPTURESOURCE_OFFSET UNITYSDK_OFFSET(0x19FB5DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19FB5640)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_ISCAPTURESOURCE_OFFSET UNITYSDK_OFFSET(0x19FB5D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_SETNEXTCAPTURESOURCE_OFFSET UNITYSDK_OFFSET(0x19FB5C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x19FB55E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB5570)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCapturePass_TypeDefinitionIndex = 28728;

	class NapCapturePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_m_CaptureSource()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(NapCapturePass_TypeDefinitionIndex)->GetStaticField(0x7010);
		}
		static ::System::Boolean* StaticGet_m_ReleaseAfterCapture()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapCapturePass_TypeDefinitionIndex)->GetStaticField(0x7038);
		}
		static ::System::Boolean* StaticGet_m_ReplaceCaptureSource()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapCapturePass_TypeDefinitionIndex)->GetStaticField(0x7039);
		}
		static ::System::Int32* StaticGet_m_CaptureSourceID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapCapturePass_TypeDefinitionIndex)->GetStaticField(0x703C);
		}
		::System::String* profilerTag; // 0xA8
		::System::Int32 captureIndex; // 0xB0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraDepthHandle; // 0xB4
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraColorHandle; // 0xB8

		::System::Void _ctor(::System::String* profilerTag, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent renderPassEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS__CTOR_OFFSET))(this, profilerTag, renderPassEvent);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle colorHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle depthHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_SETUP_OFFSET))(this, colorHandle, depthHandle);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void SetNextCaptureSource(::UnityEngine::Rendering::RenderTargetIdentifier renderTextureID)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_SETNEXTCAPTURESOURCE_OFFSET))(renderTextureID);
		}

		static ::System::Boolean IsCaptureSource(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_ISCAPTURESOURCE_OFFSET))(id);
		}

		static ::System::Void DelayReleaseCaptureSource(::System::Int32 id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREPASS_DELAYRELEASECAPTURESOURCE_OFFSET))(id);
		}
	};
}
