#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x187D0740)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x187D0730)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex = 28438;

	class TextureSheetRenderer_LocalShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__FxOutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B20);
		}
		static ::System::Int32* StaticGet__FxOverrideColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B24);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B28);
		}
		static ::System::Int32* StaticGet__FxBackLightTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B2C);
		}
		static ::System::Int32* StaticGet__FxBackLightTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B30);
		}
		static ::System::Int32* StaticGet__FxBackLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B34);
		}
		static ::System::Int32* StaticGet__TextureSheetPrams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B38);
		}
		static ::System::Int32* StaticGet__FxOverrideTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B3C);
		}
		static ::System::Int32* StaticGet__FxOverrideTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B40);
		}
		static ::System::Int32* StaticGet__FxBackLightTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B44);
		}
		static ::System::Int32* StaticGet__DesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B48);
		}
		static ::System::Int32* StaticGet__UseDesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B4C);
		}
		static ::System::Int32* StaticGet__FxBackLightRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B50);
		}
		static ::System::Int32* StaticGet__ImageParamas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B54);
		}
		static ::System::Int32* StaticGet__FxOutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B58);
		}
		static ::System::Int32* StaticGet__FxOverrideTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B5C);
		}
		static ::System::Int32* StaticGet__LocalVectorArrayParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B60);
		}
		static ::System::Int32* StaticGet__FxOverrideTexColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B64);
		}
		static ::System::Int32* StaticGet__FxDesaturate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CCTOR_OFFSET))();
		}
	};
}
