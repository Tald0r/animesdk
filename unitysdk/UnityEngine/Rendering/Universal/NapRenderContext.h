#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CLEARPERCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x17B89E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x17B89E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_DECALHEIGHTMAPDISABLE_OFFSET UNITYSDK_OFFSET(0x17B89F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_INDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x17B84C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TEMPENABLEOPAQUEOBJECTSCENELUT_OFFSET UNITYSDK_OFFSET(0x17B89EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x17B89E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B89FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17B89FA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderContext_TypeDefinitionIndex = 28535;

	class NapRenderContext : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::NapRenderContext** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderContext**)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x21090);
		}
		static ::System::Single* StaticGet_s_CloudShadowIntensityMultiplier()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5890);
		}
		static ::System::Boolean* StaticGet_s_IsInGalgame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5894);
		}
		static ::System::Boolean* StaticGet_s_IsInBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5895);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_CharacterIgnisFatuusOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5896);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableCubeMapArray()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5897);
		}
		static ::System::Boolean* StaticGet_s_IsInGacha()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5898);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_FxCharacterGhostFullScreenBlitOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x5899);
		}
		static ::System::Boolean* StaticGet_s_IsInBlackCanvas()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x589A);
		}
		static ::System::Boolean* StaticGet_s_UseChessboard3DUIMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x589B);
		}
		static ::System::Boolean* StaticGet_s_DisableMotionVectorMaskForTAAOnMobile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x589C);
		}
		static ::System::Boolean* StaticGet_useFastPureUIPipeline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x589D);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableKodama()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x589E);
		}
		static ::System::Boolean* StaticGet_s_PerCameraStateSpineOutlineMaskOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x589F);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableVFX_VOLUMETRIC_SHADOW()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x58A0);
		}
		static ::System::Boolean* StaticGet_s_ReleaseUnUsedLightMapAndCubeData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x58A1);
		}
		// static const ::System::Boolean IsCGProject; // 0x0
		// static const ::UnityEngine::Rendering::Universal::SimulatingPlatform Platform; // 0x0
		::System::UInt32 uiBlurCounter; // 0x10
		::System::Single uiBlurRadius; // 0x14
		::UnityEngine::Vector4 global_unity_SHC; // 0x18
		::System::Boolean ignoreTimeScale; // 0x28
		::System::Boolean muteCharacterLightTonemap; // 0x29
		::System::Boolean disableTaau; // 0x2A
		::UnityEngine::Vector4 sceneEffectParams; // 0x2C
		::UnityEngine::Vector4 global_unity_SHAg; // 0x3C
		::System::Single globalSpecialDamageTextureAlpha; // 0x4C
		::UnityEngine::Vector4 global_unity_SHAr; // 0x50
		::UnityEngine::Vector4 global_unity_SHAb; // 0x60
		::UnityEngine::Vector4 global_unity_SHBb; // 0x70
		::System::Single _TimeScale; // 0x80
		::UnityEngine::Vector3 mainCharacterPos; // 0x84
		::UnityEngine::Vector4 avatarMainLightPosition; // 0x90
		::UnityEngine::Vector4 global_unity_SHBr; // 0xA0
		::UnityEngine::Vector4 global_unity_SHBg; // 0xB0

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
