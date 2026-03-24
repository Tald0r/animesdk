#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int AttributeSetType_TypeDefinitionIndex = 46811;

	enum class AttributeSetType : ::System::Int32
	{
		AtLeast = 1,
		Clamp = 3,
		Value = 0,
		AtMost = 2,
	};
}
