#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioBasePathType_TypeDefinitionIndex = 57114;

	enum class AudioBasePathType : ::System::Int32
	{
		Bare = 3,
		Persistent = 1,
		AppData = 2,
		Streaming = 0,
	};
}
