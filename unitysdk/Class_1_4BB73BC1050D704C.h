#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define CLASS_1_4BB73BC1050D704C_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0xD294180)
#define CLASS_1_4BB73BC1050D704C_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0xD294540)
#define CLASS_1_4BB73BC1050D704C_METHOD_1_A45A820EF9D1A2A1_OFFSET UNITYSDK_OFFSET(0xD294970)
#define CLASS_1_4BB73BC1050D704C_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xD2942A0)
#define CLASS_1_4BB73BC1050D704C__CTOR_OFFSET UNITYSDK_OFFSET(0xD294120)

inline static constexpr unsigned int Class_1_4BB73BC1050D704C_TypeDefinitionIndex = 44676;

class Class_1_4BB73BC1050D704C : public ::System::Object
{
public:
	::UnityEngine::UI::VerticalLayoutGroup* Field_1_10; // 0x10
	::UnityEngine::UI::ContentSizeFitter* Field_1_9; // 0x18
	::UnityEngine::UI::GridLayoutGroup* Field_1_1; // 0x20
	::UnityEngine::RectTransform* Field_1_2; // 0x28
	::UnityEngine::RectTransform* Field_1_8; // 0x30
	::UnityEngine::RectTransform* Field_1_0; // 0x38
	::System::Boolean Field_1_3; // 0x40
	::UnityEngine::TextAnchor Field_1_6; // 0x44
	::System::Int32 Field_1_5; // 0x48
	::UnityEngine::Vector2 Field_1_4; // 0x4C
	::System::Single Field_1_7; // 0x54

	::System::Void _ctor(::UnityEngine::RectTransform* a1, ::UnityEngine::UI::GridLayoutGroup* a2, ::UnityEngine::RectTransform* a3, ::UnityEngine::UI::ContentSizeFitter* a4, ::UnityEngine::UI::VerticalLayoutGroup* a5, ::UnityEngine::RectTransform* a6, ::System::Boolean a7, ::UnityEngine::Vector2 a8, ::System::Int32 a9, ::UnityEngine::TextAnchor a10, ::System::Single a11)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::UI::GridLayoutGroup*, ::UnityEngine::RectTransform*, ::UnityEngine::UI::ContentSizeFitter*, ::UnityEngine::UI::VerticalLayoutGroup*, ::UnityEngine::RectTransform*, ::System::Boolean, ::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::TextAnchor, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C_METHOD_1_124E7DAB85EAFECD_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C_METHOD_1_1947BC35B7A7FCB8_OFFSET))(this);
	}

	static ::System::Single Method_1_A45A820EF9D1A2A1(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BB73BC1050D704C_METHOD_1_A45A820EF9D1A2A1_OFFSET))(a1, a2, a3);
	}
};
