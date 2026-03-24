#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_Step_TypeDefinitionIndex = 43878;

	enum class DownloadDiffPatcher_Step : ::System::Byte
	{
		Finish = 0x4,
		Init = 0x0,
		Collect = 0x1,
		DiffPatch = 0x2,
		Move = 0x3,
	};
}
