#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int Download_FailedReason_TypeDefinitionIndex = 8258;

	enum class Download_FailedReason : ::System::Int32
	{
		NotReachable = 2,
		TimeOut = 8,
		HashCheckFaild = 3,
		Other = 7,
		IOFailedInReceiveData = 10,
		FileLenghCheckFaild = 4,
		IOFailedInCompleteContent = 12,
		NullBufferInReceiveData = 9,
		RequestException = 6,
		CreateTempFileFailed = 11,
		DiskNotEnough = 1,
		ServerException = 5,
		None = 0,
	};
}
