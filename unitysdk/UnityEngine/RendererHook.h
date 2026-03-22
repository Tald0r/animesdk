#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERERHOOK_INVOKE_ONHOOKRENDERERSETENABLED_OFFSET UNITYSDK_OFFSET(0x19F40640)
#define UNITYENGINE_RENDERERHOOK_INVOKE_ONHOOKRENDERERSETNAPCB_OFFSET UNITYSDK_OFFSET(0x19F406B0)
#define UNITYENGINE_RENDERERHOOK_INVOKE_ONHOOKRENDERERSETPROPERTYBLOCKMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x19F407A0)
#define UNITYENGINE_RENDERERHOOK_INVOKE_ONHOOKRENDERERSETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x19F40730)
#define UNITYENGINE_RENDERERHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F40820)

namespace UnityEngine
{
	inline static constexpr unsigned int RendererHook_TypeDefinitionIndex = 5345;

	class RendererHook : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*>** StaticGet_onHookSetPropertyBlock()
		{
			return (::System::Action_2<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*>**)Il2CppClass::FromTypeDefinitionIndex(RendererHook_TypeDefinitionIndex)->GetStaticField(0x5620);
		}
		static ::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32>** StaticGet_onHookSetNapCB()
		{
			return (::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RendererHook_TypeDefinitionIndex)->GetStaticField(0x5628);
		}
		static ::System::Action_3<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32>** StaticGet_onHookSetPropertyBlockMaterialIndex()
		{
			return (::System::Action_3<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RendererHook_TypeDefinitionIndex)->GetStaticField(0x5630);
		}
		static ::System::Action_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet_onHookSetEnabled()
		{
			return (::System::Action_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RendererHook_TypeDefinitionIndex)->GetStaticField(0x5638);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERERHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookRendererSetEnabled(::UnityEngine::Renderer* renderer, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERERHOOK_INVOKE_ONHOOKRENDERERSETENABLED_OFFSET))(renderer, value);
		}

		static ::System::Void invoke_onHookRendererSetNapCB(::UnityEngine::Renderer* renderer, ::UnityEngine::ComputeBuffer* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERERHOOK_INVOKE_ONHOOKRENDERERSETNAPCB_OFFSET))(renderer, buffer, offset, size);
		}

		static ::System::Void invoke_onHookRendererSetPropertyBlock(::UnityEngine::Renderer* renderer, ::UnityEngine::MaterialPropertyBlock* block)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERERHOOK_INVOKE_ONHOOKRENDERERSETPROPERTYBLOCK_OFFSET))(renderer, block);
		}

		static ::System::Void invoke_onHookRendererSetPropertyBlockMaterialIndex(::UnityEngine::Renderer* renderer, ::UnityEngine::MaterialPropertyBlock* block, ::System::Int32 index)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERERHOOK_INVOKE_ONHOOKRENDERERSETPROPERTYBLOCKMATERIALINDEX_OFFSET))(renderer, block, index);
		}
	};
}
