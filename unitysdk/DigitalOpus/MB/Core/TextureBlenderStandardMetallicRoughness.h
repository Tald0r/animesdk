#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderStandardMetallicRoughness_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1A32AD70)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A32BFC0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1A32B3F0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A32ADE0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1A32B290)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A32B930)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A32C940)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32C820)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardMetallicRoughness_TypeDefinitionIndex = 83284;

	class TextureBlenderStandardMetallicRoughness : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderStandardMetallicRoughness_TypeDefinitionIndex)->GetStaticField(0x11B10);
		}
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x18
		::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness_Prop propertyToDo; // 0x28
		::System::Single m_metallic; // 0x2C
		::System::Boolean m_hasMetallicGlossMap; // 0x30
		::System::Boolean m_shaderDoesEmission; // 0x31
		::System::Boolean m_hasSpecGlossMap; // 0x32
		::UnityEngine::Color m_emissionColor; // 0x34
		::UnityEngine::Color m_generatingTintedAtlasEmission; // 0x44
		::UnityEngine::Color m_generatingTintedAtlasColor; // 0x54
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x64
		::System::Single m_generatingTintedAtlasMetallic; // 0x74
		::UnityEngine::Color m_tintColor; // 0x78
		::System::Single m_roughness; // 0x88
		::System::Single m_generatingTintedAtlasRoughness; // 0x8C
		::System::Single m_generatingTintedAtlasBumpScale; // 0x90
		::System::Single m_notGeneratingAtlasDefaultGlossiness; // 0x94
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0x98
		::System::Single m_bumpScale; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CCTOR_OFFSET))();
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_GETCOLORIFNOTEXTURE_OFFSET))(this, mat, texPropertyName);
		}
	};
}
