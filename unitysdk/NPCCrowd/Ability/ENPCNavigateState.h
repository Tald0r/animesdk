#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCNavigateState_TypeDefinitionIndex = 77729;

	enum class ENPCNavigateState : ::System::Int32
	{
		NavmeshToPathFollow = 2,
		Navmesh = 1,
		PathFollow = 0,
	};
}
