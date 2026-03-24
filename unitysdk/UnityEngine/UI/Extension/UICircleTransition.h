#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_CALCULATECENTERUV_OFFSET UNITYSDK_OFFSET(0x15683290)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_CALCULATEMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x156825B0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x156834A0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x156820F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x15683650)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x156821A0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x15682FB0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x15683120)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x156829C0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x15682E80)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x156828E0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15682800)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x15682BA0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x15682D10)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x15682760)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x156836B0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x15682120)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x15683710)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x156837A0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15683830)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x156838C0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x156838D0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x156838E0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x156838F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x15683980)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UICircleTransition_TypeDefinitionIndex = 65647;

	class UICircleTransition : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Int32* StaticGet_CircleSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleTransition_TypeDefinitionIndex)->GetStaticField(0xB8E0);
		}
		static ::System::Int32* StaticGet_Invert()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleTransition_TypeDefinitionIndex)->GetStaticField(0xB8E4);
		}
		static ::System::Int32* StaticGet_CircleTransitionParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleTransition_TypeDefinitionIndex)->GetStaticField(0xB8E8);
		}
		// static const ::System::String* UICircleTransitionPath; // 0x0
		::UnityEngine::RectTransform* centerTransform; // 0x20
		::System::Single circleSize; // 0x28
		::System::Boolean invert; // 0x2C
		::UnityEngine::Material* _modifiedMaterial; // 0x30
		::Foundation::AssetRequestHandle _uiCircleTransitionHandle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION__CCTOR_OFFSET))();
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_SETDIRTY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 CalculateCenterUV(::UnityEngine::RectTransform* sourceTransform, ::UnityEngine::RectTransform* targetTransform, ::System::Single aspect)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_CALCULATECENTERUV_OFFSET))(sourceTransform, targetTransform, aspect);
		}

		::System::Void CalculateMaterialParams(::UnityEngine::Vector2& centerUV, ::System::Single& centerToFarDistance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_CALCULATEMATERIALPARAMS_OFFSET))(this, centerUV, centerToFarDistance);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
