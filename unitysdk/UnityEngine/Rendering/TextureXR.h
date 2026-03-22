#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"

namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x18441AD0)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x18441E70)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATETEXTURE2DARRAYFROMTEXTURE2D_OFFSET UNITYSDK_OFFSET(0x18442210)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x18441250)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x18441110)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKUINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x18440E90)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETCLEARTEXTURE_OFFSET UNITYSDK_OFFSET(0x18440FD0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETMAGENTATEXTURE_OFFSET UNITYSDK_OFFSET(0x184277C0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETWHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x184412D0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x18429000)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_SLICES_OFFSET UNITYSDK_OFFSET(0x18440DD0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_USETEXARRAY_OFFSET UNITYSDK_OFFSET(0x18440E30)
#define UNITYENGINE_RENDERING_TEXTUREXR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18441410)
#define UNITYENGINE_RENDERING_TEXTUREXR_SET_MAXVIEWS_OFFSET UNITYSDK_OFFSET(0x18440D70)
#define UNITYENGINE_RENDERING_TEXTUREXR__CCTOR_OFFSET UNITYSDK_OFFSET(0x184424A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureXR_TypeDefinitionIndex = 9571;

	class TextureXR : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture2DArray** StaticGet_m_MagentaTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8A80);
		}
		static ::UnityEngine::Texture2D** StaticGet_m_ClearTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8A88);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_BlackUIntTexture2DArrayRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8A90);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_BlackTextureRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8A98);
		}
		static ::UnityEngine::Texture2D** StaticGet_m_MagentaTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AA0);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_m_WhiteTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AA8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_MagentaTexture2DArrayRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AB0);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_m_ClearTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AB8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_BlackUIntTextureRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AC0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_ClearTextureRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AC8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_WhiteTextureRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AD0);
		}
		static ::UnityEngine::Texture2DArray** StaticGet_m_BlackTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AD8);
		}
		static ::UnityEngine::Texture** StaticGet_m_BlackUIntTexture2DArray()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AE0);
		}
		static ::UnityEngine::Texture** StaticGet_m_BlackUIntTexture()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AE8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_WhiteTexture2DArrayRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AF0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_BlackTexture2DArrayRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8AF8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_ClearTexture2DArrayRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8B00);
		}
		static ::UnityEngine::NAPRenderPipeline0::RTHandle** StaticGet_m_MagentaTextureRTH()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandle**)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x8B08);
		}
		static ::System::Int32* StaticGet_m_MaxViews()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureXR_TypeDefinitionIndex)->GetStaticField(0x4360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR__CCTOR_OFFSET))();
		}

		static ::System::Void set_maxViews(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_SET_MAXVIEWS_OFFSET))(value);
		}

		static ::System::Int32 get_slices()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_SLICES_OFFSET))();
		}

		static ::System::Boolean get_useTexArray()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_USETEXARRAY_OFFSET))();
		}

		static ::UnityEngine::Rendering::TextureDimension get_dimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_DIMENSION_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* GetBlackUIntTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKUINTTEXTURE_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* GetClearTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETCLEARTEXTURE_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* GetMagentaTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETMAGENTATEXTURE_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* GetBlackTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* GetBlackTextureArray()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTUREARRAY_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* GetWhiteTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETWHITETEXTURE_OFFSET))();
		}

		static ::System::Void Initialize(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_INITIALIZE_OFFSET))(cmd, clearR32_UIntShader);
		}

		static ::UnityEngine::Texture2DArray* CreateTexture2DArrayFromTexture2D(::UnityEngine::Texture2D* source, ::System::String* name)
		{
			return ((::UnityEngine::Texture2DArray*(*)(::UnityEngine::Texture2D*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATETEXTURE2DARRAYFROMTEXTURE2D_OFFSET))(source, name);
		}

		static ::UnityEngine::Texture* CreateBlackUIntTextureArray(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTUREARRAY_OFFSET))(cmd, clearR32_UIntShader);
		}

		static ::UnityEngine::Texture* CreateBlackUintTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTURE_OFFSET))(cmd, clearR32_UIntShader);
		}
	};
}
