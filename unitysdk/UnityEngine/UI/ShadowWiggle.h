#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/Shadow.h"
#include "unitysdk/UnityEngine/UI/ShadowWiggle_ShadowInfo.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_SHADOWWIGGLE_APPLYSHADOWWITHPURECOLORINFO_OFFSET UNITYSDK_OFFSET(0x18185270)
#define UNITYENGINE_UI_SHADOWWIGGLE_HANDLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x18184B40)
#define UNITYENGINE_UI_SHADOWWIGGLE_INIT_OFFSET UNITYSDK_OFFSET(0x18184C50)
#define UNITYENGINE_UI_SHADOWWIGGLE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x181855D0)
#define UNITYENGINE_UI_SHADOWWIGGLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18184E80)
#define UNITYENGINE_UI_SHADOWWIGGLE_START_OFFSET UNITYSDK_OFFSET(0x18184E10)
#define UNITYENGINE_UI_SHADOWWIGGLE_UPDATESHADOW_OFFSET UNITYSDK_OFFSET(0x18184FB0)
#define UNITYENGINE_UI_SHADOWWIGGLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18184F40)
#define UNITYENGINE_UI_SHADOWWIGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18185A60)
#define UNITYENGINE_UI_SHADOWWIGGLE___BASE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x18185B40)
#define UNITYENGINE_UI_SHADOWWIGGLE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18185B50)
#define UNITYENGINE_UI_SHADOWWIGGLE___BASE_START_OFFSET UNITYSDK_OFFSET(0x18185BE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ShadowWiggle_TypeDefinitionIndex = 64587;

	class ShadowWiggle : public ::UnityEngine::UI::Shadow
	{
	public:
		::System::Boolean FillSolidColor; // 0x40
		::System::Boolean ConstDistance; // 0x41
		::System::Collections::Generic::List_1<::UnityEngine::UI::ShadowWiggle_ShadowInfo>* ShadowInfoList; // 0x48
		::UnityEngine::RectTransform* _transform; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE__CTOR_OFFSET))(this);
		}

		::System::Void HandleKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE_HANDLEKEYWORD_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE_INIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE_UPDATESHADOW_OFFSET))(this);
		}

		::System::Void ApplyShadowWithPureColorInfo(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Color32 color, ::System::Int32 start, ::System::Int32 end, ::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE_APPLYSHADOWWITHPURECOLORINFO_OFFSET))(this, verts, color, start, end, x, y);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_ModifyMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE___BASE_MODIFYMESH_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWWIGGLE___BASE_START_OFFSET))(this);
		}
	};
}
