#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }

#define SCENEFOGCARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x189D6EB0)
#define SCENEFOGCARD_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x189D6F60)
#define SCENEFOGCARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x189D7430)
#define SCENEFOGCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x189D73D0)

inline static constexpr unsigned int SceneFogCard_TypeDefinitionIndex = 28964;

class SceneFogCard : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet__VSpeed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x22DA0);
	}
	static ::System::String** StaticGet__Noise()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x22DA8);
	}
	static ::System::String** StaticGet__SofDepth()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x22DB0);
	}
	static ::System::String** StaticGet__USpeed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x22DB8);
	}
	static ::System::Int32* StaticGet__FallOff()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5DD0);
	}
	static ::System::Int32* StaticGet__Coverage()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5DD4);
	}
	static ::System::Int32* StaticGet__EdgeFade()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5DD8);
	}
	static ::UnityEngine::Color* StaticGet_weatherControledSceneFogCardAmbientScatteringColor()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5DDC);
	}
	static ::System::Int32* StaticGet__MainLightScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5DEC);
	}
	static ::System::Int32* StaticGet__NoiseScale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5DF0);
	}
	static ::System::Int32* StaticGet__AmbientScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5DF4);
	}
	static ::System::Int32* StaticGet__BottomFade()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5DF8);
	}
	static ::System::Int32* StaticGet__Density()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5DFC);
	}
	static ::System::Int32* StaticGet__MieG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E00);
	}
	static ::System::Int32* StaticGet__HeightFogColorBlend()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneFogCard_TypeDefinitionIndex)->GetStaticField(0x5E04);
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
