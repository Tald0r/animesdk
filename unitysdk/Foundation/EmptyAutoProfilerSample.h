#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_EMPTYAUTOPROFILERSAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x884030)

namespace Foundation
{
	inline static constexpr unsigned int EmptyAutoProfilerSample_TypeDefinitionIndex = 7723;

	struct alignas(1) EmptyAutoProfilerSample
	{
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EMPTYAUTOPROFILERSAMPLE_DISPOSE_OFFSET))(this);
		}
	};
}
