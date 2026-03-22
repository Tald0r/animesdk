#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_RADARCHART_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B126D30)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B1278F0)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B127870)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1B126F80)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1B127770)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B1277C0)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_SETRADARDATA_OFFSET UNITYSDK_OFFSET(0x1B126C70)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_SET_RADARDATAARRAY_OFFSET UNITYSDK_OFFSET(0x1B126C10)
#define UNITYENGINE_UI_EXTENSION_RADARCHART__CTOR_OFFSET UNITYSDK_OFFSET(0x1B126D10)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B1279A0)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B1279D0)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B127AA0)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1B127B40)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1B127B50)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B127B60)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RadarChart_TypeDefinitionIndex = 8473;

	class RadarChart : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Texture* m_Texture; // 0xF8
		::Il2CppArray<::System::Single>* m_RadarDataArray; // 0x100
		::System::Boolean m_RadarDataCanBeLargerThanOne; // 0x108
		::System::Single m_AngleOffset; // 0x10C
		::System::Int32 m_UVType; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART__CTOR_OFFSET))(this);
		}

		::System::Void set_RadarDataArray(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_SET_RADARDATAARRAY_OFFSET))(this, value);
		}

		::System::Void SetRadarData(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_SETRADARDATA_OFFSET))(this, index, value);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
