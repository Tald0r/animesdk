#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int AttributeSetType_TypeDefinitionIndex = 37351;

	enum class AttributeSetType : ::System::Int32
	{
		Value = 0,
		Clamp = 3,
		AtMost = 2,
		AtLeast = 1,
	};
}
