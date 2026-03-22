#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Decal_DBufferHTileBit_TypeDefinitionIndex = 28859;

	enum class Decal_DBufferHTileBit : ::System::Int32
	{
		Diffuse = 1,
		Normal = 2,
		Mask = 4,
	};
}
