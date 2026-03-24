#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1A3E6320)
#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1A3E63C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3E63A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A3E63E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A3E6330)
#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1A3E63D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E6300)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FinalBlitPassNativeState_TypeDefinitionIndex = 5738;

	class FinalBlitPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor& baseDesc, ::UnityEngine::Rendering::RenderTargetIdentifier& colorRTI, ::System::Boolean outputHDR)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_SETUP_OFFSET))(this, baseDesc, colorRTI, outputHDR);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
