#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ECrowdShadowFineness_TypeDefinitionIndex = 59837;

	enum class ECrowdShadowFineness : ::System::Int32
	{
		PROXY_LOD3_MESH_CAST = 1,
		ORIGINAL_RENDER_CAST = 0,
		NO_CAST = 4,
		PROXY_CAPSULE_CAST = 3,
		PROXY_SIMPLE_MESH_CAST = 2,
	};
}
