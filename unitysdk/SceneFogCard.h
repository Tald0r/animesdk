#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }

#define SCENEFOGCARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18380DD0)
#define SCENEFOGCARD_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x18380E80)
#define SCENEFOGCARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x18381350)
#define SCENEFOGCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x183812F0)

inline static constexpr unsigned int SceneFogCard_TypeDefinitionIndex = 28024;

class SceneFogCard : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet__VSpeed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x21460);
	}
	static ::System::String** StaticGet__USpeed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x21468);
	}
	static ::System::String** StaticGet__Noise()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x21470);
	}
	static ::System::String** StaticGet__SofDepth()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x21478);
	}
	static ::System::Int32* StaticGet__EdgeFade()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5C90);
	}
	static ::System::Int32* StaticGet__FallOff()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5C94);
	}
	static ::System::Int32* StaticGet__MieG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5C98);
	}
	static ::System::Int32* StaticGet__Coverage()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5C9C);
	}
	static ::System::Int32* StaticGet__BottomFade()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5CA0);
	}
	static ::System::Int32* StaticGet__HeightFogColorBlend()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5CA4);
	}
	static ::System::Int32* StaticGet__AmbientScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5CA8);
	}
	static ::UnityEngine::Color* StaticGet_weatherControledSceneFogCardAmbientScatteringColor()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5CAC);
	}
	static ::System::Int32* StaticGet__Density()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5CBC);
	}
	static ::System::Int32* StaticGet__NoiseScale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5CC0);
	}
	static ::System::Int32* StaticGet__MainLightScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5CC4);
	}
	::UnityEngine::Color MainLightScatteringColor; // 0x18
	::UnityEngine::Color AmbientScatteringColor; // 0x28
	::System::Single MieG; // 0x38
	::System::Single HeightFogColorBlend; // 0x3C
	::System::Single Density; // 0x40
	::System::Single Coverage; // 0x44
	::System::Single FallOff; // 0x48
	::System::Single SofDepth; // 0x4C
	::System::Single EdgeFade; // 0x50
	::System::Single BottomFade; // 0x54
	::UnityEngine::Texture2D* NoiseTex; // 0x58
	::System::Single NoiseScale; // 0x60
	::System::Single USpeed; // 0x64
	::System::Single VSpeed; // 0x68
	::UnityEngine::MaterialPropertyBlock* propertyBlock; // 0x70
	::UnityEngine::MeshRenderer* renderer; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEFOGCARD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENEFOGCARD__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEFOGCARD_ONENABLE_OFFSET))(this);
	}

	::System::Void OnWillRenderObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEFOGCARD_ONWILLRENDEROBJECT_OFFSET))(this);
	}
};
