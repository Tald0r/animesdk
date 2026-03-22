#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Reflection
{
	inline static constexpr unsigned int ParameterModifier_TypeDefinitionIndex = 555;

	struct alignas(8) ParameterModifier
	{
		::Il2CppArray<::System::Boolean>* _byRef; // 0x10
	};
}
