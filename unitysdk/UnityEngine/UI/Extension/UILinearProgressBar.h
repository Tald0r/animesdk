#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYPATTERNOVERRAMP_OFFSET UNITYSDK_OFFSET(0x6A8CFA0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYRAMP_OFFSET UNITYSDK_OFFSET(0x6A8CD40)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYROUNDEDBORDER_OFFSET UNITYSDK_OFFSET(0x6A8CA00)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ENABLECANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x6A8BD50)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B473A20)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x6A8BBB0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1B473CD0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x6A8C510)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x6A8C350)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x6A8C430)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6A8BF00)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x6A8C2A0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x6A8BE90)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x6A8C0E0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x6A8C1C0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x6A8BC90)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x6A8BBC0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_START_OFFSET UNITYSDK_OFFSET(0x6A8BE00)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B473DF0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B473D30)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1B474140)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B4741D0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B474260)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B4742F0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B474300)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1B474310)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B4743A0)
#define UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR___BASE_START_OFFSET UNITYSDK_OFFSET(0x1B474430)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearProgressBar_TypeDefinitionIndex = 43089;

	class UILinearProgressBar : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_RoundBorderUnit()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x39EA0);
		}
		static ::System::Collections::IEnumerable** StaticGet_RampStyles()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x39EA8);
		}
		static ::System::Collections::IEnumerable** StaticGet_DirectionType()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0x39EB0);
		}
		static ::System::Int32* StaticGet_Direction()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE370);
		}
		static ::System::Int32* StaticGet_RampEndColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE374);
		}
		static ::System::Int32* StaticGet_Mirror()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE378);
		}
		static ::System::Int32* StaticGet_BorderRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE37C);
		}
		static ::System::Int32* StaticGet_PatternTexPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE380);
		}
		static ::System::Int32* StaticGet_ProgressPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE384);
		}
		static ::System::Int32* StaticGet_PatternUVSpeedPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE388);
		}
		static ::System::Int32* StaticGet_Ramp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE38C);
		}
		static ::System::Int32* StaticGet_RampTilingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE390);
		}
		static ::System::Int32* StaticGet_RampStyle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE394);
		}
		static ::System::Int32* StaticGet_PatternColorPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE398);
		}
		static ::System::Int32* StaticGet_RampDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE39C);
		}
		static ::System::Int32* StaticGet_Aspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE3A0);
		}
		static ::System::Int32* StaticGet_RoundedBorder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE3A4);
		}
		static ::System::Int32* StaticGet_PatternOverRampPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE3A8);
		}
		static ::System::Int32* StaticGet_UseMainTexAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE3AC);
		}
		static ::System::Int32* StaticGet_RampStartColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE3B0);
		}
		static ::System::Int32* StaticGet_PatternSkewPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE3B4);
		}
		static ::System::Int32* StaticGet_PatternSpacingPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILinearProgressBar_TypeDefinitionIndex)->GetStaticField(0xE3B8);
		}
		// static const ::System::String* UILinearProgressBarMatPath; // 0x0
		::System::Int32 progressBarDirection; // 0x20
		::System::Boolean roundedBorder; // 0x24
		::System::Int32 roundBorderUnit; // 0x28
		::System::Single borderRadius; // 0x2C
		::System::Single borderPixels; // 0x30
		::System::Single m_Progress; // 0x34
		::System::Boolean useMainTexAlpha; // 0x38
		::System::Boolean ramp; // 0x39
		::System::Int32 rampDirection; // 0x3C
		::System::Int32 rampStyle; // 0x40
		::UnityEngine::Color rampStartColor; // 0x44
		::UnityEngine::Color rampEndColor; // 0x54
		::System::Single rampTiling; // 0x64
		::System::Single rampOffset; // 0x68
		::System::Boolean mirror; // 0x6C
		::System::Boolean PatternOverRamp; // 0x6D
		::UnityEngine::Sprite* PatternSprite; // 0x70
		::UnityEngine::Color PatternColor; // 0x78
		::UnityEngine::Vector2 PatternUVSpeed; // 0x88
		::System::Single PatternSkew; // 0x90
		::System::Single PatternSpacing; // 0x94
		::UnityEngine::Material* _modifiedMaterial; // 0x98
		::System::Boolean _isLoadedMaterial; // 0xA0
		::Foundation::AssetRequestHandle _uiLinearProgressBarMatHandle; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR__CCTOR_OFFSET))();
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_SET_PROGRESS_OFFSET))(this, value);
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

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void ApplyRoundedBorder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYROUNDEDBORDER_OFFSET))(this);
		}

		::System::Void ApplyRamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYRAMP_OFFSET))(this);
		}

		::System::Void ApplyPatternOverRamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARPROGRESSBAR_APPLYPATTERNOVERRAMP_OFFSET))(this);
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
