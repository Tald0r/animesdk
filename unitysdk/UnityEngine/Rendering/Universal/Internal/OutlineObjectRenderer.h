#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/OutlineObjectRenderer_OutlineRendererConfig.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEANRENDERERS_OFFSET UNITYSDK_OFFSET(0x19FB06B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEARBOXCLIPBOUNDS_OFFSET UNITYSDK_OFFSET(0x19FB27C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINEPASS_OFFSET UNITYSDK_OFFSET(0x19FB1540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x19FAFA20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_OUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x19FAFAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19FB0270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19FAFB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_RESETGLOBALOUTLINEPARAMS_OFFSET UNITYSDK_OFFSET(0x19FB0840)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETBOXCLIPBOUNDS_OFFSET UNITYSDK_OFFSET(0x19FB2750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x19FAF990)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETUPSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x19FB08E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SET_OUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x19FAFB00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_TRYBLITSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x19FB11B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19FB1580)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FB2A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB2800)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineObjectRenderer_TypeDefinitionIndex = 28911;

	class OutlineObjectRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer_OutlineRendererConfig>*>** StaticGet_OutlineObjRendererMaterials()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer_OutlineRendererConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x22140);
		}
		static ::System::Int32* StaticGet__WindParam1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A00);
		}
		static ::System::Int32* StaticGet__OutlineThickness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A04);
		}
		static ::System::Int32* StaticGet__SingleColorParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A08);
		}
		static ::System::Int32* StaticGet__BaseColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A0C);
		}
		static ::System::Single* StaticGet_InnerColorIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A10);
		}
		static ::System::Int32* StaticGet__InnerColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A14);
		}
		static ::System::Int32* StaticGet__WindParam4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A18);
		}
		static ::System::Int32* StaticGet__WindParam3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A1C);
		}
		static ::System::Int32* StaticGet__BaseMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A20);
		}
		static ::System::Int32* StaticGet_uiCameraOutlineCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A24);
		}
		static ::System::Single* StaticGet_outlineThickness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A28);
		}
		static ::System::Int32* StaticGet__WindParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A2C);
		}
		static ::System::Int32* StaticGet__Cutoff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A30);
		}
		static ::System::Boolean* StaticGet_RequireOutlinePass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A34);
		}
		static ::System::Boolean* StaticGet_DisableOutline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A35);
		}
		static ::System::Boolean* StaticGet_FillInnerBehindScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A36);
		}
		static ::System::Boolean* StaticGet_FillInner()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A37);
		}
		static ::System::Int32* StaticGet__IsAvatarUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A38);
		}
		static ::System::Int32* StaticGet__EnableFlicker()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A3C);
		}
		static ::UnityEngine::Color* StaticGet_InnerColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer_TypeDefinitionIndex)->GetStaticField(0x6A40);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer_OutlineRendererConfig>* rendererMaterial; // 0x18
		::UnityEngine::Gradient* OutlineColorGradient; // 0x20
		::System::Single OutlineColorIntensity; // 0x28
		::System::Single OutlineAnimLifetime; // 0x2C
		::System::Boolean OccludedByDepth; // 0x30
		::System::Boolean OccludedByCharacters; // 0x31
		::System::Boolean enableMultiOutline; // 0x32
		::System::Boolean enableAvatarUI; // 0x33
		::System::Boolean forceVisible; // 0x34
		::System::Boolean outlineInUICamera; // 0x35
		::System::Boolean UseLODGroup; // 0x36
		::UnityEngine::Renderer* renderer; // 0x38
		::UnityEngine::Material* material; // 0x40
		::System::Single timer; // 0x48
		::System::Int32 layerMask; // 0x4C
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x50
		::System::Boolean rendererNeedHizCulling; // 0x58
		::System::Boolean m_Is3DMap; // 0x59
		::System::Boolean m_EnableBoxClip; // 0x5A
		::UnityEngine::Vector4 m_LayerCenterAndHeight; // 0x5C
		::UnityEngine::Vector4 m_LayerSize; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER__CCTOR_OFFSET))();
		}

		static ::System::Void SetOutlineThickness(::System::Single thickness)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETOUTLINETHICKNESS_OFFSET))(thickness);
		}

		static ::System::Single GetOutlineThickness()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINETHICKNESS_OFFSET))();
		}

		::System::Single get_OutlineThickness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_OUTLINETHICKNESS_OFFSET))(this);
		}

		::System::Void set_OutlineThickness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SET_OUTLINETHICKNESS_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONDISABLE_OFFSET))(this);
		}

		static ::System::Void ResetGlobalOutlineParams()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_RESETGLOBALOUTLINEPARAMS_OFFSET))();
		}

		::System::Void SetupScreenSpaceOutline(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETUPSCREENSPACEOUTLINE_OFFSET))(this, outlineActive, outlineBeforeTransparent);
		}

		::System::Void TryBlitScreenSpaceOutline(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_TRYBLITSCREENSPACEOUTLINE_OFFSET))(this, cmd);
		}

		::System::Int32 GetOutlinePass()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINEPASS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void CleanRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEANRENDERERS_OFFSET))(this);
		}

		::System::Void SetBoxClipBounds(::UnityEngine::Vector4 layerCenterAndHeight, ::UnityEngine::Vector4 layerSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETBOXCLIPBOUNDS_OFFSET))(this, layerCenterAndHeight, layerSize);
		}

		::System::Void ClearBoxClipBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEARBOXCLIPBOUNDS_OFFSET))(this);
		}
	};
}
