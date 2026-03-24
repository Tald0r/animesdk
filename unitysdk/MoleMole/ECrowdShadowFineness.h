#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ECrowdShadowFineness_TypeDefinitionIndex = 49974;

	enum class ECrowdShadowFineness : ::System::Int32
	{
		ORIGINAL_RENDER_CAST = 0,
		PROXY_CAPSULE_CAST = 3,
		NO_CAST = 4,
		PROXY_SIMPLE_MESH_CAST = 2,
		PROXY_LOD3_MESH_CAST = 1,
	};
}
