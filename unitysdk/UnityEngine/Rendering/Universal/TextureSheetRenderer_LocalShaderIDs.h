#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D2F590)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_LOCALSHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x18D2F580)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex = 29381;

	class TextureSheetRenderer_LocalShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__FxBackLightTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7270);
		}
		static ::System::Int32* StaticGet__FxBackLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7274);
		}
		static ::System::Int32* StaticGet__FxBackLightTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7278);
		}
		static ::System::Int32* StaticGet__FxBackLightTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x727C);
		}
		static ::System::Int32* StaticGet__FxBackLightRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7280);
		}
		static ::System::Int32* StaticGet__FxOverrideTexColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7284);
		}
		static ::System::Int32* StaticGet__FxOverrideTexUVSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7288);
		}
		static ::System::Int32* StaticGet__FxDesaturate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x728C);
		}
		static ::System::Int32* StaticGet__UseDesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7290);
		}
		static ::System::Int32* StaticGet__FxOutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7294);
		}
		static ::System::Int32* StaticGet__ImageParamas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7298);
		}
		static ::System::Int32* StaticGet__FxOverrideColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x729C);
		}
		static ::System::Int32* StaticGet__FxOverrideTexScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x72A0);
		}
		static ::System::Int32* StaticGet__LocalVectorArrayParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x72A4);
		}
		static ::System::Int32* StaticGet__DesaturateMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x72A8);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x72AC);
		}
		static ::System::Int32* StaticGet__FxOutlineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x72B0);
		}
		static ::System::Int32* StaticGet__TextureSheetPrams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x72B4);
		}
		static ::System::Int32* StaticGet__FxOverrideTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_LocalShaderIDs_TypeDefinitionIndex)->GetStaticField(0x72B8);
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
