#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALDISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x19F37010)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x19F36FA0)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETCOLOR_OFFSET UNITYSDK_OFFSET(0x19F36A80)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x19F36D30)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETFLOAT_OFFSET UNITYSDK_OFFSET(0x19F36A00)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETMATRIX_OFFSET UNITYSDK_OFFSET(0x19F36C90)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x19F36E40)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x19F36F30)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETSHADERPASSENABLE_OFFSET UNITYSDK_OFFSET(0x19F36EB0)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETSHADER_OFFSET UNITYSDK_OFFSET(0x19F37080)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETTEXTURESCALEANDOFFSET_OFFSET UNITYSDK_OFFSET(0x19F36C00)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETTEXTURE_OFFSET UNITYSDK_OFFSET(0x19F36B80)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x19F36DC0)
#define UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETVECTOR_OFFSET UNITYSDK_OFFSET(0x19F36B00)
#define UNITYENGINE_MATERIALHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F370F0)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialHook_TypeDefinitionIndex = 5342;

	class MaterialHook : public ::System::Object
	{
	public:
		static ::System::Action_4<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Vector2>** StaticGet_onHookSetTextureScaleAndOffset()
		{
			return (::System::Action_4<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x5580);
		}
		static ::System::Action_3<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Matrix4x4>** StaticGet_onHookSetMatrix()
		{
			return (::System::Action_3<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x5588);
		}
		static ::System::Action_3<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*>** StaticGet_onHookSetTexture()
		{
			return (::System::Action_3<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x5590);
		}
		static ::System::Action_2<::UnityEngine::Material*, ::System::String*>** StaticGet_onHookEnableKeyword()
		{
			return (::System::Action_2<::UnityEngine::Material*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x5598);
		}
		static ::System::Action_2<::UnityEngine::Material*, ::System::Int32>** StaticGet_onHookSetRenderQueue()
		{
			return (::System::Action_2<::UnityEngine::Material*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55A0);
		}
		static ::System::Action_3<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color>** StaticGet_onHookSetColor()
		{
			return (::System::Action_3<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55A8);
		}
		static ::System::Action_3<::UnityEngine::Material*, ::System::String*, ::System::Single>** StaticGet_onHookSetFloat()
		{
			return (::System::Action_3<::UnityEngine::Material*, ::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55B0);
		}
		static ::System::Action_4<::UnityEngine::Material*, ::System::String*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Vector2>** StaticGet_onHookSetConstantBuffer()
		{
			return (::System::Action_4<::UnityEngine::Material*, ::System::String*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55B8);
		}
		static ::System::Action_2<::UnityEngine::Material*, ::Il2CppArray<::System::String*>*>** StaticGet_onHookSetShaderKeywords()
		{
			return (::System::Action_2<::UnityEngine::Material*, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55C0);
		}
		static ::System::Action_3<::UnityEngine::Material*, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*>** StaticGet_onHookSetVectorArray()
		{
			return (::System::Action_3<::UnityEngine::Material*, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55C8);
		}
		static ::System::Action_2<::UnityEngine::Material*, ::UnityEngine::Shader*>** StaticGet_onHookSetShader()
		{
			return (::System::Action_2<::UnityEngine::Material*, ::UnityEngine::Shader*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55D0);
		}
		static ::System::Action_3<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4>** StaticGet_onHookSetVector()
		{
			return (::System::Action_3<::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55D8);
		}
		static ::System::Action_3<::UnityEngine::Material*, ::System::String*, ::System::Boolean>** StaticGet_onHookSetShaderPassEnable()
		{
			return (::System::Action_3<::UnityEngine::Material*, ::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55E0);
		}
		static ::System::Action_2<::UnityEngine::Material*, ::System::String*>** StaticGet_onHookDisableKeyword()
		{
			return (::System::Action_2<::UnityEngine::Material*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialHook_TypeDefinitionIndex)->GetStaticField(0x55E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookMaterialSetFloat(::UnityEngine::Material* mat, ::System::String* propName, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETFLOAT_OFFSET))(mat, propName, value);
		}

		static ::System::Void invoke_onHookMaterialSetColor(::UnityEngine::Material* mat, ::System::String* propName, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETCOLOR_OFFSET))(mat, propName, color);
		}

		static ::System::Void invoke_onHookMaterialSetVector(::UnityEngine::Material* mat, ::System::String* propName, ::UnityEngine::Vector4 vec)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETVECTOR_OFFSET))(mat, propName, vec);
		}

		static ::System::Void invoke_onHookMaterialSetTexture(::UnityEngine::Material* mat, ::System::String* propName, ::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETTEXTURE_OFFSET))(mat, propName, tex);
		}

		static ::System::Void invoke_onHookMaterialSetTextureScaleAndOffset(::UnityEngine::Material* mat, ::System::String* propName, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETTEXTURESCALEANDOFFSET_OFFSET))(mat, propName, scale, offset);
		}

		static ::System::Void invoke_onHookMaterialSetMatrix(::UnityEngine::Material* mat, ::System::String* propName, ::UnityEngine::Matrix4x4 matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETMATRIX_OFFSET))(mat, propName, matrix);
		}

		static ::System::Void invoke_onHookMaterialSetConstantBuffer(::UnityEngine::Material* mat, ::System::String* propName, ::UnityEngine::ComputeBuffer* buf, ::UnityEngine::Vector2 offsetAndAize)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETCONSTANTBUFFER_OFFSET))(mat, propName, buf, offsetAndAize);
		}

		static ::System::Void invoke_onHookMaterialSetVectorArray(::UnityEngine::Material* mat, ::System::String* propName, ::Il2CppArray<::UnityEngine::Vector4>* v)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETVECTORARRAY_OFFSET))(mat, propName, v);
		}

		static ::System::Void invoke_onHookMaterialSetRenderQueue(::UnityEngine::Material* mat, ::System::Int32 v)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETRENDERQUEUE_OFFSET))(mat, v);
		}

		static ::System::Void invoke_onHookMaterialSetShaderPassEnable(::UnityEngine::Material* mat, ::System::String* pass, ::System::Boolean v)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETSHADERPASSENABLE_OFFSET))(mat, pass, v);
		}

		static ::System::Void invoke_onHookMaterialSetShaderKeywords(::UnityEngine::Material* mat, ::Il2CppArray<::System::String*>* v)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETSHADERKEYWORDS_OFFSET))(mat, v);
		}

		static ::System::Void invoke_onHookMaterialEnableKeyword(::UnityEngine::Material* mat, ::System::String* keyword)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALENABLEKEYWORD_OFFSET))(mat, keyword);
		}

		static ::System::Void invoke_onHookMaterialDisableKeyword(::UnityEngine::Material* mat, ::System::String* keyword)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALDISABLEKEYWORD_OFFSET))(mat, keyword);
		}

		static ::System::Void invoke_onHookMaterialSetShader(::UnityEngine::Material* mat, ::UnityEngine::Shader* shader)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALHOOK_INVOKE_ONHOOKMATERIALSETSHADER_OFFSET))(mat, shader);
		}
	};
}
