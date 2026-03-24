#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/UIText.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_TEXTITALICADOBESTYLE_GET_LASTPOPULATETEXTHEIGHT_OFFSET UNITYSDK_OFFSET(0x18214490)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLE_GET_LASTPOPULATETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0x18214360)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x182145C0)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLE_REBUILD_OFFSET UNITYSDK_OFFSET(0x18215430)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x182154F0)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLE___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x18215540)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLE___BASE_REBUILD_OFFSET UNITYSDK_OFFSET(0x18215550)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TextItalicAdobeStyle_TypeDefinitionIndex = 45774;

	class TextItalicAdobeStyle : public ::UnityEngine::UI::UIText
	{
	public:
		::Il2CppArray<::UnityEngine::UIVertex>* m_TempVerts; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE__CTOR_OFFSET))(this);
		}

		::System::Single get_LastPopulateTextWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE_GET_LASTPOPULATETEXTWIDTH_OFFSET))(this);
		}

		::System::Single get_LastPopulateTextHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE_GET_LASTPOPULATETEXTHEIGHT_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE_REBUILD_OFFSET))(this, update);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_Rebuild(::UnityEngine::UI::CanvasUpdate P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE___BASE_REBUILD_OFFSET))(this, P0);
		}
	};
}
