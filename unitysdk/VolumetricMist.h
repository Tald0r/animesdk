#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/VolumetricMist_MistMaskModeType.h"
#include "unitysdk/VolumetricMist_MistModeType.h"
#include "unitysdk/VolumetricMist_VolumetricMistRenderInfo.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }

#define VOLUMETRICMIST_APPLYQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0x1796AA60)
#define VOLUMETRICMIST_GENERATEOPTIMIZEMESH_OFFSET UNITYSDK_OFFSET(0x1796AE10)
#define VOLUMETRICMIST_INITMATERIAL_OFFSET UNITYSDK_OFFSET(0x1796A940)
#define VOLUMETRICMIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1796C110)
#define VOLUMETRICMIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1796A880)
#define VOLUMETRICMIST_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1796C1A0)
#define VOLUMETRICMIST_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1796C1F0)
#define VOLUMETRICMIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1796CC60)
#define VOLUMETRICMIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1796CBE0)

inline static constexpr unsigned int VolumetricMist_TypeDefinitionIndex = 28055;

class VolumetricMist : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet__V_MIST_MASK_FADE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x210D0);
	}
	static ::System::String** StaticGet__V_MIST_WITH_NOISE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x210D8);
	}
	static ::System::String** StaticGet__V_MIST_QUALITY_CUSTOM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x210E0);
	}
	static ::System::String** StaticGet__V_MIST_DO_NOT_RECEIVE_SHADOW()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x210E8);
	}
	static ::System::String** StaticGet__V_MIST_AROUND_SURFACE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x210F0);
	}
	static ::System::String** StaticGet__V_MIST_QUALITY_HIGH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x210F8);
	}
	static ::System::String** StaticGet__V_MIST_QUALITY_MIDDLE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x21100);
	}
	static ::System::String** StaticGet__V_MIST_DISABLE_OCEAN_FADE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x21108);
	}
	static ::System::String** StaticGet__V_MIST_MASK_CUT()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x21110);
	}
	static ::System::Int32* StaticGet__NoiseScale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58D0);
	}
	static ::System::Int32* StaticGet__MistParams2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58D4);
	}
	static ::System::Int32* StaticGet__MistParams1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58D8);
	}
	static ::System::Int32* StaticGet__AmbientScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58DC);
	}
	static ::System::Int32* StaticGet__MistMaskMap()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58E0);
	}
	static ::System::Int32* StaticGet__MistParamsPartA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58E4);
	}
	static ::System::Int32* StaticGet__NoiseOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58E8);
	}
	static ::System::Int32* StaticGet__CustomVolumetricParams()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58EC);
	}
	static ::System::Int32* StaticGet__VolumeNoise()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58F0);
	}
	static ::System::Int32* StaticGet__EdgeFade()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58F4);
	}
	static ::System::Int32* StaticGet__MainLightScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58F8);
	}
	static ::System::Int32* StaticGet__NoiseChannelWeights()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x58FC);
	}
	static ::System::Int32* StaticGet__BoundingBoxScale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5900);
	}
	::UnityEngine::Material* VolumetricMistMaterial; // 0x18
	::VolumetricMist_MistModeType MistMode; // 0x20
	::UnityEngine::Color MainLightScatteringColor; // 0x24
	::UnityEngine::Color AmbientScatteringColor; // 0x34
	::System::Single MieG; // 0x44
	::System::Single HeightFogColorBlend; // 0x48
	::System::Single Density; // 0x4C
	::System::Single Coverage; // 0x50
	::System::Single FallOff; // 0x54
	::UnityEngine::Texture3D* VolumeNoise; // 0x58
	::UnityEngine::Vector4 NoiseChannelWeights; // 0x60
	::System::Single NoiseScale; // 0x70
	::UnityEngine::Texture2D* Mask; // 0x78
	::VolumetricMist_MistMaskModeType MaskMode; // 0x80
	::System::Single WindSpeed; // 0x84
	::System::Single MistGravity; // 0x88
	::UnityEngine::Material* material; // 0x90
	::UnityEngine::MeshRenderer* renderer; // 0x98
	::UnityEngine::Vector3 noiseOffsetWS; // 0xA0
	::VolumetricMist_VolumetricMistRenderInfo renderInfo; // 0xB0
	::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality Quality; // 0xC0
	::System::Boolean doNotReceiveShadow; // 0xC4
	::System::Boolean doNotBlendWithOcean; // 0xC5
	::System::Boolean optimizeShape; // 0xC6
	::System::Int32 sectorAngle; // 0xC8
	::UnityEngine::Mesh* customMesh; // 0xD0
	::System::Single innerHoleSize; // 0xD8
	::System::Boolean setAsNotReachableArea; // 0xDC
	::System::Boolean useNearQuadDepth; // 0xDD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VOLUMETRICMIST__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONENABLE_OFFSET))(this);
	}

	::System::Void InitMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_INITMATERIAL_OFFSET))(this);
	}

	::System::Void GenerateOptimizeMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_GENERATEOPTIMIZEMESH_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONDESTROY_OFFSET))(this);
	}

	::System::Void ApplyQualitySetting()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_APPLYQUALITYSETTING_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONVALIDATE_OFFSET))(this);
	}

	::System::Void OnWillRenderObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONWILLRENDEROBJECT_OFFSET))(this);
	}
};
