#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_ErrorCode_TypeDefinitionIndex = 43884;

	enum class DownloadDiffPatcher_ErrorCode : ::System::SByte
	{
		FileInvalid = -4,
		VerifyError = -3,
		HDiffException = -2,
		Succ = 0,
		CollectError = -1,
	};
}
