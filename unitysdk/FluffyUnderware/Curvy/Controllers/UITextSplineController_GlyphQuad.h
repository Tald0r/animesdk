#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_CALCRECT_OFFSET UNITYSDK_OFFSET(0x1ABDE520)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1ABDE230)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_LOADTRIS_OFFSET UNITYSDK_OFFSET(0x1ABDE5A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_LOAD_OFFSET UNITYSDK_OFFSET(0x1ABDE260)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_ROTATE_OFFSET UNITYSDK_OFFSET(0x1ABDEC80)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_SAVE_1_OFFSET UNITYSDK_OFFSET(0x1ABDEB40)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_SAVE_OFFSET UNITYSDK_OFFSET(0x1ABDE860)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1ABDEB70)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABDF1C0)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int UITextSplineController_GlyphQuad_TypeDefinitionIndex = 35723;

	class UITextSplineController_GlyphQuad : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIVertex>* V; // 0x10
		::UnityEngine::Rect Rect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_GET_CENTER_OFFSET))(this);
		}

		::System::Void Load(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_LOAD_OFFSET))(this, verts, index);
		}

		::System::Void LoadTris(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_LOADTRIS_OFFSET))(this, verts, index);
		}

		::System::Void calcRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_CALCRECT_OFFSET))(this);
		}

		::System::Void Save(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_SAVE_OFFSET))(this, verts, index);
		}

		::System::Void Save_1(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_SAVE_1_OFFSET))(this, vh);
		}

		::System::Void Transpose(::UnityEngine::Vector3 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_TRANSPOSE_OFFSET))(this, v);
		}

		::System::Void Rotate(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_ROTATE_OFFSET))(this, rotation);
		}
	};
}
