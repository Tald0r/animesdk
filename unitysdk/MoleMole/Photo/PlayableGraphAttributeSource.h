#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAttributeSource_TypeDefinitionIndex = 42623;

	enum class PlayableGraphAttributeSource : ::System::Byte
	{
		Curve = 0x2,
		Variable = 0x0,
		Property = 0x1,
	};
}
