#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderStandardSpecular_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1B2CF0C0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B2D0420)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1B2CF7E0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B2CF130)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1B2CF630)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2CFD00)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2D0D20)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D0BE0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardSpecular_TypeDefinitionIndex = 83286;

	class TextureBlenderStandardSpecular : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderStandardSpecular_TypeDefinitionIndex)->GetStaticField(0x11B30);
		}
		// static const ::System::Single m_generatedAlphaCutoff; // 0x0
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::UnityEngine::Color m_notGeneratingAtlasDefaultSpecularColor; // 0x18
		::UnityEngine::Color m_generatingTintedAtlaColor; // 0x28
		::System::Single m_alphaCutoff; // 0x38
		::DigitalOpus::MB::Core::TextureBlenderStandardSpecular_Prop propertyToDo; // 0x3C
		::UnityEngine::Color m_specColor; // 0x40
		::System::Single m_bumpScale; // 0x50
		::System::Single m_generatingTintedAtlaBumpScale; // 0x54
		::System::Single m_generatingTintedAtlaGlossiness; // 0x58
		::System::Boolean m_shaderDoesEmission; // 0x5C
		::System::Boolean m_hasSpecGlossMap; // 0x5D
		::System::Boolean m_doScaleAlphaCutoff; // 0x5E
		::UnityEngine::Color m_emissionColor; // 0x60
		::System::Single m_SpecGlossMapScale; // 0x70
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x74
		::System::Single m_notGeneratingAtlasDefaultGlossiness; // 0x84
		::System::Single m_glossiness; // 0x88
		::UnityEngine::Color m_generatingTintedAtlaEmission; // 0x8C
		::UnityEngine::Color m_tintColor; // 0x9C
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0xAC
		::System::Single m_generatingTintedAtlaSpecGlossMapScale; // 0xBC
		::UnityEngine::Color m_generatingTintedAtlaSpecular; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR__CCTOR_OFFSET))();
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDSPECULAR_GETCOLORIFNOTEXTURE_OFFSET))(this, mat, texPropertyName);
		}
	};
}
