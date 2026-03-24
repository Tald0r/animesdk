#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppHideMetadataTypes_TypeDefinitionIndex = 6829;

	enum class Il2CppHideMetadataTypes : ::System::Int32
	{
		Methods = 2,
		Properties = 4,
		None = 0,
		Standard = 1,
		Events = 16,
		Fields = 8,
		All = 31,
	};
}
