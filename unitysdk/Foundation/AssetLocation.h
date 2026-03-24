#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetLocation_TypeDefinitionIndex = 8179;

	enum class AssetLocation : ::System::Byte
	{
		Internal = 0x1,
		Streaming = 0x3,
		None = 0x2,
		External = 0x5,
		EditorOnly = 0x0,
		Medium = 0x4,
	};
}
