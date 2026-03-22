#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppMethodImplOptions_TypeDefinitionIndex = 6840;

	enum class Il2CppMethodImplOptions : ::System::Int32
	{
		ILForceRemove = 8,
		ForceInlining = 1,
		NoMerge = 4,
		ILForceInlining = 2,
	};
}
