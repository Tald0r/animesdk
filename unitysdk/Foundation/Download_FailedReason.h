#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int Download_FailedReason_TypeDefinitionIndex = 7933;

	enum class Download_FailedReason : ::System::Int32
	{
		NotReachable = 2,
		CreateTempFileFailed = 11,
		FileLenghCheckFaild = 4,
		HashCheckFaild = 3,
		DiskNotEnough = 1,
		None = 0,
		Other = 7,
		ServerException = 5,
		IOFailedInCompleteContent = 12,
		IOFailedInReceiveData = 10,
		NullBufferInReceiveData = 9,
		TimeOut = 8,
		RequestException = 6,
	};
}
