#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderDataAliveType_TypeDefinitionIndex = 50778;

	enum class RenderDataAliveType : ::System::Int32
	{
		Unknown = 0,
		KillWhenNotExecuting = 2,
		Permanent = 1,
	};
}
