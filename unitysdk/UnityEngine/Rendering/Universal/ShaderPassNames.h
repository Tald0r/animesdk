#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERPASSNAMES__CCTOR_OFFSET UNITYSDK_OFFSET(0x183C0490)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderPassNames_TypeDefinitionIndex = 28430;

	class ShaderPassNames : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EnemyPointerToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5490);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CountDownNumber()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5494);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineFXDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5498);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PreZPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x549C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostLightMVOff()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54A0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentDecal()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54A4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DBufferMesh_S()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54A8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54AC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FXStencilOverride()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54B0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54B4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharOutlineDepthOnly()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54B8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FluidSourcePass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54BC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FullResCharacterToon()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54C0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Silhouette()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54C4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_ShadowCaster()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54C8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_StencilShadowReceiver()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54CC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54D0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OapqueAfterSkyCloud()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54D4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentFullRes_Next()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54D8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MirrorReflection()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54DC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Water()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54E0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_HalfResCharacterOutline()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54E4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_StencilShadowCaster()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54E8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Chessboard3DUI()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54EC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Caustics()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54F0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PartialBlur()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54F4);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterHairOutlineFXDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54F8);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GeometryAlphaBlendPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x54FC);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DBufferMesh_D()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5500);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DebugPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5504);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterNoTess()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5508);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_BeforeTransparentFullRes()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x550C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MotionVector()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5510);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentHalfResDecal()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5514);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_SpineOutlineMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5518);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OceanEdgeFoam()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x551C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OpaqueForwardAfterDeferredShading()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5520);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterDepthOnlyPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5524);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EasyShadow()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5528);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DebugPassForOpaque()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x552C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharDepthOnly()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5530);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_MotionVectorForOutline()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5534);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentHalfRes_Next()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5538);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_TransparentModulateCG()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x553C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOutlineFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5540);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorPreZ()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5544);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DepthOnlyPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5548);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_AvatarGeometryPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x554C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_ReadMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5550);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterSSR()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5554);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WaterTess()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5558);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_UIAvatarShadowPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x555C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EnemyPointerOutlineDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5560);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_SeparateEmission()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5564);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostAO()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5568);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterOffscreenTransparentEye()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x556C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_DistortionOpaque()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5570);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PlanarReflectionCubeCorrected()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5574);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_HalfResCharacterOutlineFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5578);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorTransparentPreview()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x557C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_PostLight()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5580);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_GeometryPass()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5584);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_FaceToonDeferredWithStencilShadow()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5588);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_OverlayFX()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x558C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_Ocean()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5590);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WriteTransparentMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5594);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_WriteMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x5598);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_RevertMask()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x559C);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_InteriorTransparent()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55A0);
		}
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_CharacterToonDeferred()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderPassNames_TypeDefinitionIndex)->GetStaticField(0x55A4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERPASSNAMES__CCTOR_OFFSET))();
		}
	};
}
