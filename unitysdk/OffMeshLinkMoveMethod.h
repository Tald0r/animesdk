#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int OffMeshLinkMoveMethod_TypeDefinitionIndex = 61781;

enum class OffMeshLinkMoveMethod : ::System::Int32
{
	Curve = 3,
	NormalSpeed = 1,
	Teleport = 0,
	Parabola = 2,
};
