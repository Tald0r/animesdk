#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERPASSBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F15020)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex = 29695;

	class ScriptableRenderer_RenderPassBlock : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_AfterRendering()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex)->GetStaticField(0x6630);
		}
		static ::System::Int32* StaticGet_BeforeRendering()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex)->GetStaticField(0x6634);
		}
		static ::System::Int32* StaticGet_MainRenderingTransparent()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex)->GetStaticField(0x6638);
		}
		static ::System::Int32* StaticGet_MainRenderingOpaque()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_RenderPassBlock_TypeDefinitionIndex)->GetStaticField(0x663C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERPASSBLOCK__CCTOR_OFFSET))();
		}
	};
}
