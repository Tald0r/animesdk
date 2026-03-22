#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ENABLECANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x16EBA940)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x16EBB720)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x16EBBD20)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x16EBB230)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x16EBAFF0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x16EBB0D0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16EBABB0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x16EBAF40)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16EBAB40)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x16EBAD80)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x16EBAE60)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x16EBA9F0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_START_OFFSET UNITYSDK_OFFSET(0x16EBAAB0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x16EBB1B0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EBBE20)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBBD80)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x16EBC050)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x16EBC0E0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16EBC170)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x16EBC200)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16EBC210)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x16EBC220)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x16EBC2B0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_START_OFFSET UNITYSDK_OFFSET(0x16EBC340)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearProgressBar_TypeDefinitionIndex = 78837;

	class UILinearProgressBar : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_RampStyles()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x37030);
		}
		static ::System::Collections::IEnumerable** StaticGet_DirectionType()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x37038);
		}
		static ::System::Int32* StaticGet_RampTilingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC60);
		}
		static ::System::Int32* StaticGet_RampDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC64);
		}
		static ::System::Int32* StaticGet_RampEndColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC68);
		}
		static ::System::Int32* StaticGet_Aspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC6C);
		}
		static ::System::Int32* StaticGet_RampStartColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC70);
		}
		static ::System::Int32* StaticGet_Ramp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC74);
		}
		static ::System::Int32* StaticGet_Direction()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC78);
		}
		static ::System::Int32* StaticGet_Mirror()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC7C);
		}
		static ::System::Int32* StaticGet_UseMainTexAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC80);
		}
		static ::System::Int32* StaticGet_RampStyle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC84);
		}
		static ::System::Int32* StaticGet_Progress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC88);
		}
		static ::System::Int32* StaticGet_RoundedBorder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xDC8C);
		}
		// static const ::System::String* UILinearProgressBarMatPath; // 0x0
		::System::Int32 progressBarDirection; // 0x20
		::System::Boolean roundedBorder; // 0x24
		::System::Single progress; // 0x28
		::System::Boolean useMainTexAlpha; // 0x2C
		::System::Boolean ramp; // 0x2D
		::System::Int32 rampDirection; // 0x30
		::System::Int32 rampStyle; // 0x34
		::UnityEngine::Color rampStartColor; // 0x38
		::UnityEngine::Color rampEndColor; // 0x48
		::System::Single rampTiling; // 0x58
		::System::Single rampOffset; // 0x5C
		::System::Boolean mirror; // 0x60
		::UnityEngine::Material* _modifiedMaterial; // 0x68
		::System::Boolean _isLoadedMaterial; // 0x70
		::Foundation::AssetRequestHandle _uiLinearProgressBarMatHandle; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CCTOR_OFFSET))();
		}

		::System::Void EnableCanvasShaderChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ENABLECANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SETDIRTY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_UPDATE_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFYMESH_OFFSET))(this, vh);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_START_OFFSET))(this);
		}
	};
}
