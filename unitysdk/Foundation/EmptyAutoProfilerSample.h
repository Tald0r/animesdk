#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_EMPTYAUTOPROFILERSAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B8300)

namespace Foundation
{
	inline static constexpr unsigned int EmptyAutoProfilerSample_TypeDefinitionIndex = 7885;

	struct alignas(1) EmptyAutoProfilerSample
	{
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EMPTYAUTOPROFILERSAMPLE_DISPOSE_OFFSET))(this);
		}
	};
}
