#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalgameFilterType_TypeDefinitionIndex = 41338;

	enum class GalgameFilterType : ::System::Int32
	{
		None = 0,
		Recalling = 1,
		WhiteScreenShaking = 3,
		Connecting = 2,
	};
}
