#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_UIWAVECLIP_CANVASADDITIONALCHANNEL_OFFSET UNITYSDK_OFFSET(0x15F65080)
#define UNITYENGINE_UI_UIWAVECLIP_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x15F654E0)
#define UNITYENGINE_UI_UIWAVECLIP_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x15F65340)
#define UNITYENGINE_UI_UIWAVECLIP_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x15F65420)
#define UNITYENGINE_UI_UIWAVECLIP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x15F651C0)
#define UNITYENGINE_UI_UIWAVECLIP_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x15F65280)
#define UNITYENGINE_UI_UIWAVECLIP_START_OFFSET UNITYSDK_OFFSET(0x15F65130)
#define UNITYENGINE_UI_UIWAVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x15F65000)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x15F657C0)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x15F65850)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x15F658E0)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x15F65970)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_START_OFFSET UNITYSDK_OFFSET(0x15F65A00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UIWaveClip_TypeDefinitionIndex = 65226;

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
