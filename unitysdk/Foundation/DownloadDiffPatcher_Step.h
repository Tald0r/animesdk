#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_Step_TypeDefinitionIndex = 61322;

	enum class DownloadDiffPatcher_Step : ::System::Byte
	{
		Finish = 0x4,
		Init = 0x0,
		DiffPatch = 0x2,
		Collect = 0x1,
		Move = 0x3,
	};
}
