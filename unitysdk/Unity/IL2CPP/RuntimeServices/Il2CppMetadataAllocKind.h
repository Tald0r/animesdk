#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int Il2CppMetadataAllocKind_TypeDefinitionIndex = 6825;

	enum class Il2CppMetadataAllocKind : ::System::Int32
	{
		PropertyInfo = 6,
		EventInfo = 5,
		String = 9,
		ParameterInfo = 4,
		FieldInfo = 7,
		GenericInst = 15,
		MethodRGCTX = 12,
		Inflated = 16,
		GenericClass = 13,
		GenericMethod = 14,
		MethodInfo = 3,
		Class = 1,
		ExtraMethodInfo = 8,
		Vtable = 2,
		StringLiteral = 10,
		Miscellaneous = 0,
		ClassRGCTX = 11,
	};
}
