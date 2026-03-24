#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EntityDieCheckType_TypeDefinitionIndex = 54134;

	enum class EntityDieCheckType : ::System::Int32
	{
		ZeroHp = 0,
		EntityDestroy = 1,
		DeadShot = 2,
	};
}
