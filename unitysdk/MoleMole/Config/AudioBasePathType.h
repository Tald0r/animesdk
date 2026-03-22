#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioBasePathType_TypeDefinitionIndex = 77785;

	enum class AudioBasePathType : ::System::Int32
	{
		Bare = 3,
		AppData = 2,
		Persistent = 1,
		Streaming = 0,
	};
}
