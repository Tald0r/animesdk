#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderStandardMetallic_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1AF26CC0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AF27FA0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1AF273C0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AF26D40)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1AF27210)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AF278B0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF28850)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF28720)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardMetallic_TypeDefinitionIndex = 83282;

	class TextureBlenderStandardMetallic : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderStandardMetallic_TypeDefinitionIndex)->GetStaticField(0x11AF0);
		}
		// static const ::System::Single m_generatedAlphaCutoff; // 0x0
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::System::Single m_generatingTintedAtlasGlossMapScale; // 0x18
		::System::Single m_glossMapScale; // 0x1C
		::UnityEngine::Color m_tintColor; // 0x20
		::System::Single m_generatingTintedAtlasGlossiness; // 0x30
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x34
		::System::Single m_generatingTintedAtlasBumpScale; // 0x44
		::UnityEngine::Color m_emissionColor; // 0x48
		::System::Single m_glossiness; // 0x58
		::System::Single m_bumpScale; // 0x5C
		::UnityEngine::Color m_generatingTintedAtlasEmission; // 0x60
		::System::Single m_metallic; // 0x70
		::System::Single m_alphaCutoff; // 0x74
		::System::Boolean m_shaderDoesEmission; // 0x78
		::System::Boolean m_doScaleAlphaCutoff; // 0x79
		::System::Boolean m_hasMetallicGlossMap; // 0x7A
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x7C
		::UnityEngine::Color m_generatingTintedAtlasColor; // 0x8C
		::DigitalOpus::MB::Core::TextureBlenderStandardMetallic_Prop propertyToDo; // 0x9C
		::System::Single m_notGeneratingAtlasDefaultGlossiness; // 0xA0
		::System::Single m_generatingTintedAtlasMetallic; // 0xA4
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0xA8

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
