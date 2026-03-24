#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CLEARPERCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x17825080)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x17825010)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_DECALHEIGHTMAPDISABLE_OFFSET UNITYSDK_OFFSET(0x17825140)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_INDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x1781FDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TEMPENABLEOPAQUEOBJECTSCENELUT_OFFSET UNITYSDK_OFFSET(0x178250E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x17825070)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x178251E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x178251A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderContext_TypeDefinitionIndex = 29478;

	class NapRenderContext : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::NapRenderContext** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderContext**)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x22700);
		}
		static ::System::Single* StaticGet_s_CloudShadowIntensityMultiplier()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5970);
		}
		static ::System::Boolean* StaticGet_s_ReleaseUnUsedLightMapAndCubeData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5974);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableKodama()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5975);
		}
		static ::System::Boolean* StaticGet_s_PerCameraStateSpineOutlineMaskOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5976);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_FxCharacterGhostFullScreenBlitOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5977);
		}
		static ::System::Boolean* StaticGet_s_UseChessboard3DUIMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5978);
		}
		static ::System::Boolean* StaticGet_s_IsInGacha()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5979);
		}
		static ::System::Boolean* StaticGet_s_IsInGalgame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x597A);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableCubeMapArray()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x597B);
		}
		static ::System::Boolean* StaticGet_useFastPureUIPipeline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x597C);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableVFX_VOLUMETRIC_SHADOW()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x597D);
		}
		static ::System::Boolean* StaticGet_s_DisableMotionVectorMaskForTAAOnMobile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x597E);
		}
		static ::System::Boolean* StaticGet_s_IsInBlackCanvas()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x597F);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_CharacterIgnisFatuusOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5980);
		}
		static ::System::Boolean* StaticGet_s_IsInBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5981);
		}
		// static const ::System::Boolean IsCGProject; // 0x0
		// static const ::UnityEngine::Rendering::Universal::SimulatingPlatform Platform; // 0x0
		::UnityEngine::Vector4 global_unity_SHC; // 0x10
		::System::UInt32 uiBlurCounter; // 0x20
		::UnityEngine::Vector4 global_unity_SHBb; // 0x24
		::System::Single _TimeScale; // 0x34
		::UnityEngine::Vector4 global_unity_SHAb; // 0x38
		::UnityEngine::Vector4 global_unity_SHBg; // 0x48
		::System::Boolean ignoreTimeScale; // 0x58
		::System::Boolean muteCharacterLightTonemap; // 0x59
		::System::Boolean disableTaau; // 0x5A
		::UnityEngine::Vector4 global_unity_SHBr; // 0x5C
		::UnityEngine::Vector4 avatarMainLightPosition; // 0x6C
		::UnityEngine::Vector4 global_unity_SHAg; // 0x7C
		::System::Single uiBlurRadius; // 0x8C
		::System::Single globalSpecialDamageTextureAlpha; // 0x90
		::UnityEngine::Vector4 global_unity_SHAr; // 0x94
		::UnityEngine::Vector4 sceneEffectParams; // 0xA4
		::UnityEngine::Vector3 mainCharacterPos; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CCTOR_OFFSET))();
		}

		::System::Single get_timeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_timeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TIMESCALE_OFFSET))(this, value);
		}

		static ::System::Void ClearPerCameraState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CLEARPERCAMERASTATE_OFFSET))();
		}

		::System::Void set_indirectSpecularIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_INDIRECTSPECULARINTENSITY_OFFSET))(this, value);
		}

		::System::Void set_tempEnableOpaqueObjectSceneLut(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TEMPENABLEOPAQUEOBJECTSCENELUT_OFFSET))(this, value);
		}

		::System::Void set_decalHeightMapDisable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_DECALHEIGHTMAPDISABLE_OFFSET))(this, value);
		}
	};
}
