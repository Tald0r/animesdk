#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppMethodImplOptions_TypeDefinitionIndex = 6834;

	enum class Il2CppMethodImplOptions : ::System::Int32
	{
		ILForceInlining = 2,
		ForceInlining = 1,
		NoMerge = 4,
		ILForceRemove = 8,
	};
}
