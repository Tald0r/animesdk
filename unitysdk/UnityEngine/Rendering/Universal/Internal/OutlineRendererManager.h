#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRenderer_ReadonlyRenderState.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EOutlineRenderType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/OutlineRendererConfig.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class IOutlineObjectRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_CHECKREQUIREOUTLINEPASS_OFFSET UNITYSDK_OFFSET(0x17404E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_DRAWOUTLINEOBJECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x17429E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_GETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x17428AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x17428B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_RESETGLOBALOUTLINEPARAMS_OFFSET UNITYSDK_OFFSET(0x17429D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x17428A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINEETHEREYE_OFFSET UNITYSDK_OFFSET(0x17429870)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINENORMAL_OFFSET UNITYSDK_OFFSET(0x17428D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x17409EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_TRYBLITSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x1740CE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x17428CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1742A240)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineRendererManager_TypeDefinitionIndex = 29866;

	class OutlineRendererManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>*>** StaticGet_s_OutlineObjRendererMaterials()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x23F80);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*>** StaticGet_s_OutlineRenderers()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x23F88);
		}
		static ::System::Int32* StaticGet__WindParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76F0);
		}
		static ::System::Single* StaticGet_s_InnerColorIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76F4);
		}
		static ::System::Int32* StaticGet__OutlineTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76F8);
		}
		static ::System::Int32* StaticGet__OutlineTextureTiling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76FC);
		}
		static ::System::Int32* StaticGet__Cutoff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7700);
		}
		static ::System::Int32* StaticGet__InnerColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7704);
		}
		static ::System::Int32* StaticGet__BaseColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7708);
		}
		static ::System::Single* StaticGet_s_OutlineThickness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x770C);
		}
		static ::System::Int32* StaticGet__IsAvatarUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7710);
		}
		static ::System::Boolean* StaticGet_s_FillInner()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7714);
		}
		static ::System::Boolean* StaticGet_s_DisableOutline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7715);
		}
		static ::System::Boolean* StaticGet_s_RequireOutlineBlit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7716);
		}
		static ::System::Boolean* StaticGet_s_OutlineFlicker()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7717);
		}
		static ::System::Int32* StaticGet__BaseMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7718);
		}
		static ::UnityEngine::Color* StaticGet_s_InnerColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x771C);
		}
		static ::System::Int32* StaticGet__EnableFlicker()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x772C);
		}
		static ::System::Boolean* StaticGet_s_FillInnerBehindScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7730);
		}
		static ::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType* StaticGet_s_LastActiveOutlineRenderType()
		{
			return (::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7734);
		}
		static ::System::Int32* StaticGet__WindParam1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7738);
		}
		static ::System::Int32* StaticGet_s_UiCameraOutlineCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x773C);
		}
		static ::System::Int32* StaticGet__OutlineTextureOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7740);
		}
		static ::System::Int32* StaticGet__FlickerSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7744);
		}
		static ::System::Int32* StaticGet__WindParam4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7748);
		}
		static ::System::Int32* StaticGet__OutlineThickness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x774C);
		}
		static ::System::Int32* StaticGet__WindParam3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7750);
		}
		static ::System::Int32* StaticGet__SingleColorParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7754);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetOutlineThickness(::System::Single thickness)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETOUTLINETHICKNESS_OFFSET))(thickness);
		}

		static ::System::Single GetOutlineThickness()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_GETOUTLINETHICKNESS_OFFSET))();
		}

		static ::System::Void Register(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer* outlineObjectRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REGISTER_OFFSET))(outlineObjectRenderer);
		}

		static ::System::Void Unregister(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer* outlineObjectRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_UNREGISTER_OFFSET))(outlineObjectRenderer);
		}

		static ::System::Boolean CheckRequireOutlinePass(::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState& renderState, ::System::Boolean applyPostProcessing)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_CHECKREQUIREOUTLINEPASS_OFFSET))(renderState, applyPostProcessing);
		}

		static ::System::Void SetupScreenSpaceOutline(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINE_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void SetupScreenSpaceOutlineNormal(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINENORMAL_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void SetupScreenSpaceOutlineEtherEye(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINEETHEREYE_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void ResetGlobalOutlineParams()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_RESETGLOBALOUTLINEPARAMS_OFFSET))();
		}

		static ::System::Void DrawOutlineObjectRenderers(::System::Int32 cullingMask, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_DRAWOUTLINEOBJECTRENDERERS_OFFSET))(cullingMask, cmd);
		}

		static ::System::Void TryBlitScreenSpaceOutline(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_TRYBLITSCREENSPACEOUTLINE_OFFSET))(cmd);
		}
	};
}
