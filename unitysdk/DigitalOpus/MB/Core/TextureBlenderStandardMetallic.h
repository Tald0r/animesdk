#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderStandardMetallic_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1A9460B0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A947390)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1A9467C0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A946130)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1A946600)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A946CA0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A947C40)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A947B10)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardMetallic_TypeDefinitionIndex = 81241;

	class TextureBlenderStandardMetallic : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderStandardMetallic_TypeDefinitionIndex)->GetStaticField(0x119E0);
		}
		// static const ::System::Single m_generatedAlphaCutoff; // 0x0
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::System::Single m_generatingTintedAtlasBumpScale; // 0x18
		::System::Single m_glossiness; // 0x1C
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0x20
		::System::Single m_alphaCutoff; // 0x24
		::UnityEngine::Color m_emissionColor; // 0x28
		::System::Single m_glossMapScale; // 0x38
		::System::Single m_bumpScale; // 0x3C
		::System::Single m_generatingTintedAtlasGlossiness; // 0x40
		::System::Single m_generatingTintedAtlasMetallic; // 0x44
		::UnityEngine::Color m_generatingTintedAtlasEmission; // 0x48
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x58
		::System::Single m_notGeneratingAtlasDefaultGlossiness; // 0x68
		::System::Boolean m_hasMetallicGlossMap; // 0x6C
		::System::Boolean m_doScaleAlphaCutoff; // 0x6D
		::System::Boolean m_shaderDoesEmission; // 0x6E
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x70
		::UnityEngine::Color m_tintColor; // 0x80
		::UnityEngine::Color m_generatingTintedAtlasColor; // 0x90
		::System::Single m_generatingTintedAtlasGlossMapScale; // 0xA0
		::System::Single m_metallic; // 0xA4
		::DigitalOpus::MB::Core::TextureBlenderStandardMetallic_Prop propertyToDo; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC__CCTOR_OFFSET))();
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_GETCOLORIFNOTEXTURE_OFFSET))(this, mat, texPropertyName);
		}
	};
}
