#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshCollectGeometry_TypeDefinitionIndex = 23619;

	enum class NavMeshCollectGeometry : ::System::Int32
	{
		RenderMeshes = 0,
		PhysicsColliders = 1,
	};
}
