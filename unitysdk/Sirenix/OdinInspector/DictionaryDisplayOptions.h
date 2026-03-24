#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DictionaryDisplayOptions_TypeDefinitionIndex = 7257;

	enum class DictionaryDisplayOptions : ::System::Int32
	{
		OneLine = 0,
		Foldout = 1,
		CollapsedFoldout = 2,
		ExpandedFoldout = 3,
	};
}
