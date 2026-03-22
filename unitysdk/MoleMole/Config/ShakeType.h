#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShakeType_TypeDefinitionIndex = 69397;

	enum class ShakeType : ::System::Int32
	{
		CameraScreenDir = 2,
		EpicenterDir = 0,
		CameraDir = 1,
	};
}
