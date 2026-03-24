#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int Il2CppMetadataAllocKind_TypeDefinitionIndex = 6843;

	enum class Il2CppMetadataAllocKind : ::System::Int32
	{
		Miscellaneous = 0,
		FieldInfo = 7,
		MethodInfo = 3,
		MethodRGCTX = 12,
		GenericInst = 15,
		String = 9,
		Class = 1,
		Inflated = 16,
		GenericClass = 13,
		EventInfo = 5,
		StringLiteral = 10,
		Vtable = 2,
		ExtraMethodInfo = 8,
		PropertyInfo = 6,
		ClassRGCTX = 11,
		ParameterInfo = 4,
		GenericMethod = 14,
	};
}
