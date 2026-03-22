#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GraphicSettings_EParticleLightLevel_TypeDefinitionIndex = 28543;

	enum class GraphicSettings_EParticleLightLevel : ::System::Int32
	{
		DiffuseAndSpecular = 0,
		DiffuseOnly = 1,
	};
}
