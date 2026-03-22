#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/RuntimePostLight_PostLightShape.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/RuntimePostLight_PostLightType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_BAKEPOSTRAMPTEXTURESINGLE_OFFSET UNITYSDK_OFFSET(0x19B248E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_GET_LIGHTCOLORRAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x19B24660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19B254D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_REFRESHMATPROPERTY_OFFSET UNITYSDK_OFFSET(0x19B24F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_SETMATERIALBYTYPE_OFFSET UNITYSDK_OFFSET(0x19B24620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_START_OFFSET UNITYSDK_OFFSET(0x19B24670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_UPDATE_OFFSET UNITYSDK_OFFSET(0x19B256B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B25810)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B25770)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RuntimePostLight_TypeDefinitionIndex = 28882;

	class RuntimePostLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__PostLightParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x6B00);
		}
		static ::System::Int32* StaticGet__PostLightClipMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x6B04);
		}
		static ::System::Int32* StaticGet__PostLightCookieTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x6B08);
		}
		static ::System::Int32* StaticGet__SpotParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x6B0C);
		}
		static ::System::Int32* StaticGet__PostLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x6B10);
		}
		static ::System::Int32* StaticGet__PostLightClipMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x6B14);
		}
		static ::System::Int32* StaticGet__PostLightRampTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x6B18);
		}
		static ::System::Int32* StaticGet__SpotLightAtten()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x6B1C);
		}
		::UnityEngine::Rendering::Universal::Internal::RuntimePostLight_PostLightShape m_Shape; // 0x18
		::UnityEngine::Rendering::Universal::Internal::RuntimePostLight_PostLightType m_Type; // 0x1C
		::UnityEngine::Gradient* LightColorRamp; // 0x20
		::System::Single m_LightIntensity; // 0x28
		::UnityEngine::AnimationCurve* LightIntensityCurve; // 0x30
		::UnityEngine::Texture2D* m_LightColorRampTexture; // 0x38
		::System::Single m_LightColorRampRampID; // 0x40
		::System::Boolean UsedInTimeline; // 0x44
		::UnityEngine::Texture2D* m_LightCookieTexture; // 0x48
		::UnityEngine::Vector2 m_ClipRangeX; // 0x50
		::UnityEngine::Vector2 m_ClipRangeY; // 0x58
		::UnityEngine::Vector2 m_ClipRangeZ; // 0x60
		::System::Boolean SpotlightAttenuation; // 0x68
		::UnityEngine::Vector2 SpotAngle; // 0x6C
		::System::Single SoftRange; // 0x74
		::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x78
		::UnityEngine::Material* m_Material; // 0x80
		::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT__CCTOR_OFFSET))();
		}

		::System::Void SetMaterialByType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_SETMATERIALBYTYPE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_LightColorRampTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_GET_LIGHTCOLORRAMPTEXTURE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshMatProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_REFRESHMATPROPERTY_OFFSET))(this);
		}

		::System::Void BakePostRampTextureSingle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_BAKEPOSTRAMPTEXTURESINGLE_OFFSET))(this);
		}
	};
}
