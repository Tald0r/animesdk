#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/MaterialAvatarShaderUtil___c__DisplayClass62_0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class CutsceneMaterialShaderConfig;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ADDSKIPMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1A73A7B0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ADDSKIPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A73AAA0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ENABLEENUMKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A73D770)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_EXISTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A73D150)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1A73D1B0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISAVATARSHADER_OFFSET UNITYSDK_OFFSET(0x1A73CC80)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISOBJECTSCENESHADER_OFFSET UNITYSDK_OFFSET(0x1A73D630)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISSCENESHADER_OFFSET UNITYSDK_OFFSET(0x1A73D4F0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISSTANDARDAVATARSHADER_OFFSET UNITYSDK_OFFSET(0x1A73CF00)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISUIAVATARSHADER_OFFSET UNITYSDK_OFFSET(0x1A73D010)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_LOADMATERIALCONFIG_OFFSET UNITYSDK_OFFSET(0x1A73A350)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_MATERIALCHANGED_OFFSET UNITYSDK_OFFSET(0x1A73AD90)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_PROPERTYTOGGLED_OFFSET UNITYSDK_OFFSET(0x1A73D270)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_SETFXUNCLIPKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1A73A360)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A739AA0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINIT_62_1_OFFSET UNITYSDK_OFFSET(0x1A73CDC0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL__MATERIALCHANGED_G__ADDSHADERENABLEANDRECORDERINIT_62_0_OFFSET UNITYSDK_OFFSET(0x1A73D3D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialAvatarShaderUtil_TypeDefinitionIndex = 29135;

	class MaterialAvatarShaderUtil : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_SecondaryEmission()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x227E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_ObjectShaderNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x227E8);
		}
		static ::System::String** StaticGet_UseChanelMixer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x227F0);
		}
		static ::System::String** StaticGet_PropNameRenderType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x227F8);
		}
		static ::System::String** StaticGet_Outline()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22800);
		}
		static ::System::String** StaticGet_Transition()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22808);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_AvatarShaderNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22810);
		}
		static ::System::String** StaticGet_DitherAlpha()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22818);
		}
		static ::System::String** StaticGet_RimGlow()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22820);
		}
		static ::System::String** StaticGet_DitherAlpha2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22828);
		}
		static ::System::Reflection::MethodInfo** StaticGet_addSkipMaterialRenderer()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22830);
		}
		static ::System::Reflection::MethodInfo** StaticGet_setFxUnClipKeywords()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22838);
		}
		static ::System::String** StaticGet_BuildingBotLight()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22840);
		}
		static ::System::Reflection::MethodInfo** StaticGet_addSkipMaterial()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22848);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SceneShaderNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22850);
		}
		static ::CutsceneMaterialShaderConfig** StaticGet__cutsceneSceneMaterialShaderConfig()
		{
			return (::CutsceneMaterialShaderConfig**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22858);
		}
		static ::System::String** StaticGet_UseCustomReflection()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22860);
		}
		static ::System::String** StaticGet_Glitch()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22868);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_MatCapFXKeywordStandard()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22870);
		}
		static ::System::String** StaticGet_ClipPlane()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22878);
		}
		static ::System::String** StaticGet_AbnormalProperty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22880);
		}
		static ::System::String** StaticGet_UsePlaneClip()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22888);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ShaderSupportFeature()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22890);
		}
		static ::System::String** StaticGet_BlurAfterChar()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x22898);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_MatCapKeywordStandard()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x228A0);
		}
		static ::System::Int32* StaticGet_ShadowColorFadeByZ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75B0);
		}
		static ::System::Int32* StaticGet_HalfResSrcBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75B4);
		}
		static ::System::Int32* StaticGet_ReceiveShadows()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75B8);
		}
		static ::System::Int32* StaticGet_OverrideOutline()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75BC);
		}
		static ::System::Int32* StaticGet_VertexStretch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75C0);
		}
		static ::System::Int32* StaticGet_AlphaDstBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75C4);
		}
		static ::System::Int32* StaticGet_AlphaSrcBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75C8);
		}
		static ::System::Int32* StaticGet_HalfResAlphaSrcBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75CC);
		}
		static ::System::Int32* StaticGet_CharacterStencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75D0);
		}
		static ::System::Int32* StaticGet_Surface()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75D4);
		}
		static ::System::Int32* StaticGet_DstBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75D8);
		}
		static ::System::Int32* StaticGet_HalfResAlphaDstBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75DC);
		}
		static ::System::Int32* StaticGet_Override()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75E0);
		}
		static ::System::Int32* StaticGet_SrcBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75E4);
		}
		static ::System::Int32* StaticGet_MatCap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75E8);
		}
		static ::System::Int32* StaticGet_PropIdRenderType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75EC);
		}
		static ::System::Int32* StaticGet_MatCapFX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75F0);
		}
		static ::System::Int32* StaticGet_HalfResDstBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75F4);
		}
		static ::System::Int32* StaticGet_OverrideRimGlow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75F8);
		}
		static ::System::Int32* StaticGet_Override2Tone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x75FC);
		}
		static ::System::Int32* StaticGet_ScreenImage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x7600);
		}
		// static const ::System::String* UnclippedFXKeyword; // 0x0
		// static const ::System::String* ClippedFXKeyword; // 0x0
		// static const ::System::String* PlaneClipKeyword; // 0x0
		// static const ::System::String* KEY_RENDERTYPE_CRYSTAL; // 0x0
		// static const ::System::String* KEY_RENDERTYPE_HAIR; // 0x0
		// static const ::System::String* KEY_BDUILDING_BOT_LIGHT; // 0x0
		// static const ::System::String* KEY_BLUR_AFTER_CHAR; // 0x0
		// static const ::System::String* KEY_REFLECTION_CUBE; // 0x0
		// static const ::System::String* SceneMaterialConfigPath; // 0x0
		// static const ::System::Int32 RenderType_FaceTransparent = 0x2; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void LoadMaterialConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_LOADMATERIALCONFIG_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* SetFxUnClipKeywords(::System::String* floatKey, ::System::Single floatValue, ::UnityEngine::Material* mat)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::System::String*, ::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_SETFXUNCLIPKEYWORDS_OFFSET))(floatKey, floatValue, mat);
		}

		static ::System::Void AddSkipMaterialRenderer(::UnityEngine::Renderer* materialRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ADDSKIPMATERIALRENDERER_OFFSET))(materialRenderer);
		}

		static ::System::Void AddSkipMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ADDSKIPMATERIAL_OFFSET))(material);
		}

		static ::System::Void MaterialChanged(::UnityEngine::Renderer* materialRenderer, ::UnityEngine::Material* material, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* valueDic, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_shader_pass, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_keywords_enable)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_MATERIALCHANGED_OFFSET))(materialRenderer, material, valueDic, avatar_shader_pass, avatar_keywords_enable);
		}

		static ::System::Boolean PropertyToggled(::UnityEngine::Material* material, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* valueDic, ::System::String* prop)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_PROPERTYTOGGLED_OFFSET))(material, valueDic, prop);
		}

		static ::System::Single GetPropertyValue(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* valueDic, ::System::String* prop)
		{
			return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_GETPROPERTYVALUE_OFFSET))(valueDic, prop);
		}

		static ::System::Boolean ExistPropertyChanged(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* valueDic, ::System::String* prop)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_EXISTPROPERTYCHANGED_OFFSET))(valueDic, prop);
		}

		static ::System::Void EnableEnumKeyword(::UnityEngine::Material* material, ::System::Int32 propValue, ::Il2CppArray<::System::String*>* enumKeys, ::System::Action_2<::System::String*, ::System::Boolean>* enableAction)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ENABLEENUMKEYWORD_OFFSET))(material, propValue, enumKeys, enableAction);
		}

		static ::System::Boolean IsAvatarShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISAVATARSHADER_OFFSET))(material);
		}

		static ::System::Boolean IsStandardAvatarShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISSTANDARDAVATARSHADER_OFFSET))(material);
		}

		static ::System::Boolean IsUIAvatarShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISUIAVATARSHADER_OFFSET))(material);
		}

		static ::System::Boolean IsSceneShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISSCENESHADER_OFFSET))(material);
		}

		static ::System::Boolean IsObjectSceneShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISOBJECTSCENESHADER_OFFSET))(material);
		}

		static ::System::Void _MaterialChanged_g__AddShaderEnableAndRecorderInit_62_0(::System::String* key, ::System::Boolean value, ::MoleMole::Timeline::MaterialAvatarShaderUtil___c__DisplayClass62_0& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::MoleMole::Timeline::MaterialAvatarShaderUtil___c__DisplayClass62_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL__MATERIALCHANGED_G__ADDSHADERENABLEANDRECORDERINIT_62_0_OFFSET))(key, value, a3);
		}

		static ::System::Void _MaterialChanged_g__AddKeywordsEnableAndRecorderInit_62_1(::System::String* key, ::System::Boolean value, ::MoleMole::Timeline::MaterialAvatarShaderUtil___c__DisplayClass62_0& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::MoleMole::Timeline::MaterialAvatarShaderUtil___c__DisplayClass62_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINIT_62_1_OFFSET))(key, value, a3);
		}
	};
}
