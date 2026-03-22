#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Comic { class MonoComicBubbleImage; }
namespace UnityEngine::UI { class VertexHelper; }

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubbleImage_Struct_2_B97ADA5A37E1598F_TypeDefinitionIndex = 67663;

	struct alignas(8) MonoComicBubbleImage_Struct_2_B97ADA5A37E1598F
	{
		::UnityEngine::UI::VertexHelper* Field_2_9; // 0x10
		::MoleMole::Comic::MonoComicBubbleImage* Field_2_2; // 0x18
		::UnityEngine::Vector2 Field_2_4; // 0x20
		::System::Single Field_2_1; // 0x28
		::UnityEngine::Vector2 Field_2_0; // 0x2C
		::System::Single Field_2_5; // 0x34
		::System::Boolean Field_2_8; // 0x38
		::System::Single Field_2_6; // 0x3C
		::UnityEngine::Color32 Field_2_10; // 0x40
		::System::Single Field_2_3; // 0x44
		::UnityEngine::Vector2 Field_2_7; // 0x48
	};
}
