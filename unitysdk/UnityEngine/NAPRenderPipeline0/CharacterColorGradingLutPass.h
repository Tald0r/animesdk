#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CharacterColorGradingParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19BC5E20)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_GENERATECOLORGRADINGLUTFORCHARACTER_OFFSET UNITYSDK_OFFSET(0x19BC6280)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19BC5CB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC5CF0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CharacterColorGradingLutPass_TypeDefinitionIndex = 5810;

	class CharacterColorGradingLutPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass** StaticGet__instance_k__BackingField()
		{
			return (::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass**)Il2CppClass::FromTypeDefinitionIndex(CharacterColorGradingLutPass_TypeDefinitionIndex)->GetStaticField(0x5310);
		}
		::System::String* k_ProfilerTag; // 0xA8
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_HdrLutFormat; // 0xB0
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_LdrLutFormat; // 0xB4
		::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams m_CharacterColorGradingParams; // 0xB8

		::System::Void _ctor(::System::String* profileTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS__CTOR_OFFSET))(this, profileTag, renderPassEventConfig);
		}

		static ::System::Void set_instance(::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass* value)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void GenerateColorGradingLutForCharacter(::UnityEngine::Rendering::ScriptableRenderContext& ctx, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 lutWidth, ::System::Int32 lutHeight, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams& charColorCorrection, ::System::Boolean hdr, ::System::Boolean renderTargetReady)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_GENERATECOLORGRADINGLUTFORCHARACTER_OFFSET))(ctx, cmd, lutWidth, lutHeight, format, charColorCorrection, hdr, renderTargetReady);
		}
	};
}
