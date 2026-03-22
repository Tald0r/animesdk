#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EDynamicCacheMemoryPolicy.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORLOADACTIONS_OFFSET UNITYSDK_OFFSET(0x746650)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORRENDERTARGETS_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORSTOREACTIONS_OFFSET UNITYSDK_OFFSET(0x559750)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHLOADACTION_OFFSET UNITYSDK_OFFSET(0x7A76D0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x50FF30)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHSTOREACTION_OFFSET UNITYSDK_OFFSET(0x7A76E0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DYNAMICCACHECOUNT_OFFSET UNITYSDK_OFFSET(0x7A7660)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DYNAMICCACHERTS_OFFSET UNITYSDK_OFFSET(0x2F7FC0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DYNAMICMEMORYPOLICY_OFFSET UNITYSDK_OFFSET(0x379DB0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORLOADACTIONS_OFFSET UNITYSDK_OFFSET(0x8B7610)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORRENDERTARGETS_OFFSET UNITYSDK_OFFSET(0x2C3980)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORSTOREACTIONS_OFFSET UNITYSDK_OFFSET(0x7A76C0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHLOADACTION_OFFSET UNITYSDK_OFFSET(0x7A63E0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x8B75F0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHSTOREACTION_OFFSET UNITYSDK_OFFSET(0x7A76F0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DYNAMICCACHECOUNT_OFFSET UNITYSDK_OFFSET(0x7A7670)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DYNAMICCACHERTS_OFFSET UNITYSDK_OFFSET(0x2F9000)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DYNAMICMEMORYPOLICY_OFFSET UNITYSDK_OFFSET(0x379D80)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x8B7620)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetBinding_TypeDefinitionIndex = 6167;

	struct alignas(8) RenderTargetBinding
	{
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_ColorRenderTargets; // 0x10
		::UnityEngine::Rendering::RenderTargetIdentifier m_DepthRenderTarget; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_DynamicCacheRTs; // 0x40
		::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* m_DynamicMemoryPolicy; // 0x48
		::System::Int32 m_DynamicCacheCount; // 0x50
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* m_ColorLoadActions; // 0x58
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* m_ColorStoreActions; // 0x60
		::UnityEngine::Rendering::RenderBufferLoadAction m_DepthLoadAction; // 0x68
		::UnityEngine::Rendering::RenderBufferStoreAction m_DepthStoreAction; // 0x6C

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorRenderTargets, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, ::UnityEngine::Rendering::RenderTargetIdentifier depthRenderTarget, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING__CTOR_OFFSET))(this, colorRenderTargets, colorLoadActions, colorStoreActions, depthRenderTarget, depthLoadAction, depthStoreAction);
		}

		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* get_colorRenderTargets()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORRENDERTARGETS_OFFSET))(this);
		}

		::System::Void set_colorRenderTargets(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORRENDERTARGETS_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier get_depthRenderTarget()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHRENDERTARGET_OFFSET))(this);
		}

		::System::Void set_depthRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHRENDERTARGET_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* get_colorLoadActions()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORLOADACTIONS_OFFSET))(this);
		}

		::System::Void set_colorLoadActions(::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORLOADACTIONS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* get_colorStoreActions()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORSTOREACTIONS_OFFSET))(this);
		}

		::System::Void set_colorStoreActions(::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORSTOREACTIONS_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::RenderBufferLoadAction get_depthLoadAction()
		{
			return ((::UnityEngine::Rendering::RenderBufferLoadAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHLOADACTION_OFFSET))(this);
		}

		::System::Void set_depthLoadAction(::UnityEngine::Rendering::RenderBufferLoadAction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderBufferLoadAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHLOADACTION_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::RenderBufferStoreAction get_depthStoreAction()
		{
			return ((::UnityEngine::Rendering::RenderBufferStoreAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHSTOREACTION_OFFSET))(this);
		}

		::System::Void set_depthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHSTOREACTION_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* get_dynamicCacheRTs()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DYNAMICCACHERTS_OFFSET))(this);
		}

		::System::Void set_dynamicCacheRTs(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DYNAMICCACHERTS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* get_dynamicMemoryPolicy()
		{
			return ((::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DYNAMICMEMORYPOLICY_OFFSET))(this);
		}

		::System::Void set_dynamicMemoryPolicy(::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::EDynamicCacheMemoryPolicy>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DYNAMICMEMORYPOLICY_OFFSET))(this, value);
		}

		::System::Int32 get_dynamicCacheCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DYNAMICCACHECOUNT_OFFSET))(this);
		}

		::System::Void set_dynamicCacheCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DYNAMICCACHECOUNT_OFFSET))(this, value);
		}
	};
}
