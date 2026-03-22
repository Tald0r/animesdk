#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18B3EFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x18B3FD10)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_GET_MAT_OFFSET UNITYSDK_OFFSET(0x18B3EEA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x18B3EF80)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B3FDC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3EED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x18B3FE40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BlendUIColorPass_TypeDefinitionIndex = 28707;

	class BlendUIColorPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet__DLSSColorOut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6600);
		}
		static ::System::Int32* StaticGet__OffScreenUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6604);
		}
		static ::System::Int32* StaticGet__BlendedUICameraColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x6608);
		}
		static ::System::Int32* StaticGet__SceneColorAfterPostProcess()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlendUIColorPass_TypeDefinitionIndex)->GetStaticField(0x660C);
		}
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* get_mat()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_GET_MAT_OFFSET))();
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle cameraTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_SETUP_OFFSET))(this, cameraTarget);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDUICOLORPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
