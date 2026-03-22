#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_ErrorCode_TypeDefinitionIndex = 61320;

	enum class DownloadDiffPatcher_ErrorCode : ::System::SByte
	{
		VerifyError = -3,
		CollectError = -1,
		Succ = 0,
		HDiffException = -2,
		FileInvalid = -4,
	};
}
