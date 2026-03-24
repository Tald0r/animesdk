#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int UICameraInfoShowType_TypeDefinitionIndex = 64761;

	enum class UICameraInfoShowType : ::System::Int32
	{
		PC = 1,
		Mobile = 0,
	};
}
