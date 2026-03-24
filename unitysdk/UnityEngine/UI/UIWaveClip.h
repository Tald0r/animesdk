#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_UIWAVECLIP_CANVASADDITIONALCHANNEL_OFFSET UNITYSDK_OFFSET(0x15AC83A0)
#define UNITYENGINE_UI_UIWAVECLIP_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x15AC8800)
#define UNITYENGINE_UI_UIWAVECLIP_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x15AC8660)
#define UNITYENGINE_UI_UIWAVECLIP_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x15AC8740)
#define UNITYENGINE_UI_UIWAVECLIP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x15AC84E0)
#define UNITYENGINE_UI_UIWAVECLIP_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x15AC85A0)
#define UNITYENGINE_UI_UIWAVECLIP_START_OFFSET UNITYSDK_OFFSET(0x15AC8450)
#define UNITYENGINE_UI_UIWAVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC8320)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x15AC8AE0)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x15AC8B70)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x15AC8C00)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x15AC8C90)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_START_OFFSET UNITYSDK_OFFSET(0x15AC8D20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UIWaveClip_TypeDefinitionIndex = 48055;

	class UIWaveClip : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP__CTOR_OFFSET))(this);
		}

		::System::Void CanvasAdditionalChannel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_CANVASADDITIONALCHANNEL_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_START_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_START_OFFSET))(this);
		}
	};
}
