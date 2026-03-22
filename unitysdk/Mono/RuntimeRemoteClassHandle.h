#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeStructs_RemoteClass.h"
#include "unitysdk/System/ValueType.h"

namespace Mono
{
	inline static constexpr unsigned int RuntimeRemoteClassHandle_TypeDefinitionIndex = 9;

	struct alignas(8) RuntimeRemoteClassHandle
	{
		::Mono::RuntimeStructs_RemoteClass* value; // 0x10
	};
}
