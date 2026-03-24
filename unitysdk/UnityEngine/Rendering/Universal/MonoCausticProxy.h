#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_CLEARPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x18D2CED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18D2C530)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x18D2C650)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x18D2C600)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x18D2CF30)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_REFRESHMATRIX_OFFSET UNITYSDK_OFFSET(0x18D2C6D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D2CFC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x18D2CF80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoCausticProxy_TypeDefinitionIndex = 29344;

	class MonoCausticProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__EnableYFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7560);
		}
		static ::System::Int32* StaticGet__FadeParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7564);
		}
		static ::System::Int32* StaticGet_CausticsProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7568);
		}
		static ::System::Int32* StaticGet__CausticsBrightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x756C);
		}
		static ::System::Int32* StaticGet__FadeParams3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7570);
		}
		static ::System::Int32* StaticGet__EnableXZFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCausticProxy_TypeDefinitionIndex)->GetStaticField(0x7574);
		}
		::UnityEngine::MaterialPropertyBlock* m_MaterialPropertyBlock; // 0x18
		::System::Boolean overrideBrightness; // 0x20
		::System::Single brightness; // 0x24
		::UnityEngine::Vector3 causticProjectionAngle; // 0x28
		::System::Boolean enableYFade; // 0x34
		::UnityEngine::Vector2 yBlendValue; // 0x38
		::System::Boolean enableXZFade; // 0x40
		::UnityEngine::Vector4 xzBlendValue; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void RefreshMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_REFRESHMATRIX_OFFSET))(this);
		}

		::System::Void ClearPropertyBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_CLEARPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCAUSTICPROXY_ONVALIDATE_OFFSET))(this);
		}
	};
}
